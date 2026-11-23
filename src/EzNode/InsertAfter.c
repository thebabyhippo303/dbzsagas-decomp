/* EzNode__InsertAfter @ 0x80265B68 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*UnlinkFn)(void *obj);
typedef struct VTab2 { char pad[64]; s16 adj; char p_[2]; UnlinkFn fn; } VTab2;
typedef struct EzNode { void *f0; char p4[4]; void *f8; void *f12; VTab2 *v16; } EzNode;
void EzNode__InsertAfter(EzNode *this, EzNode *other) {
    if (other == NULL)
        return;
    if (other == this)
        return;
    other->v16->fn((char *)other + other->v16->adj);
    other->f0 = this->f0;
    other->f8 = this->f8;
    other->f12 = this;
    if (this->f8 != NULL) {
        ((EzNode *)this->f8)->f12 = other;
    }
    this->f8 = other;
}

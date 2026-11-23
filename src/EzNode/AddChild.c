/* EzNode__AddChild @ 0x80265A14 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct VT1 { char pad[64]; s16 adj; char p_[2]; void (*fn)(void *); } VT1;
typedef struct VT2 { char pad[56]; s16 adj; char p_[2]; void (*fn)(void *, void *); } VT2;
typedef struct EzNode { void *f0; void *f4; void *f8; void *f12; void *v16; } EzNode;

void EzNode__AddChild(EzNode *self, EzNode *child) {
    VT1 *vt;
    EzNode *node;
    VT2 *vt2;
    if (child != NULL && child != self) {
        vt = (VT1 *)child->v16;
        vt->fn((char *)child + vt->adj);
        if (self->f4 == NULL) {
            self->f4 = child;
        } else {
            node = (EzNode *)self->f4;
            while (node->f8 != NULL) {
                node = (EzNode *)node->f8;
            }
            vt2 = (VT2 *)node->v16;
            vt2->fn((char *)node + vt2->adj, child);
        }
        child->f0 = self;
    }
}

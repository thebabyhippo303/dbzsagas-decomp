/* MenuPanel__DestroyEzNode @ 0x80276358 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void SphereText__Destroy(void *, s32);
void EzNode__Destroy(void *, s32);
void MenuPanel__DestroyEzNode(void *arg0, s32 arg1) {
    char *p;
    void *vt;
    if ((char *)arg0 + 0x20C != NULL) {
        p = (char *)arg0 + 0x54C;
        if ((char *)arg0 + 0x20C != p) {
            do {
                p -= 0x1A0;
                vt = M2C_FIELD(p, void **, 0x19C);
                M2C_FIELD(vt, void (**)(void *, s32), 0xC)((void *)(p + M2C_FIELD(vt, s16 *, 8)), 0);
            } while (((u32)arg0 + 0x20C) != (u32)p);
        }
    }
    SphereText__Destroy((char *)arg0 + 0x18, 2);
    EzNode__Destroy(arg0, arg1);
}
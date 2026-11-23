/* SphereText__GetSize @ 0x802721FC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_80349FF8 __attribute__((section(".data")));

f32 SphereText__GetSize(void *arg0) {
    void *self = arg0;
    void *o;
    f32 a;

    a = M2C_FIELD(self, f32 *, 0x1B0);
    if (a > lbl_80349FF8) {
        goto skip;
    }
    o = M2C_FIELD(self, void **, 0x19C);
    return M2C_FIELD(o, f32 (**)(void *), 0x3BC)((char *)self + M2C_FIELD(o, s16 *, 0x3B8));
skip:
    return a;
}

/* Sphere__IsNotDrawable @ 0x8026D6E8 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 Sphere__IsNotDrawable(void *arg0) {
    M2C_UNK (*fn)(void *);
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x19C);
    fn = M2C_FIELD(vt, M2C_UNK (**)(void *), 0x27C);
    return fn(arg0 + M2C_FIELD(vt, s16 *, 0x278)) ^ 1;
}

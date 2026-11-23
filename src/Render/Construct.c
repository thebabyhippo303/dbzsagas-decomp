/* Render__Construct @ 0x80281438 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *Render__Construct(void *arg0) {
    void *a = arg0;
    s32 *p;
    M2C_FIELD(a, s32 *, 4) = 0;
    p = (s32 *)((char *)a + 16);
    M2C_FIELD(a, s32 *, 0) = 0;
    M2C_FIELD(a, s32 *, 8) = 0;
    M2C_FIELD(a, s32 *, 12) = 0;
    M2C_FIELD(p, s32 *, 4) = 0;
    M2C_FIELD(a, s32 *, 16) = 0;
    M2C_FIELD(p, s32 *, 8) = 0;
    M2C_FIELD(p, s32 *, 12) = 0;
    return arg0;
}

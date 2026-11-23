/* GcnController__SetAxisMapping @ 0x801D8548 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Controller__BuildResponseCurve(void *, void *, s32, f32, f32, f32, s32);

s32 GcnController__SetAxisMapping(void *arg0, s32 idx, s32 v, f32 f1, f32 f2, f32 f3) {
    void *self = arg0;
    s32 i4 = idx * 4;
    s32 vv = v;
    s32 *p0 = (s32 *)((char *)self + 228);
    f32 *p1;
    f32 *p2;
    s32 off;
    void *row;

    *(s32 *)((char *)p0 + i4) = vv;
    p1 = (f32 *)((char *)self + 296);
    *(f32 *)((char *)p1 + i4) = f1;
    p2 = (f32 *)((char *)self + 364);
    off = idx * 1024;
    *(f32 *)((char *)p2 + i4) = f2;
    off += 508;
    self = (char *)self + 432;
    row = (char *)arg0 + off;
    *(f32 *)((char *)self + i4) = f3;
    v = 256;
    Controller__BuildResponseCurve(arg0, row, v, f1, f2, f3, vv);
    return 1;
}

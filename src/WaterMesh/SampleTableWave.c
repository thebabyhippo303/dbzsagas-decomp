/* WaterMesh__SampleTableWave @ 0x8029FB8C (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_8035076C __attribute__((section(".data")));
extern f32 lbl_80350770 __attribute__((section(".data")));
extern f32 lbl_80350774 __attribute__((section(".data")));

void WaterMesh__SampleTableWave(void *arg0, s32 arg1, s32 arg2, s32 d6, f32 *arg4, f32 *arg5) {
    f32 b8[4];
    f32 b24[4];
    f32 b40[4];
    f32 *r3p;
    f32 *r7p;
    f32 *r30p;
    f32 *r6p;
    void *entry;
    void *r11p;
    void *r9p;
    s32 idx;
    f32 f9;
    f32 f11;
    f32 f10;
    f32 f6v;
    f32 c76c;
    f32 f7v;
    f32 t0;
    f32 t1;
    s32 base0;
    f32 o0;
    f32 o1;
    f32 o2;
    f32 s;
    f32 e196;
    f32 f0;
    (void)d6;

    {
        s32 stride = M2C_FIELD(arg0, s32 *, 0x94);
        c76c = lbl_8035076C;
        base0 = M2C_FIELD(arg0, s32 *, 0x90);
        r6p = arg4 + 21;
        arg2 = arg2 * stride;
        f11 = r6p[1];
        f6v = lbl_80350774;
        r3p = b40;
        f10 = r6p[2];
        arg1 = arg1 + arg2;
        f9 = arg4[21];
        arg1 = arg1 * 224;
    }
    f7v = lbl_80350770;
    r7p = b8;
    r30p = b24;
    base0 = base0 + arg1;
    entry = (void *)base0;
    r9p = M2C_FIELD(entry, void **, 8);
    r11p = (char *)entry + 196;
    t0 = M2C_FIELD(r9p, f32 *, 0) * f9;
    b40[0] = t0;
    b40[1] = M2C_FIELD(r9p, f32 *, 4) * f11;
    b40[2] = M2C_FIELD(r9p, f32 *, 8) * f10;
    o2 = M2C_FIELD(r9p, f32 *, 8);
    o0 = M2C_FIELD(r9p, f32 *, 0);
    o1 = M2C_FIELD(r9p, f32 *, 4);
    s = t0 + b40[1] + b40[2];
    s = s + s;
    b24[2] = o2 * s;
    b24[0] = o0 * s;
    b24[1] = o1 * s;
    b8[0] = b24[0] - f9;
    b8[2] = b24[2] - r6p[2];
    b8[1] = b24[1] - r6p[1];
    e196 = M2C_FIELD(entry, f32 *, 196);
    t1 = b8[0] * e196;
    b24[0] = t1;
    b24[2] = b8[2] * M2C_FIELD(r11p, f32 *, 8);
    b24[1] = b8[1] * M2C_FIELD(r11p, f32 *, 4);
    f0 = t1 + b24[1] + b24[2];
    f0 = f0 * f0 - c76c;
    f0 = f0 + f0;
    if (!(f0 >= f7v)) {
        f0 = f7v;
    } else {
        if (!(f0 <= f6v)) {
            f0 = f6v;
        }
    }
    arg5[1] = f0;
    arg5[0] = f0;
}

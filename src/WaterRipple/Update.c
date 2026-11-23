/* WaterRipple__Update @ 0x8029CEF0 (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK WaterRipple__BuildGeometry(s32);
extern f32 lbl_8034FFC8 __attribute__((section(".data")));
extern f32 lbl_8034FFCC __attribute__((section(".data")));
extern f64 lbl_8034FFD0 __attribute__((section(".data")));

void WaterRipple__Update(void *arg0, f32 farg0) {
    f32 t0;
    f32 x;
    f32 ax;
    f32 az;
    f32 z;
    f32 y;
    f32 d;
    f32 r;
    f32 sc;
    s32 ui;
    s32 c0;
    s32 c1;
    s32 dirty;
    void *aux;
    void *vp;

    t0 = M2C_FIELD(arg0, f32 *, 0x6C);
    dirty = 0;
    if (!(__builtin_fabsf(t0) < lbl_8034FFC8)) {
        dirty = 1;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) ((t0 * farg0) + M2C_FIELD(arg0, f32 *, 0x68));
    }
    aux = M2C_FIELD(arg0, void **, 0x4C);
    vp = arg0 + 0x50;
    x = M2C_FIELD(arg0, f32 *, 0x50);
    ax = M2C_FIELD(aux, f32 *, 0x14C);
    az = M2C_FIELD(aux, f32 *, 0x150);
    z = M2C_FIELD(vp, f32 *, 8);
    y = M2C_FIELD(vp, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((farg0 * ax) + x);
    M2C_FIELD(vp, f32 *, 8) = (f32) ((farg0 * az) + z);
    M2C_FIELD(vp, f32 *, 4) = y;
    if (!(M2C_FIELD(arg0, f32 *, 0x48) <= M2C_FIELD(arg0, f32 *, 0x70))) {
        d = M2C_FIELD(arg0, f32 *, 0x78);
        dirty = 1;
        r = M2C_FIELD(arg0, f32 *, 0x7C);
        goto tail1;
    } else if (M2C_FIELD(arg0, f32 *, 0x48) >= M2C_FIELD(arg0, f32 *, 0x74)) {
        goto next1;
    } else {
        d = M2C_FIELD(arg0, f32 *, 0x78);
        dirty = 1;
        r = M2C_FIELD(arg0, f32 *, 0x80);
    }
tail1:
    M2C_FIELD(arg0, f32 *, 0x78) = d + r * farg0;
next1:
    if (!(M2C_FIELD(arg0, f32 *, 0x48) <= M2C_FIELD(arg0, f32 *, 0x84))) {
        d = M2C_FIELD(arg0, f32 *, 0x8C);
        r = M2C_FIELD(arg0, f32 *, 0x90);
        goto tail2;
    } else if (M2C_FIELD(arg0, f32 *, 0x48) >= M2C_FIELD(arg0, f32 *, 0x88)) {
        goto next2;
    } else {
        d = M2C_FIELD(arg0, f32 *, 0x8C);
        r = M2C_FIELD(arg0, f32 *, 0x94);
    }
tail2:
    M2C_FIELD(arg0, f32 *, 0x8C) = d + r * farg0;
next2:
    sc = M2C_FIELD(arg0, f32 *, 0x8C) * lbl_8034FFCC;
    if (!(sc >= lbl_8034FFD0)) {
        ui = (s32) sc;
    } else {
        ui = (s32) ((f64) sc - lbl_8034FFD0) ^ 0x80000000;
    }
    c0 = 0;
    if ((u32) ui > 0U) {
        c0 = ui;
    }
    c1 = 255;
    if ((u32) c0 < 255U) {
        c1 = c0;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) ((c1 << 0x18) | 0xFF0000 | 0xFFFF);
    if (dirty != 0) {
        WaterRipple__BuildGeometry((s32) arg0);
    }
}

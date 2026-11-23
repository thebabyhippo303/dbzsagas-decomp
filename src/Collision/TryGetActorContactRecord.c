/* Collision__TryGetActorContactRecord @ 0x80091890 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32; typedef short s16;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
typedef struct Mask { s32 value; s32 bits; } Mask;
s32 Collide__TestObjects(s32, void *, void *);
extern f32 lbl_8031F894 __attribute__((section(".data")));
extern f32 lbl_8031F898 __attribute__((section(".data")));
extern Mask lbl_80394584 __attribute__((section(".data")));
extern Mask lbl_803946B4 __attribute__((section(".data")));
extern s32 lbl_803DE610;
extern s32 lbl_803DE614;
extern s32 lbl_803DD1C4;
extern char *lbl_803DCC50;
s32 Collision__TryGetActorContactRecord(s32 arg0, void *obj, s32 *rec, s32 arg3, f32 *out) {
    s32 r;
    s32 v;
    s32 m;
    char *t;
    char *p;
    char *q;
    u32 fl;
    s32 w1;
    s32 w2;
    s32 w3;
    *out = lbl_8031F894;
    if ((F(obj, s32 *, 0) & lbl_80394584.bits) != lbl_80394584.value) {
        goto ret1;
    }
    {
        void *vt = F(obj, void **, 0x34);
        r = ((s32 (*)(void *, s32))F(vt, void **, 0xF4))((char *)obj + F(vt, s16 *, 0xF0), arg0);
    }
    if ((r & lbl_803DE610) != 0) {
        goto fail;
    }
    if ((F(obj, s32 *, 0) & lbl_803946B4.bits) == lbl_803946B4.value) {
        goto fail;
    }
    v = 1;
    if ((F(obj, s32 *, 0x10) & lbl_803DD1C4) == 0) {
        v = 0;
    }
    if (v != 0) {
        goto fail;
    }
    m = r & lbl_803DE614;
    if (m != 0) {
        goto ret1;
    }
    if (arg3 != 0) {
        t = lbl_803DCC50 + 4;
        p = F(t, char **, 0xB0);
        q = lbl_803DCC50 + 0x20;
        fl = F(t, u32 *, 0x1BC);
        w1 = F(p, s32 *, 0xC);
        w2 = F(t, s32 *, 8);
        fl = fl | 0x40000000;
        F(t, s32 *, 0xC) = w1;
        w3 = F(p, s32 *, 0x10);
        F(t, s32 *, 0x14) = w2;
        F(t, s32 *, 0x10) = w3;
        F(t, u32 *, 0x1BC) = fl;
        if (p == q) {
            F(t, s32 *, 0xB4) = m;
        }
        *rec = Collide__TestObjects(arg0, obj, lbl_803DCC50 + 4);
        if (*rec != 0) {
            goto ret1;
        }
fail:
        return 0;
    }
    if (arg0 == F(*rec, s32 *, 0x20)) {
        *out = lbl_8031F898;
    }
ret1:
    return 1;
}

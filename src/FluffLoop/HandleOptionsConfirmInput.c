/* FluffLoop__HandleOptionsConfirmInput @ 0x80056D3C (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16; typedef float f32;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
s32 fn_802687C8(void *);
void Audio__SetOutputMode(void *, s32);
void fn_8026C4B4(void *, s32, s32, s32, s32);
f32 Audio__GetMasterSfxVolume(void *);
f32 Audio__GetMasterMusicVolume(void *);
f32 Audio__GetMasterDialogVolume(void *);
s32 ControllerMap__GetPlayerController(void *, u32);
extern f32 lbl_8031A8B4 __attribute__((section(".data")));
extern f32 lbl_8031A8B8 __attribute__((section(".data")));
extern char *lbl_803DC368;
extern void *lbl_803DCC20;
extern void *lbl_803DCC74;

void FluffLoop__HandleOptionsConfirmInput(char *self) {
    char *base;
    char *base2;
    void *vt;
    char *p;
    char *q;
    char *w;
    f32 fv;
    f32 s1;
    void *vtA;
    void *c4;
    void *pc;
    char *gl;
    s32 v1;
    s32 v2;
    void *c1;
    void *c2;
    void *c3;
    f32 s2;
    f32 s3;
    void *ctx;

    base = self + 0x10000;
    switch (fn_802687C8(base - 20848)) {
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
        break;
    case 0x106:
        fv = lbl_8031A8B4;
        ctx = lbl_803DCC20;
        F(self, s32 *, 0x1A640) = 1;
        F(self, s32 *, 0x1A644) = 1;
        F(self, f32 *, 0x1A658) = fv;
        F(self, f32 *, 0x1A65C) = fv;
        Audio__SetOutputMode(ctx, 1);
        fn_8026C4B4(base + 24256, 0x12345678, 0, 1, 1);
        fn_8026C4B4(base + 24672, 0x12345678, 0, 1, 1);
        fn_8026C4B4(base + 25088, 0x12345678, 0, 1, 1);
        fn_8026C4B4(base + 25504, 0x12345678, 0, 1, 1);
        vtA = F(self, void **, 0x19C);
        F(vtA, void (**)(void *), 0x56C)(self + F(vtA, s16 *, 0x568));
        break;
    case (s32)0x80000001:
        vt = F(self, void **, 0x19C);
        F(vt, void (**)(void *, s32, f32), 0x37C)(self + F(vt, s16 *, 0x378), 0, lbl_8031A8B8);
        base2 = self + 0x20000;
        p = lbl_803DC368 + 232;
        c1 = lbl_803DCC20;
        F(p, s32 *, 0x30) = F(base2, s32 *, -22976);
        s1 = Audio__GetMasterSfxVolume(c1);
        q = lbl_803DC368 + 232;
        c2 = lbl_803DCC20;
        F(p, f32 *, 0x24) = s1;
        s2 = Audio__GetMasterMusicVolume(c2);
        w = lbl_803DC368 + 232;
        c3 = lbl_803DCC20;
        F(q, f32 *, 0x28) = s2;
        s3 = Audio__GetMasterDialogVolume(c3);
        c4 = lbl_803DCC74;
        F(w, f32 *, 0x2C) = s3;
        pc = (void *)ControllerMap__GetPlayerController(c4, 0);
        v1 = F(base2, s32 *, -22972);
        gl = lbl_803DC368;
        F(pc, s32 *, 0x1F4) = v1;
        v2 = F(base2, s32 *, -22972);
        F(gl, s32 *, 0x11C) = v2;
        break;
    }
}

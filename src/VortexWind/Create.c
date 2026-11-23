/* VortexWind__Create @ 0x802186B4 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 60.9% (structurally right, flat body): VortexWind @ 0x802186B4. Saves self->r31/fa->f26/fb->f25/w1->r29/fc->f27/w2->r30/fd->f28, call arg3, fe->f29/ff->f31/fg->f30; NULL->0; flags=(lhz|0x31|w1); self-copy (0,8,4 via p=e+12); float stores (36..52,60,56); e[64]=(u8)w2; if(ff!=Z&&(w2&4)==0)e[64]=w2|2; return e[4]. Walls: MWCC groups int-saves before float-saves (init-block AND separate-statements both group; target interleaved, no lever found); p->r11 vs r10 (Z-lis base swap); or-operand fixed via fl=(w1|fl). Next: find save-interleave lever. */
typedef int s32; typedef short s16; typedef unsigned short u16; typedef unsigned char u8; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *WindMgr__AllocEntry(s16);
extern f32 lbl_803465A0 __attribute__((section(".data")));
s32 VortexWind__Create(void *arg0, s32 arg1, s32 arg2, s16 arg3, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6) {
    void *self;
    f32 fa;
    f32 fb;
    s32 w1;
    f32 fc;
    s32 w2;
    f32 fd;
    void *e;
    f32 fe;
    f32 ff;
    f32 fg;
    void *p;
    u16 fl;
    self = arg0;
    fa = farg0;
    fb = farg1;
    w1 = arg1;
    fc = farg2;
    w2 = arg2;
    fd = farg3;
    e = WindMgr__AllocEntry(arg3);
    fe = farg4;
    ff = farg5;
    fg = farg6;
    if (e == NULL) {
        return 0;
    }
    fl = M2C_FIELD(e, u16 *, 2);
    M2C_FIELD(e, u8 *, 1) = 2;
    fl |= 0x31;
    fl |= (u16)(w1 | fl);
    p = (char *)e + 12;
    M2C_FIELD(e, u16 *, 2) = fl;
    M2C_FIELD(e, s32 *, 12) = M2C_FIELD(self, s32 *, 0);
    M2C_FIELD(p, s32 *, 8) = M2C_FIELD(self, s32 *, 8);
    M2C_FIELD(p, s32 *, 4) = M2C_FIELD(self, s32 *, 4);
    M2C_FIELD(e, f32 *, 36) = fa;
    M2C_FIELD(e, f32 *, 40) = fb;
    M2C_FIELD(e, f32 *, 44) = fc;
    M2C_FIELD(e, f32 *, 48) = fd;
    M2C_FIELD(e, f32 *, 52) = fe;
    M2C_FIELD(e, f32 *, 60) = fg;
    M2C_FIELD(e, f32 *, 56) = ff;
    M2C_FIELD(e, u8 *, 64) = (u8)w2;
    if (ff != lbl_803465A0 && (w2 & 4) == 0) {
        M2C_FIELD(e, u8 *, 64) = (u8)(w2 | 2);
    }
    return M2C_FIELD(e, s32 *, 4);
}

/* Voice__ApplyEffectSend @ 0x8019D218 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct Sub { char pad0[0x20]; s32 f20; s32 f24; } Sub;
typedef struct Voice { char pad0[8]; Sub *sub; char pad1[0x38 - 0xC]; f32 s1; f32 s2; } Voice;

void fn_80196F6C(Sub *, f32, f32);
double fabs(double);
extern f32 lbl_8033FBEC __attribute__((section(".data")));
extern f32 lbl_8033FBF0 __attribute__((section(".data")));
extern f32 lbl_8033FBF4 __attribute__((section(".data")));

void Voice__ApplyEffectSend(Voice *v) {
    f32 t;
    f32 s1;
    Sub *sub = v->sub;
    Sub *r11;
    if (sub != 0) {
        r11 = v->sub;
        t = (sub->f20 != 0) ? lbl_8033FBEC : lbl_8033FBF0;
        s1 = v->s1;
        if (!(fabs(t - s1) >= lbl_8033FBF4)) {
            t = (r11->f24 != 0) ? lbl_8033FBEC : lbl_8033FBF0;
            if (!(fabs(t - v->s2) < lbl_8033FBF4)) {
                goto call;
            }
        } else {
call:
            fn_80196F6C(r11, s1, v->s2);
        }
    }
}

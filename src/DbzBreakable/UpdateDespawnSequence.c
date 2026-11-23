/* DbzBreakable__UpdateDespawnSequence @ 0x800E9980 (size: 0x218, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_80323724 __attribute__((section(".data")));
extern f32 lbl_80323728 __attribute__((section(".data")));
extern f32 lbl_8032372C __attribute__((section(".data")));
extern f32 lbl_80323730 __attribute__((section(".data")));
extern f32 lbl_80323734 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".bss")));
extern int lbl_803B1DDC __attribute__((section(".data")));

extern void Device__ResetState(void *self);
extern s32 DbzBreakable__CheckDespawnCollision(void *self);
extern void Actor__ToProtagonistCastImpl(void *self);
extern void fn_802CB514(void *self);
extern void Simple__SetScaleImpl(void *self, f32 *scale);
extern void Simple__AnimateScale(void *self, f32 *scale, s32 mode, f32 a, f32 b);
extern void fn_8021CDC8(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, f32 fa, f32 fb, f32 fc, f32 fd, s32 sa, s32 sb);
extern void fn_80188C68(void *a, void *b, s32 c, s32 d);
extern void fn_80251650(void *rec, int kind, int zero, void *self, void *self2);

void DbzBreakable__UpdateDespawnSequence(void *self) {
    f32 timer;
    f32 zero;
    f32 step;
    f32 scale[3];
    s32 hit;
    s32 spC;
    s32 sp8;

    if (*(s32 *)((char *)self + 2012) != 0) {
        timer = *(f32 *)((char *)self + 2040);
        zero = lbl_80323724;
        if (timer > zero) {
            step = lbl_803A35BC;
            if (timer > zero) {
                timer = timer - step;
                *(f32 *)((char *)self + 2040) = timer;
                if (timer < zero) {
                    *(f32 *)((char *)self + 2040) = zero;
                }
            } else if (timer < zero) {
                timer = timer + step;
                *(f32 *)((char *)self + 2040) = timer;
                if (timer > zero) {
                    *(f32 *)((char *)self + 2040) = zero;
                }
            }
        }
        if (*(f32 *)((char *)self + 2040) == lbl_80323724) {
            *(s32 *)((char *)self + 2016) = 1;
            *(s32 *)((char *)self + 2144) = 2;
        }
        if (*(s32 *)((char *)self + 2016) != 0) {
            Device__ResetState(self);
            if (*(s32 *)((char *)self + 2152) == 0) {
                hit = DbzBreakable__CheckDespawnCollision(self);
                if (hit == 0) {
                    *(s32 *)((char *)self + 2016) = hit;
                    *(s32 *)((char *)self + 2216) = 1;
                    Actor__ToProtagonistCastImpl(self);
                    fn_802CB514(self);
                    scale[0] = lbl_80323728;
                    scale[1] = lbl_80323728;
                    scale[2] = lbl_80323728;
                    Simple__SetScaleImpl(self, scale);
                    scale[0] = lbl_8032372C;
                    scale[1] = lbl_8032372C;
                    scale[2] = lbl_8032372C;
                    if (*(s32 *)((char *)self + 1348) == 3) {
                        Simple__AnimateScale(self, scale, 0, lbl_80323730, lbl_80323724);
                    } else {
                        Simple__AnimateScale(self, scale, 0, lbl_80323734, lbl_80323724);
                        spC = 0;
                        sp8 = 0;
                        fn_8021CDC8((char *)self + 1686, (char *)self + 56, 0, 0, 0, 0, 0, -1,
                                    lbl_80323724, lbl_8032372C, lbl_8032372C, lbl_8032372C, sp8, spC);
                        fn_80188C68((char *)self + 1636, (char *)self + 56, 0, 0);
                        if (*(s32 *)((char *)self + 2024) != 0) {
                            fn_80251650(&lbl_803B1DDC, 0x20102, 0, self, self);
                        }
                    }
                }
            }
        }
    }
}

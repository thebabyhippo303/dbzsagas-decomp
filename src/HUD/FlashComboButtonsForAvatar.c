/* HUD__FlashComboButtonsForAvatar @ 0x8010FB80 (size: 0x298, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define VT(o) (M2C_FIELD(o, void **, 0x19C))
#define ADJ(o, a) ((char *)(o) + M2C_FIELD(VT(o), s16 *, a))

void *UI__CreateWidget(void *, f32, f32, f32);
void *Game__GetPlayerImpl(void *, s32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void UiAnimator__SetKey(void *, f32, f32);
typedef void (*VtxVI)(void *, s32);
typedef void (*VtxVFF)(void *, f32, f32);
extern f32 lbl_803264B8 __attribute__((section(".data")));
extern f32 lbl_803264BC __attribute__((section(".data")));
extern f32 lbl_803264C0 __attribute__((section(".data")));
extern f32 lbl_803264C4 __attribute__((section(".data")));
extern f32 lbl_803264C8 __attribute__((section(".data")));
extern f32 lbl_803264CC __attribute__((section(".data")));
extern f32 lbl_803264D0 __attribute__((section(".data")));
extern f32 lbl_803264D4 __attribute__((section(".data")));
extern f32 lbl_803264D8 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void HUD__FlashComboButtonsForAvatar(void *arg0, s32 arg1) {
    f32 bc = lbl_803264BC;
    f32 c0 = lbl_803264C0;
    char *fbase = (char *)arg0 + 0x174C;
    s32 i = 0;
    s32 next;
    do {
        s32 off = i * 0x50C;
        char *eb = (char *)arg0 + 0x1268;
        next = i + 1;
        if (M2C_FIELD(eb, s32 *, off) == arg1) {
            char *slotbase = (char *)arg0 + 0x1740;
            char *b10 = (char *)arg0 + 0x1540;
            char *b11 = (char *)arg0 + 0x1544;
            s32 ctr = 0x18;
            s32 k = off;
            f32 cb = lbl_803264B8;
            do {
                M2C_FIELD(b10, f32 *, k) = cb;
                M2C_FIELD(b11, s32 *, k) = 2;
                k += 0x10;
                ctr--;
            } while (ctr != 0);
            if (M2C_FIELD(slotbase, s32 *, off) == 0) {
                char *ent = (char *)arg0 + off;
                if ((s8)M2C_FIELD(ent, u8 *, 0x1770) > 0) {
                    void *nw = UI__CreateWidget(arg0,
                        M2C_FIELD((char *)arg0 + 0x1768, f32 *, off) * bc + M2C_FIELD(fbase, f32 *, off),
                        M2C_FIELD((char *)arg0 + 0x1750, f32 *, off) + c0, lbl_803264C4);
                    M2C_FIELD(slotbase, void **, off) = nw;
                    if (nw != NULL) {
                        void *player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
                        char *pb = (char *)M2C_FIELD(player, void **, 0x159C) + 0x44;
                        s32 vi = ((s8)M2C_FIELD(ent, u8 *, 0x1770) + 0x61) * 0x24;
                        {
                            void *w = M2C_FIELD(slotbase, void **, off);
                            ((VtxVI)M2C_FIELD(VT(w), void **, 0x36C))(ADJ(w, 0x368), M2C_FIELD(pb, s32 *, vi));
                        }
                        if (i == 0) {
                            void *w0 = M2C_FIELD(slotbase, void **, i);
                            ((VtxVFF)M2C_FIELD(VT(w0), void **, 0xEC))(ADJ(w0, 0xE8), lbl_803264B8, lbl_803264C4);
                        } else {
                            void *wi = M2C_FIELD(slotbase, void **, off);
                            ((VtxVFF)M2C_FIELD(VT(wi), void **, 0xEC))(ADJ(wi, 0xE8), lbl_803264C8, lbl_803264C4);
                        }
                        {
                            void *wj = M2C_FIELD(slotbase, void **, off);
                            ((VtxVI)M2C_FIELD(VT(wj), void **, 0x1B4))(ADJ(wj, 0x1B0), 0x1E00);
                        }
                        {
                            void *wk = M2C_FIELD(slotbase, void **, off);
                            ((VtxVI)M2C_FIELD(VT(wk), void **, 0x1EC))(ADJ(wk, 0x1E8), -1);
                        }
                        {
                            void *wl = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetSmoothStep((char *)M2C_FIELD(wl, void **, 0x164) + 0x244, 0);
                        }
                        {
                            void *wm = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetKey((char *)M2C_FIELD(wm, void **, 0x164) + 0x244, lbl_803264B8, lbl_803264B8);
                        }
                        {
                            void *wn = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetKey((char *)M2C_FIELD(wn, void **, 0x164) + 0x244, lbl_803264CC, lbl_803264C8);
                        }
                        {
                            void *wo = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetKey((char *)M2C_FIELD(wo, void **, 0x164) + 0x244, lbl_803264D0, lbl_803264C8);
                        }
                        {
                            void *wp = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetKey((char *)M2C_FIELD(wp, void **, 0x164) + 0x244, lbl_803264D4, lbl_803264B8);
                        }
                        {
                            void *wq = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__SetKey((char *)M2C_FIELD(wq, void **, 0x164) + 0x244, lbl_803264D8, lbl_803264B8);
                        }
                        {
                            void *wr = M2C_FIELD(slotbase, void **, off);
                            UiAnimator__Restart((char *)M2C_FIELD(wr, void **, 0x164) + 0x244, 0);
                        }
                    }
                }
            }
        }
        i = next;
    } while (i <= 1);
}

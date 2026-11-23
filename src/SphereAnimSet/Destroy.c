/* SphereAnimSet__Destroy @ 0x8026AA1C (size: 0x258, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void UiAnimator__Destroy(void *, s32);
void Mem__Delete(void *);
extern char lbl_8034E308[] __attribute__((section(".data")));
s32 SphereAnimSet__Destroy(void *self, s32 flags)
{
    char *hi;

    M2C_FIELD(self, char **, 2884) = &lbl_8034E308[0];
    if ((char *)self + 2500 != NULL) {
        hi = (char *)self + 2884;
        if ((char *)self + 2500 != hi) {
            do {
                hi -= 96;
                UiAnimator__Destroy(hi + 48, 2);
                UiAnimator__Destroy(hi, 2);
            } while ((char *)self + 2500 != hi);
        }
    }
    if ((char *)self + 964 != NULL) {
        hi = (char *)self + 2500;
        if ((char *)self + 964 != hi) {
            do {
                hi -= 384;
                UiAnimator__Destroy(hi + 336, 2);
                UiAnimator__Destroy(hi + 288, 2);
                UiAnimator__Destroy(hi + 240, 2);
                UiAnimator__Destroy(hi + 192, 2);
                UiAnimator__Destroy(hi + 144, 2);
                UiAnimator__Destroy(hi + 96, 2);
                UiAnimator__Destroy(hi + 48, 2);
                UiAnimator__Destroy(hi, 2);
            } while ((char *)self + 964 != hi);
        }
    }
    {
        void *a772 = (char *)self + 772;
        void *a916 = (char *)self + 916;
        void *a148 = (char *)self + 148;
        void *a868 = (char *)self + 868;
        void *a820 = (char *)self + 820;
        void *a196 = (char *)self + 196;
        void *a580 = (char *)self + 580;
        void *a724 = (char *)self + 724;
        void *a628 = (char *)self + 628;
        void *a52 = (char *)self + 52;
        void *a676 = (char *)self + 676;
        void *a100 = (char *)self + 100;
        void *a532 = (char *)self + 532;
        void *a436 = (char *)self + 436;
        void *a484 = (char *)self + 484;
        void *a340 = (char *)self + 340;
        void *a388 = (char *)self + 388;
        void *a244 = (char *)self + 244;
        void *a292 = (char *)self + 292;
        UiAnimator__Destroy(a916, 2);
    UiAnimator__Destroy(a868, 2);
    UiAnimator__Destroy(a820, 2);
    UiAnimator__Destroy(a772, 2);
    UiAnimator__Destroy(a724, 2);
    UiAnimator__Destroy(a676, 2);
    UiAnimator__Destroy(a628, 2);
    UiAnimator__Destroy(a580, 2);
    UiAnimator__Destroy(a532, 2);
    UiAnimator__Destroy(a484, 2);
    UiAnimator__Destroy(a436, 2);
    UiAnimator__Destroy(a388, 2);
    UiAnimator__Destroy(a340, 2);
    UiAnimator__Destroy(a292, 2);
    UiAnimator__Destroy(a244, 2);
    UiAnimator__Destroy(a196, 2);
    UiAnimator__Destroy(a148, 2);
    UiAnimator__Destroy(a100, 2);
    UiAnimator__Destroy(a52, 2);
    }
    UiAnimator__Destroy(self, 2);
    if (flags & 1) {
        Mem__Delete(self);
    }
}

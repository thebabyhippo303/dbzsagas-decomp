/* AI__HasPrimaryTimerElapsed @ 0x8005BB58 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
extern f32 lbl_803A35C4 __attribute__((section(".data")));
s32 AI__HasPrimaryTimerElapsed(void *self, f32 delta) {
    return *(f32 *)((char *)self + 0xDC) + delta < lbl_803A35C4;
}

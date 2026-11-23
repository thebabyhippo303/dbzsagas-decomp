/* UIList__SetState @ 0x80135B14 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
extern const f32 lbl_8032ABD0 __attribute__((section(".data")));
void UIList__SetState(void *o, int a) {
    *(int *)((char *)o + 0x358) = a;
    *(f32 *)((char *)o + 0x360) = lbl_8032ABD0;
}

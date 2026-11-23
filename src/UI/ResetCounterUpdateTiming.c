/* UI__ResetCounterUpdateTiming @ 0x8011E48C (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_803A35C4 __attribute__((section(".data")));

void UI__ResetCounterUpdateTiming(void *self) {
    float base = lbl_803A35C4;
    float elapsed = *(float *)((char *)self + 0x5C);
    *(float *)((char *)self + 0x58) = base;
    *(float *)((char *)self + 0x54) = base + elapsed;
}

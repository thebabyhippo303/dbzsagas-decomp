/* OptionsMenu__AnimateRightChoice @ 0x8001A638 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* OptionsMenu__AnimateRightChoice @ 0x8001A638 */
extern void fn_8026B420(void *component);
extern void fn_80260304(void *component, float x, float y);
extern void fn_8026B0C8(void *component, int mode);
extern float lbl_8030DE8C __attribute__((section(".data")));
extern float lbl_8030DE90 __attribute__((section(".data")));
extern float lbl_8030DE94 __attribute__((section(".data")));

void OptionsMenu__AnimateRightChoice(void *self, unsigned int index) {
    char *base;
    int offset;

    if (index <= 3U) {
        base = (char *)self + 0x395C;
        offset = index * 0x1A0;
        fn_8026B420(*(void **)(base + offset));
        fn_80260304((char *)*(void **)(base + offset) + 0x304, lbl_8030DE8C, lbl_8030DE90);
        fn_80260304((char *)*(void **)(base + offset) + 0x304, lbl_8030DE94, lbl_8030DE8C);
        fn_8026B0C8(*(void **)(base + offset), 0);
    }
}

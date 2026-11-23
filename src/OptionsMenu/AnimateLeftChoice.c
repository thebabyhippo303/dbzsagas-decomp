/* OptionsMenu__AnimateLeftChoice @ 0x8001A5BC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* OptionsMenu__AnimateLeftChoice @ 0x8001A5BC */
extern void fn_8026B420(void *component);
extern void fn_80260304(void *component, float x, float y);
extern void fn_8026B0C8(void *component, int mode);
extern float lbl_8030DE80 __attribute__((section(".data")));
extern float lbl_8030DE84 __attribute__((section(".data")));
extern float lbl_8030DE88 __attribute__((section(".data")));

void OptionsMenu__AnimateLeftChoice(void *self, unsigned int index) {
    char *base;
    int offset;

    if (index <= 3U) {
        base = (char *)self + 0x32DC;
        offset = index * 0x1A0;
        fn_8026B420(*(void **)(base + offset));
        fn_80260304((char *)*(void **)(base + offset) + 0x304, lbl_8030DE80, lbl_8030DE84);
        fn_80260304((char *)*(void **)(base + offset) + 0x304, lbl_8030DE88, lbl_8030DE80);
        fn_8026B0C8(*(void **)(base + offset), 0);
    }
}

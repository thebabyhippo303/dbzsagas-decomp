/* LetterBox__StartImpl @ 0x8011A1B4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_803DD96C;
extern float lbl_803DD970;
extern float lbl_803DD974;
extern float lbl_803DD978;
extern float lbl_803DD97C;
extern float lbl_803DD984;
extern float lbl_803DD988;
extern float lbl_803DD98C;
extern int lbl_803DD998;

void LetterBox__StartImpl(void) {
    volatile float *rodata = (volatile float *)0x80320000;
    volatile float *static_data = (volatile float *)0x803A0000;
    float a = rodata[0x706C / 4];
    float b = static_data[0x35C4 / 4];
    float c = lbl_803DD96C;
    float d = lbl_803DD970;
    float e = lbl_803DD98C;
    lbl_803DD974 = c;
    lbl_803DD978 = d;
    lbl_803DD984 = a;
    lbl_803DD988 = e;
    lbl_803DD998 = 1;
    lbl_803DD97C = b;
}

/* LetterBox__StopImpl @ 0x8011A1F0 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* lis bases are the HA-adjusted addresses of lbl_80327070 and lbl_803A35C4. */
extern float ro_80320000[];
extern float bss_803A0000[];
extern float lbl_803DD96C;
extern float lbl_803DD970;
extern float lbl_803DD974;
extern float lbl_803DD978;
extern float lbl_803DD97C;
extern float lbl_803DD984;
extern float lbl_803DD988;
extern float lbl_803DD98C;
extern int lbl_803DD998;

void LetterBox__StopImpl(void) {
    float from_ro = ro_80320000[7196];
    int stop = 1;
    float from_bss = bss_803A0000[3441];
    float saved_a = lbl_803DD970;
    float saved_b = lbl_803DD96C;
    float saved_c = lbl_803DD98C;
    lbl_803DD974 = saved_a;
    lbl_803DD978 = saved_b;
    lbl_803DD984 = saved_c;
    lbl_803DD988 = from_ro;
    lbl_803DD998 = stop;
    lbl_803DD97C = from_bss;
}

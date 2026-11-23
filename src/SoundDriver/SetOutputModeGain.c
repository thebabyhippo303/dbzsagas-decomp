/* SoundDriver__SetOutputModeGain @ 0x80196B1C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_8033F678 __attribute__((section(".data")));
extern float lbl_8033F67C __attribute__((section(".data")));
extern float lbl_8033F680 __attribute__((section(".data")));
extern float lbl_803DCC38;
void SoundDriver__SetOutputModeGain(int mode) {
    switch (mode) {
    case 0:
        lbl_803DCC38 = lbl_8033F678;
        break;
    case 1:
    case 3:
    case 4:
        lbl_803DCC38 = lbl_8033F67C;
        break;
    case 2:
        lbl_803DCC38 = lbl_8033F680;
        break;
    }
}

/* MenuInput__IsDownTriggered @ 0x8004D2A4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern s32 MenuInput__IsEnabled(s32);
extern void *lbl_803DCC74 __attribute__((section(".sdata")));
extern void *fn_801D6674(void *, s32);
s32 MenuInput__IsDownTriggered(s32 input) {
    void *entry;
    s32 flag;
    if (MenuInput__IsEnabled(input) == 0) return 0;
    if (input < 0) input = 0;
    entry = fn_801D6674(lbl_803DCC74, input);
    if (entry != 0) {
        flag = 0;
        if (*(s32 *)((char *)entry + 0x10) == 0)
            flag = (*(s32 *)((char *)entry + 0x14) == 1);
        if (flag != 0) return 1;
    }
    return 0;
}

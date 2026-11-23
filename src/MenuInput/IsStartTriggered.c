/* MenuInput__IsStartTriggered @ 0x8004D640 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern s32 MenuInput__IsEnabled(s32);
extern s32 MenuInput__RequiresControllerOwner(void *);
extern void *lbl_803DCC74 __attribute__((section(".sdata")));
extern s32 lbl_803DC3A0 __attribute__((section(".sdata")));
extern char *lbl_803DC348 __attribute__((section(".sdata")));
extern void *fn_801D6674(void *, s32);
s32 MenuInput__IsStartTriggered(s32 input) {
    void *entry;
    s32 flag;
    s32 flag2;
    s32 flag3;
    if (MenuInput__IsEnabled(input) == 0) return 0;
    if (input < 0) input = 0;
    entry = fn_801D6674(lbl_803DCC74, input);
    if (entry != 0) {
        flag = 0;
        if (*(s32 *)((char *)entry + 0x68) == 0)
            flag = (*(s32 *)((char *)entry + 0x6C) == 1);
        if (flag != 0) {
            flag2 = 0;
            if (*(s32 *)((char *)entry + 0x30) == 0)
                flag2 = (*(s32 *)((char *)entry + 0x34) == 1);
            if (flag2 == 0) {
                flag3 = 0;
                if (*(s32 *)((char *)entry + 0x40) == 0)
                    flag3 = (*(s32 *)((char *)entry + 0x44) == 1);
                if (flag3 == 0) {
                    if (lbl_803DC3A0 != 0 && MenuInput__RequiresControllerOwner(lbl_803DC348) != 0 && *(s32 *)(lbl_803DC348 + 0xC0) == -1) {
                        *(s32 *)(lbl_803DC348 + 0xC0) = input;
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}

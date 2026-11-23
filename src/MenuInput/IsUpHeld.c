/* MenuInput__IsUpHeld @ 0x8004D390 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__IsUpHeld @ 0x8004D390 (0x68). ProDG -O2. */
typedef int s32;

extern s32 MenuInput__IsEnabled(s32 index);
extern void *fn_801D6674(void *list, s32 index);
extern void *lbl_803DCC74;

s32 MenuInput__IsUpHeld(s32 index) {
    void *entry;

    if (!MenuInput__IsEnabled(index))
        return 0;
    if (index < 0)
        index = 0;
    entry = fn_801D6674(lbl_803DCC74, index);
    if (entry == 0)
        return 0;
    if (*(s32 *)((char *)entry + 0x24) != 0)
        return 1;
    return 0;
}

/* VM__SetPageLocked @ 0x802EA900 (size: 0x28, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef unsigned char u8;
extern u8 *lbl_803DD8E8 __attribute__((section(".sdata")));
void VM__SetPageLocked(int idx, int lock) {
    if (0 == lock) {
        goto isfalse;
    }
    lbl_803DD8E8[idx] = 1;
    return;
isfalse:
    lbl_803DD8E8[idx] = idx - idx;
    return;
}

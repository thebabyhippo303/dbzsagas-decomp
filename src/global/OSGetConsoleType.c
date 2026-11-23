/* OSGetConsoleType @ 0x80169B74 (size: 0x28, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned int u32;

extern u32 *lbl_803DD1D0;

u32 OSGetConsoleType(void) {
    u32 *info = lbl_803DD1D0;
    u32 type;

    if (info == 0 || (type = info[11]) == 0) {
        type = 0x10000002;
    }
    return type;
}

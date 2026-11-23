/* FileServer__IsDebugPortReady @ 0x8015B51C (size: 0x18, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
s32 FileServer__IsDebugPortReady(void) {
    if (*(volatile s32 *)0xCC006000 & 0x14) {
        return 0;
    }
    return 0;
}

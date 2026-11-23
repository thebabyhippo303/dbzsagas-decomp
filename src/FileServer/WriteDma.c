/* FileServer__WriteDma @ 0x8015D7D8 (size: 0x68, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
extern void fn_8015D4C0(void);
extern int FileServer__ReadStatusByte(void);
extern void FileServer__WaitForCommandIdle(int cmd);

void FileServer__WriteDma(int addr, int length) {
    fn_8015D4C0();
    while (FileServer__ReadStatusByte() == 0) {
    }
    do {
        fn_8015D4C0();
    } while (FileServer__ReadStatusByte() == 255);
    fn_8015D4C0();
    *(volatile int *)0xCC00682C = addr;
    *(volatile int *)0xCC006830 = length;
    *(volatile int *)0xCC006834 = 7;
    FileServer__WaitForCommandIdle(7);
}

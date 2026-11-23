/* FileServer__ContinueReadRequest @ 0x8015DB2C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern void FileServer__AdvanceReadBuffer(void);
extern void FileServer__BeginReadTransfer(void);
extern void FileServer__StartReadDma(s32, s32);
extern s32 lbl_8039E5E4 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5E8 __attribute__((section(".data")));
extern s32 lbl_8039E5EC __attribute__((section(".data")));

void FileServer__ContinueReadRequest(void) {
    s32 addr;
    s32 len;

    addr = lbl_8039E5E4;
    *(volatile s32 *)0xCC003000 = 0x1000;
    FileServer__AdvanceReadBuffer();
    if (lbl_8039E5E8 != 0) {
        len = 0x400;
        lbl_8039E5E4 += 0x400;
        lbl_8039E5E8 -= 1;
    } else {
        len = lbl_8039E5EC;
        lbl_8039E5EC = 0;
    }
    FileServer__BeginReadTransfer();
    FileServer__StartReadDma(addr, len);
}

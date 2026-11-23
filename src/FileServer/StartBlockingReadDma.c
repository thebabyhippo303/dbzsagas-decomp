/* FileServer__StartBlockingReadDma @ 0x8015DC5C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void FileServer__BeginReadTransfer(void);
void FileServer__ReadDma(s32, s32);
s32 FileServer__WaitForCommandHandshake(void);
void FileServer__AdvanceReadBuffer(void);
extern s32 lbl_8039E5E4 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5E8 __attribute__((section(".data")));
extern s32 lbl_8039E5EC __attribute__((section(".data")));

void FileServer__StartBlockingReadDma(void) {
    s32 addr = lbl_8039E5E4;
    s32 len;
    while (FileServer__WaitForCommandHandshake() == 0) {
    }
    *(volatile s32 *)0xCC003000 = 0x1000;
    FileServer__AdvanceReadBuffer();
    if (lbl_8039E5E8 != 0) {
        len = 0x400;
        lbl_8039E5E8 -= 1;
        lbl_8039E5E4 += 0x400;
    } else {
        len = lbl_8039E5EC;
        lbl_8039E5EC = 0;
    }
    FileServer__BeginReadTransfer();
    FileServer__ReadDma(addr, len);
}

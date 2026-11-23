/* FileServer__PollTransfer @ 0x8015E000 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void FileServer__CompleteRequest(void);
extern void FileServer__ProcessReadDmaQueue(void);
extern volatile s32 lbl_8036FB50 __attribute__((section(".data")));
extern s32 lbl_8039E5F8 __attribute__((section(".data")));

s32 FileServer__WaitForTransfer(void) {
    if (lbl_8036FB50 == 0) {
        return 0;
    }
    if (lbl_8036FB50 == 5) {
        FileServer__CompleteRequest();
    } else {
        FileServer__ProcessReadDmaQueue();
    }
    return lbl_8039E5F8;
}

/* DVD__StopDriveErrorDialogThread @ 0x80007F30 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match DVD__StopDriveErrorDialogThread @ 0x80007F30 (0x5C). */
extern char lbl_8038FE50[];
extern int lbl_803DC360;

extern void OSCancelThread(void *thread);
extern void VISetBlack(int black);
extern void VIFlush(void);
extern void fn_80242968(int arg);

void DVD__StopDriveErrorDialogThread(void) {
    OSCancelThread(lbl_8038FE50);
    if (lbl_803DC360 != 0) {
        VISetBlack(1);
        VIFlush();
        fn_80242968(0);
        fn_80242968(0);
        VISetBlack(0);
        VIFlush();
    }
}

/* FileServer__InstallDsiExceptionHandler @ 0x8015E76C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_8015E294(void);
extern void __OSSetExceptionHandler(int exception, void *handler);
extern void FileServer__DsiExceptionHandler(void);
extern int lbl_8036FB60 __attribute__((section(".data")));
extern int lbl_8039E620 __attribute__((section(".bss")));
extern int lbl_8039E660 __attribute__((section(".bss")));
extern int lbl_8039E664 __attribute__((section(".bss")));
extern int lbl_8039E66C __attribute__((section(".bss")));
extern char lbl_8039E670 __attribute__((section(".bss")));
extern char lbl_8039E671 __attribute__((section(".bss")));

void FileServer__InstallDsiExceptionHandler(void) {
    if (lbl_8036FB60 == -0x8000) {
        lbl_8039E620 = 0;
        lbl_8039E660 = 0;
        lbl_8039E664 = -1;
        lbl_8039E66C = 0;
        lbl_8039E671 = 1;
        lbl_8039E670 = 1;
        fn_8015E294();
        __OSSetExceptionHandler(2, FileServer__DsiExceptionHandler);
    }
}

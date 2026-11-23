/* File__CloseGlobal @ 0x80187DE0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__CloseGlobal @ 0x80187DE0 (0x2C). ProDG -O2. */
extern char lbl_803A2D60[];
extern void File__Destroy(void *file, int mode);

void File__CloseGlobal(void) {
    File__Destroy(lbl_803A2D60, 2);
}

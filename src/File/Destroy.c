/* File__Destroy @ 0x8018769C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__Destroy @ 0x8018769C (0x40). ProDG -O2. */
extern void File__Release(void *file);
extern void fn_801843CC(void *file);

void File__Destroy(void *file, int mode) {
    File__Release(file);
    if (mode & 1)
        fn_801843CC(file);
}

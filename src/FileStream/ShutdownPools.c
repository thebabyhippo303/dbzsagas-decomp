/* FileStream__ShutdownPools @ 0x8017ED58 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FileIO__ShutdownPools @ 0x8017ED58 (0xE0). ProDG -O2.
   Closes every stream (stride 24) and archive (stride 40), frees both pools,
   and clears the counts. lbl_803DCB60 is left at 2. */
extern void *lbl_803DCB54;
extern int lbl_803DCB58;
extern void *lbl_803DCB4C;
extern int lbl_803DCB50;
extern int lbl_803DCB5C;
extern int lbl_803DCB60;
extern void FileStream__Close(void *stream);
extern void Archive__Close(void *archive);
extern void memFree(void *block);

void FileIO__ShutdownPools(void) {
    int i;

    if (lbl_803DCB54 != 0) {
        for (i = 0; i < lbl_803DCB58; i++)
            FileStream__Close((char *)lbl_803DCB54 + i * 24);
        memFree(lbl_803DCB54);
        lbl_803DCB54 = 0;
    }
    lbl_803DCB5C = 0;
    lbl_803DCB58 = 0;
    if (lbl_803DCB4C != 0) {
        for (i = 0; i < lbl_803DCB50; i++)
            Archive__Close((char *)lbl_803DCB4C + i * 40);
        memFree(lbl_803DCB4C);
        lbl_803DCB4C = 0;
    }
    lbl_803DCB50 = 0;
    lbl_803DCB60 = 2;
}

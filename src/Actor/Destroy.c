/* Actor__Destroy @ 0x802B32C4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__Destroy @ 0x802B32C4 (0x8C). ProDG -O2. */
extern char lbl_80353AB0[];
extern char lbl_80353B80[];
extern char lbl_80353BA0[];
extern char lbl_80353C48[];
extern void fn_801843CC(void *block);
extern void fn_802BD440(void *a, int b);
extern void fn_802C2624(void *self, int flags);

void Actor__Destroy(char *self, int flags) {
    *(void **)(self + 0x198) = lbl_80353BA0;
    *(void **)(self + 0x1B4) = lbl_80353B80;
    *(void **)(self + 0x4C8) = lbl_80353AB0;
    *(void **)(self + 0x34) = lbl_80353C48;
    if (*(void **)(self + 0x4F4) != 0) {
        fn_801843CC(*(void **)(self + 0x4F4));
        *(void **)(self + 0x4F4) = 0;
    }
    fn_802BD440(self + 0x414, 0);
    fn_802C2624(self, flags);
}

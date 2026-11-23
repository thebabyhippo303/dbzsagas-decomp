/* ComboData__Construct @ 0x80150F18 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ComboData__Construct @ 0x80150F18 (0x60). ProDG -O2. */
extern char lbl_80332EF8[];
extern char lbl_80332F78[];
extern void ComboData__FreeValues(void *self);
extern void Table__Destroy(void *table, int flags);
extern void fn_8025545C(void *self, void *arg);

void ComboData__Construct(void *self, void *arg) {
    *(void **)((char *)self + 12) = lbl_80332EF8;
    *(void **)((char *)self + 8) = lbl_80332F78;
    ComboData__FreeValues(self);
    Table__Destroy((char *)self + 12, 0);
    fn_8025545C(self, arg);
}

/* ComboData__ConstructDefault @ 0x80150EB0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ComboData__ConstructDefault @ 0x80150EB0 (0x68). ProDG -O2. */
extern char lbl_803485F8[];
extern char lbl_80332EF8[];
extern char lbl_80332F78[];
extern void Table__Construct(void *table);

void *ComboData__ConstructDefault(void *self) {
    *(int *)self = 0;
    *(int *)((char *)self + 4) = 0;
    *(void **)((char *)self + 8) = lbl_803485F8;
    Table__Construct((char *)self + 12);
    *(void **)((char *)self + 12) = lbl_80332EF8;
    *(void **)((char *)self + 8) = lbl_80332F78;
    *(int *)((char *)self + 44) = 0;
    return self;
}

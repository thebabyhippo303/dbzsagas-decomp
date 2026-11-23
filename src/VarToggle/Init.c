/* VarToggle__Init @ 0x8018D3E0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarToggle__Init @ 0x8018D3E0 (0x58). ProDG -O2. */
extern char lbl_8033EF60[];
extern void *VarBool__Init(void *self, int a, int b, int c, int d, int e);

void *VarToggle__Init(void *self, int a, int b, int c, int d) {
    VarBool__Init(self, 12, a, b, c, d);
    *(void **)((char *)self + 4) = lbl_8033EF60;
    return self;
}

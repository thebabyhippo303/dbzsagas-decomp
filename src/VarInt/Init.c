/* VarInt__Init @ 0x8018CD70 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt__Init @ 0x8018CD70 (0x54). ProDG -O2. */
extern char lbl_8033F110[];
extern void VarInteger__Init(void *self, int a, int b, int d, int e, int f, int g);

void *VarInt__Init(void *self, int a, int b, int c, int d, int e, int f, int g) {
    VarInteger__Init(self, a, b, d, e, f, g);
    *(int *)((char *)self + 72) = c;
    *(void **)((char *)self + 4) = lbl_8033F110;
    return self;
}

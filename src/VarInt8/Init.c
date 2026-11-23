/* VarInt8__Init @ 0x8018D03C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt8__Init @ 0x8018D03C (0x54). ProDG -O2. */
typedef struct {
    char pad[4];
    void *vt;
    char pad2[0x48 - 8];
    void *extra;
} VarInt8;

extern void *VarInteger__Init(void *self, int a, int b, int c, int d, int e, int f);
extern char lbl_8033F038[];

VarInt8 *VarInt8__Init(VarInt8 *self, int a, int b, void *extra, int c, int d, int e, int f) {
    VarInteger__Init(self, a, b, c, d, e, f);
    self->extra = extra;
    self->vt = lbl_8033F038;
    return self;
}

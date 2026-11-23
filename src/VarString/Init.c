/* VarString__Init @ 0x8018D174 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[4];
    void *vt;
    char pad2[0x40 - 8];
    void *x;
    void *y;
} VarString;

extern void *Variable__Init(void *self, int a, int b, int c, int d);
extern char lbl_8033EFF0[];

VarString *VarString__Init(VarString *self, int a, int b, void *x, void *y, int c, int d) {
    Variable__Init(self, a, b, c, d);
    self->x = x;
    self->y = y;
    self->vt = lbl_8033EFF0;
    return self;
}

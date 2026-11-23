/* AvatarCurve__Construct @ 0x800A07E0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int a; void *vt; char pad[0x8C]; int f94; int f98; int f9c; } AvatarCurve;
extern char lbl_80333EF8 __attribute__((section(".data")));
void *AvatarCurve__Init(void *, int, void *);
AvatarCurve *AvatarCurve__Construct(AvatarCurve *self, int arg1) {
    self->a = arg1;
    self->vt = &lbl_80333EF8;
    AvatarCurve__Init((char *)self + 8, arg1, self);
    self->f94 = 0;
    self->f98 = 0;
    self->f9c = 0;
    return self;
}

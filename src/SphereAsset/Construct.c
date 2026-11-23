/* SphereAsset__Construct @ 0x80118E2C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SphereAsset__Construct @ 0x80118E2C (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x19C];
    void *vtable;
    int arg;
    int object;
} SphereAsset;

extern char lbl_80333A28[];
extern void fn_8026B590(void *self);

SphereAsset *SphereAsset__Construct(SphereAsset *self) {
    fn_8026B590(self);
    self->vtable = lbl_80333A28;
    self->arg = -1;
    self->object = 0;
    return self;
}

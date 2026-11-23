/* SphereAsset__Destroy @ 0x80118E78 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SphereAsset__Destroy @ 0x80118E78 (0x30). ProDG -O2. */
typedef struct {
    char pad[0x19C];
    void *vtable;
} SphereAsset;

extern char lbl_80333A28[];
extern void Sphere__DestroyCore(void *self, int flags);

void SphereAsset__Destroy(SphereAsset *self, int flags) {
    self->vtable = lbl_80333A28;
    Sphere__DestroyCore(self, flags);
}

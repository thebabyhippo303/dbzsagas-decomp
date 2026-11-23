/* SphereAsset__LoadFromDatabase @ 0x80118EA8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SphereAsset__LoadFromDatabase @ 0x80118EA8 (0x70). ProDG -O2. */
typedef struct SphereAsset SphereAsset;

typedef struct {
    char pad[0x10];
    short adjust;
    char pad2[2];
    void (*load)(void *self, void *object, int arg, int a, int b, int c);
} SphereAssetVtable;

struct SphereAsset {
    char pad[0x19C];
    SphereAssetVtable *vtable;
    int arg;
    void *object;
};

extern void *dblLoad(void *path, int a, int b);

void SphereAsset__LoadFromDatabase(SphereAsset *self, int arg, void *path) {
    void *object;
    self->arg = arg;
    object = dblLoad(path, 0, 0);
    self->object = object;
    self->vtable->load((char *)self + self->vtable->adjust, object, arg, 0, 1, 1);
}

/* SphereAsset__LoadPresetById @ 0x80118F18 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x68];
    short adjust;
    char pad2[2];
    void (*load)(void *self, void *object, int arg, int a, int b, int c);
} SpherePresetVtable;

typedef struct {
    char pad[0x19C];
    SpherePresetVtable *vtable;
    int arg;
    void *object;
} SpherePresetAsset;

typedef struct {
    int arg;
    void *path;
} SpherePreset;

extern SpherePreset lbl_8036BCF4[] __attribute__((section(".data")));
extern void *dblLoad(void *path, int a, int b);

void SphereAsset__LoadPresetById(SpherePresetAsset *self, int id) {
    void *object;

    object = dblLoad(lbl_8036BCF4[id].path, 0, 0);
    self->object = object;
    self->vtable->load((char *)self + self->vtable->adjust, object, lbl_8036BCF4[id].arg, 0, 1, 1);
}

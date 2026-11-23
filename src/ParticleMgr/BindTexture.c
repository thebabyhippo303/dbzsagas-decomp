/* ParticleMgr__BindTexture @ 0x8022788C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[4];
    unsigned char b4;
    unsigned char pad5;
    unsigned short id;
    unsigned char b8;
    char pad2[4];
    unsigned char b13;
    char pad3[248 - 14];
} AcquireArgs;

typedef struct {
    char pad[16];
    void *field16;
    char pad2[32 - 20];
    int field32;
} TexCache;

extern unsigned short lbl_803DCD38;
extern TexCache *lbl_803DCDF4;
extern void *TevMaterialCache__Acquire(void *cache, void *args, int a, int b);
extern void TexBind__SetWrap(int id, int a, int b, int c);
extern void TexBind__SetFilter(int id, int a, int b);
extern void TexBind__Load(int id, int a, int b);
extern void GXCallDisplayList(int a, int b);

void ParticleMgr__BindTexture(unsigned int id) {
    AcquireArgs args;
    TexCache *cache;
    void *mat;
    int v0 = 0;
    if (id == lbl_803DCD38) {
        return;
    }
    lbl_803DCD38 = id;
    if (id == 0) {
        return;
    }
    args.b4 = 1;
    args.b13 = v0;
    args.id = id;
    args.b8 = 3;
    mat = TevMaterialCache__Acquire(lbl_803DCDF4, &args, 0, 0);
    TexBind__SetWrap(lbl_803DCD38, 0, 0, 0);
    TexBind__SetFilter(lbl_803DCD38, 1, 0);
    TexBind__Load(lbl_803DCD38, 0, 0);
    cache = lbl_803DCDF4;
    if (cache->field32 != 0) {
        return;
    }
    if (cache->field16 == mat) {
        return;
    }
    GXCallDisplayList((int)mat, *(int *)((char *)mat + 2836));
    cache->field16 = mat;
}

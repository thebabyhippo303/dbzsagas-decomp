/* SceneLights__SetDirectionalLight @ 0x8021ABD0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match candidate: SceneLights__SetDirectionalLight @ 0x8021ABD0 (0xA0). ProDG -O2. */
extern void ShadowMgr__RemoveLightFromAll(void *light);
extern void ShadowMgr__AddLightToAll(void *light);
extern int lbl_803AD028[] __attribute__((section(".data")));

typedef struct { int f0; int f4; int f8; } InArgs;

typedef struct {
    char pad_0[84];
    void *light;
    int mode;
    char pad_5C[20];
    float dx;
    float dy;
    float dz;
    char pad_7C[16];
    int flag;
} LightD;

void SceneLights__SetDirectionalLight(void *a0, float *dir) {
    InArgs *a = (InArgs *)a0;
    int *base = lbl_803AD028;
    LightD *L = (LightD *)((char *)base - 92);
    void *old = L->light;
    void *newL = (void *)&base[-1];
    int f0 = a->f0;
    int f4 = a->f4;
    int f8 = a->f8;

    base[0] = f0;
    base[2] = f8;
    base[1] = f4;
    L->dx = dir[0];
    L->dy = dir[1];
    L->dz = dir[2];
    L->mode = 5;
    L->flag = 1;
    L->light = newL;
    if (old == newL)
        return;
    if (old != 0)
        ShadowMgr__RemoveLightFromAll(old);
    {
        void *new2 = L->light;
        if (new2 != 0)
            ShadowMgr__AddLightToAll(new2);
    }
}

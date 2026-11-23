/* PathCam__Go @ 0x8002CCF8 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *Script__PopString(void *vm, void *ctx, int *owned);
extern float Script__PopFloat(void *vm, void *ctx);
extern void *CameraBag__Push(void *bag, void *name);
extern void CCameraPath__SetCurve(void *cam, char *curve);
extern void *NamedPoint__FindByName(void *table, char *name, int flags);
extern void Mem__DeleteArray(void *ptr);
extern char lbl_80311640[] __attribute__((section(".data")));
extern char lbl_803B1E84[] __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void PathCam__Go(void *vm, void *ctx) {
    int owned;
    float a;
    float b;
    char *curve;
    char *point;
    void *cam;

    curve = Script__PopString(vm, ctx, &owned);
    a = Script__PopFloat(vm, ctx);
    b = Script__PopFloat(vm, ctx);
    point = Script__PopString(vm, ctx, &owned);
    cam = CameraBag__Push(lbl_803DC5B4, lbl_80311640);
    if (cam != 0) {
        CCameraPath__SetCurve(cam, curve);
        *(float *)((char *)cam + 0x40) = a;
        *(float *)((char *)cam + 0x4C) = b;
        *(void **)((char *)cam + 0x54) = NamedPoint__FindByName(lbl_803B1E84, point, 0);
    }
    if (owned != 0) {
        if (curve != 0) {
            Mem__DeleteArray(curve);
        }
        if (point != 0) {
            Mem__DeleteArray(point);
        }
    }
}

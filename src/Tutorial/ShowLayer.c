/* Tutorial__ShowLayer @ 0x800448E8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct MissionInner {
    char pad[4];
    int mode;
} MissionInner;

typedef struct GameCfg {
    char pad[0x238];
    MissionInner *inner;
} GameCfg;

extern int Script__PopInt(void *script, void *context);
extern GameCfg *lbl_803DC3C0;
extern int sprintf(char *dst, const char *fmt, ...);
extern void *Tutorial__FindLayerByName(char *name);
extern void Instance__ShowImpl(void *instance);

void Tutorial__ShowLayer(void *script, void *context) {
    int id;
    char name[256];
    void *layer;

    id = Script__PopInt(script, context);
    if (lbl_803DC3C0->inner->mode != 1)
        return;
    name[0] = 0;
    sprintf(name, "tutorial_collision_%d", id);
    layer = Tutorial__FindLayerByName(name);
    if (layer == 0)
        return;
    Instance__ShowImpl(layer);
}

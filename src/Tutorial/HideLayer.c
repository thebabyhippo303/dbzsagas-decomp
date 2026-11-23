/* Tutorial__HideLayer @ 0x80044950 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Tutorial__HideLayer @ 0x80044950 (0x68). ProDG -O2. */
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
extern void Instance__HideImpl(void *instance);

void Tutorial__HideLayer(void *script, void *context) {
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
    Instance__HideImpl(layer);
}

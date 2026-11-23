/* SaveMenu__LoadSharedResources @ 0x8004E71C (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveMenu__LoadSharedResources @ 0x8004E71C (0xC0). ProDG -O2. */
typedef struct {
    char pad[0x1C];
    int mode;
} SaveMenuLoopState;

typedef struct {
    char pad[0x238];
    SaveMenuLoopState *state;
} SaveMenuContext;

typedef struct {
    char pad[0x24];
    void *slot24;
    void *slot28;
} SaveMenuAssets;

extern char lbl_80319754[];
extern char lbl_803199AC[];
extern SaveMenuContext *lbl_803DC3C0;
extern SaveMenuAssets *lbl_803DC3B4;
extern void *lbl_803DD0F0;
extern void *lbl_803DD0F4;
extern int lbl_803DD0F8;
extern int lbl_803DD0FC;
extern int lbl_803DD100;

extern void *dblLoad(const char *path, int a, int b);

void SaveMenu__LoadSharedResources(void) {
    SaveMenuContext *ctx;
    int kindA;
    int kindB;
    int kindC;
    void *asset;

    ctx = lbl_803DC3C0;
    if (ctx == 0) {
        lbl_803DD0F0 = dblLoad(lbl_80319754, 0, 0);
        lbl_803DD0F8 = 2;
        lbl_803DD100 = 3;
        lbl_803DD0FC = 1;
    } else if (ctx->state->mode == 5) {
        kindA = 0;
        kindB = 1;
        kindC = 11;
        asset = lbl_803DC3B4->slot28;
        lbl_803DD0F8 = kindA;
        lbl_803DD0F0 = asset;
        lbl_803DD100 = kindB;
        lbl_803DD0FC = kindC;
    } else {
        kindA = 14;
        kindB = 15;
        kindC = 13;
        asset = lbl_803DC3B4->slot24;
        lbl_803DD0F8 = kindA;
        lbl_803DD0F0 = asset;
        lbl_803DD100 = kindB;
        lbl_803DD0FC = kindC;
    }
    lbl_803DD0F4 = dblLoad(lbl_803199AC, 0, 0);
}

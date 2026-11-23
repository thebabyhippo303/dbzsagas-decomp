/* __CARDSetDiskID @ 0x802D9948 (size: 0x38, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned int u32;

typedef struct {
    char pad[268];
    u32 unk268;
    char pad2[268];
    u32 unk540;
    u32 unk544;
} CardGlobals;

extern CardGlobals lbl_803DA1C0;

u32 __CARDSetDiskID(u32 id) {
    register CardGlobals *g = &lbl_803DA1C0;
    u32 v;

    if (id == 0) {
        v = (u32)&g->unk544;
    } else {
        v = id;
    }
    if (id == 0) {
        id = (u32)&g->unk544;
    } else {
        g->unk268 = v;
    }
    g->unk540 = id;
    return id;
}

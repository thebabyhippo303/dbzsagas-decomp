/* Avatar__PlaceCracks @ 0x80033460 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__CreateBoneEffectsFromTable(void *actor, void *table, float scale);
extern float lbl_80311860 __attribute__((section(".data")));
extern float lbl_80311864 __attribute__((section(".data")));
extern char lbl_8036D550[] __attribute__((section(".data")));
extern char lbl_8036D5EC[] __attribute__((section(".data")));

void Avatar__PlaceCracks(void *script, void *context) {
    void *actor;
    int kind;

    actor = Script__PopInt(script, context);
    kind = (int)Script__PopInt(script, context);
    switch (kind) {
    case 0:
        Avatar__CreateBoneEffectsFromTable(actor, lbl_8036D550, lbl_80311860);
        break;
    case 1:
        Avatar__CreateBoneEffectsFromTable(actor, lbl_8036D5EC, lbl_80311864);
        break;
    }
}

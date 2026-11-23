/* SaveGame__UseBookmarkForSaves @ 0x8002F7AC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x54];
    int use_bookmark;
} SaveManager;

typedef struct {
    char pad[0x5388];
    SaveManager *save_manager;
} SaveState;

extern SaveState *lbl_803DC368;
extern int Script__PopInt(void *script, void *context);

void SaveGame__UseBookmarkForSaves(void *script, void *context) {
    int truth = Script__PopInt(script, context) != 0;
    if (truth)
        lbl_803DC368->save_manager->use_bookmark = 0;
    else
        lbl_803DC368->save_manager->use_bookmark = 1;
}

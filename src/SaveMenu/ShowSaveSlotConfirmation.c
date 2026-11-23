/* SaveMenu__ShowSaveSlotConfirmation @ 0x8005395C (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct SaveData SaveData;
typedef struct MenuVtable MenuVtable;

struct SaveData {
    char pad[0x48];
    int slot;
    char pad2[0x5C - 0x4C];
    int busy;
    int occupied[8];
};

typedef struct {
    char pad[0x5388];
    SaveData *save;
} SaveRoot;

struct MenuVtable {
    char pad[0x4F8];
    short adjust;
    char pad2[2];
    void (*confirm)(void *self, const char *message, int slot, int code);
};

typedef struct {
    char pad[0x19C];
    MenuVtable *vt;
} SaveMenu;

extern SaveRoot *lbl_803DC368 __attribute__((section(".sdata")));
extern float lbl_8031A50C __attribute__((section(".data")));
extern char lbl_8031A4B8[] __attribute__((section(".data")));
extern char lbl_8031A4E4[] __attribute__((section(".data")));

int SaveGame__FindLastValidSlot(SaveData *save);
void fn_80267318(void *widget, int mode, float value);
int fn_802687C8(void *widget);

void SaveMenu__ShowSaveSlotConfirmation(SaveMenu *menu) {
    SaveData *save;
    int slot;
    MenuVtable *vt;

    save = lbl_803DC368->save;
    slot = save->slot;
    SaveGame__FindLastValidSlot(save);
    fn_80267318((char *)menu + 0x18834, 0, lbl_8031A50C);
    if (lbl_803DC368->save->busy != 0) {
        fn_802687C8((char *)menu + 0x236C4);
    }
    if (lbl_803DC368->save->occupied[slot] == 0) {
        vt = menu->vt;
        vt->confirm((char *)menu + vt->adjust, lbl_8031A4B8, slot, 520);
        return;
    }
    vt = menu->vt;
    vt->confirm((char *)menu + vt->adjust, lbl_8031A4E4, slot, 533);
}

/* SaveGame__CheckStorageSlot @ 0x80150A74 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__CheckStorageSlot @ 0x80150A74 (0xC0). ProDG -O2. */
typedef struct {
    char pad0[0x28];
    short adjRead;
    char pad1[2];
    int (*read)(void *self, int offset, int *out);
    char pad2[0x68];
    short adjSelect;
    char pad3[2];
    void (*select)(void *self, int slot);
    char pad4[0x48];
    short adjScale;
    char pad5[2];
    int (*scale)(void *self);
} StorageVtable;

typedef struct {
    char pad[0xC];
    StorageVtable *vt;
} StorageDevice;

typedef struct {
    char pad[0x28];
    int slot;
} SaveGame;

extern StorageDevice *lbl_803DCC70;
extern void SaveGame__SelectStorageSlot(SaveGame *save, int slot);
extern int SaveGame__GetSlotBlockOffset(SaveGame *save, int slot);

int SaveGame__CheckStorageSlot(SaveGame *save, int slot) {
    int saved;
    int block;
    int scale;
    int result;
    StorageDevice *dev;
    StorageVtable *vt;

    saved = save->slot;
    SaveGame__SelectStorageSlot(save, slot);
    dev = lbl_803DCC70;
    vt = dev->vt;
    vt->select((void *)((char *)dev + vt->adjSelect), save->slot);
    block = SaveGame__GetSlotBlockOffset(save, slot);
    dev = lbl_803DCC70;
    vt = dev->vt;
    scale = vt->scale((void *)((char *)dev + vt->adjScale));
    dev = lbl_803DCC70;
    vt = dev->vt;
    result = vt->read((void *)((char *)dev + vt->adjRead), block * scale, &block);
    if (result == 0) {
        save->slot = saved;
        return 0;
    }
    save->slot = saved;
    return result;
}

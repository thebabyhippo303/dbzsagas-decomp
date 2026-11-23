/* SaveMenu__ClearHighlightedSlotAndSave @ 0x80050394 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { char pad[0x60]; int slots[8]; } Storage;
typedef struct { char pad[0x5388]; Storage *storage; } Game;
typedef struct { char pad[0x3E8]; short off; char pad2[2]; int (*getIndex)(void *); } Owner;
typedef struct { char pad[0x19C]; Owner *owner; } SaveMenu;
extern Game *lbl_803DC348;
void SaveGame__SaveToStorage(Storage *);
void SaveMenu__ClearHighlightedSlotAndSave(SaveMenu *self) {
    Owner *o = self->owner;
    Storage *s = lbl_803DC348->storage;
    int idx = o->getIndex((char *)self + o->off);
    s->slots[idx] = 0;
    SaveGame__SaveToStorage(lbl_803DC348->storage);
}

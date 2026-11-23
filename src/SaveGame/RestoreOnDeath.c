/* SaveGame__RestoreOnDeath @ 0x8014F014 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int first;
    volatile int level;
} RestoreGlobal;

typedef struct {
    char pad0[4];
    int sizeOffset;
    char pad8[0x50];
    int f58;
} Record;

typedef struct {
    char pad0[0x14];
    int f14;
    void *f18;
    int base;
    Record *record;
    char pad24[12];
    Record *records;
    int offset;
    char pad30[0x14];
    int active;
    int stateB;
} SaveGame;

extern RestoreGlobal lbl_803946C4 __attribute__((section(".data")));
extern char *lbl_803DCCB8;

extern void SaveGame__ClearWorkingState(void *);
extern int SaveGame__GetRecordIndexForLevel(void *, int);
extern void SaveGame__AllocatePayload(void *, int);
extern int fn_80255BB0(int);
extern void *fn_80255AE0(int, void *);
extern void SaveGame__RestoreSavedActors(void *, int);
extern void SaveGame__MarkActorsForDeath(void *);
extern void ActorList__DestroyExpired(void *);

void SaveGame__RestoreOnDeath(SaveGame *self) {
    RestoreGlobal *state = &lbl_803946C4;
    int previous = state->level;
    int one;
    int zero;
    Record *records;
    int offset;

    state->level = 99;
    one = 1;
    zero = 0;
    records = (Record *)((char *)self->records);
    SaveGame__ClearWorkingState(self);
    offset = SaveGame__GetRecordIndexForLevel(self, state->level) * 160;
    self->active = one;
    self->stateB = zero;
    self->record = (Record *)((char *)records + offset);
    SaveGame__AllocatePayload(self, self->record->sizeOffset);
    fn_80255BB0(self->base + self->record->f58);
    self->f18 = fn_80255AE0(self->base + self->record->f58, self->f18);
    self->f14 = one;
    SaveGame__RestoreSavedActors(self, 0x10000000);
    SaveGame__MarkActorsForDeath(self);
    self->active = zero;
    SaveGame__ClearWorkingState(self);
    ActorList__DestroyExpired(lbl_803DCCB8 + 20);
    state->level = previous;
}

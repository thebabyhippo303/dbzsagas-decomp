/* SaveGame__BookmarkLevelImpl @ 0x8014F0F0 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct Glob { s32 pad; s32 levelId; } Glob;
typedef struct Player { char pad[0x288]; f32 hp; f32 maxHp; } Player;
typedef struct Save { char pad[0x20]; char *cur; char pad2[0xC]; char *records; } Save;
void SaveGame__ClearWorkingState(void *);
s32 SaveGame__GetRecordIndexForLevel(void *, s32);
void SaveGame__SetLevelId(void *, s32);
Player *Game__GetPlayerImpl(void *, s32);
void SaveGame__SetPlayerHealthRatio(void *, f32);
s32 SaveGame__PrepareActiveRecordData(void *);
void SaveGame__AllocatePayload(void *, s32);
void SaveGame__CaptureGameState(void *);
extern Glob lbl_803946C4 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));

void SaveGame__BookmarkLevelImpl(Save *self) {
    s32 idx;
    Player *p;
    SaveGame__ClearWorkingState(self);
    idx = SaveGame__GetRecordIndexForLevel(self, lbl_803946C4.levelId);
    if (idx != -1) {
        self->cur = self->records + idx * 0xA0;
        SaveGame__SetLevelId(self, lbl_803946C4.levelId);
        p = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        SaveGame__SetPlayerHealthRatio(self, p->hp / p->maxHp);
        *(s32 *)((char *)self + 0x4C) = 1;
        SaveGame__AllocatePayload(self, SaveGame__PrepareActiveRecordData(self));
        SaveGame__CaptureGameState(self);
    }
    SaveGame__ClearWorkingState(self);
}

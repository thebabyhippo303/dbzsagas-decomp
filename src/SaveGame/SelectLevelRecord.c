/* SaveGame__SelectLevelRecord @ 0x8014F1A4 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__SelectLevelRecord @ 0x8014F1A4 (0x11C). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__GetPlayerImpl(void *, int);
void SaveGame__AllocatePayload(void *, int);
void SaveGame__ClearWorkingState(void *);
int SaveGame__GetRecordIndexForLevel(void *, int);
int SaveGame__PrepareActiveRecordData(void *);
void SaveGame__SetLevelId(void *, int);
void SaveGame__SetPlayerHealthRatio(void *, float);
M2C_UNK SaveGame__CaptureGameState(void *);
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern s32 lbl_803946DC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void SaveGame__SelectLevelRecord(void *arg0, s32 arg1) {
    s32 index;
    void *player;
    void *record;

    s32 *cfg;
    SaveGame__ClearWorkingState(arg0);
    cfg = (s32 *)&lbl_803946C4;
    index = SaveGame__GetRecordIndexForLevel(arg0, cfg[1]);
    if (index != -1 && M2C_FIELD(arg0, s32 *, 0x54) != 0) {
        M2C_FIELD(arg0, void **, 0x20) = (void *)(M2C_FIELD(arg0, s32 *, 0x30) + index * 0xA0);
        SaveGame__SetLevelId(arg0, cfg[1]);
        player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        SaveGame__SetPlayerHealthRatio(arg0, M2C_FIELD(player, f32 *, 0x288) / M2C_FIELD(player, f32 *, 0x28C));
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
        SaveGame__AllocatePayload(arg0, SaveGame__PrepareActiveRecordData(arg0));
        SaveGame__CaptureGameState(arg0);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    index = SaveGame__GetRecordIndexForLevel(arg0, arg1);
    if (index != -1) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        record = (void *)(M2C_FIELD(arg0, s32 *, 0x30) + index * 0xA0);
        M2C_FIELD(arg0, void **, 0x20) = record;
        if (M2C_FIELD(record, s32 *, 0x50) != 0) {
            lbl_803946DC = 1;
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            M2C_FIELD(arg0, s32 *, 0x14) = 3;
        }
    }
    SaveGame__ClearWorkingState(arg0);
}

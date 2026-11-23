/* SceneLights__RemoveLight @ 0x8021A924 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct {
    char pad[56];
    u32 handle;
    char pad2[16];
    u32 flags;
    char pad3[12];
} LightEntry;
typedef struct {
    char pad[4];
    LightEntry *entries;
    void *list08;
    char pad2[8];
    void *list14;
} LightPool;
extern LightPool lbl_803ACFCC;
void HwLight__RemoveFromActive(s32);
void SList__Remove(void *, void *);
void SList__PushFront(void *, s32);
void SceneLights__RebuildCache(void);
void SceneLights__RefreshProjectedFlag(void);
s32 SceneLights__RemoveLight(u32 arg0) {
    LightPool *pool = &lbl_803ACFCC;
    LightEntry *entry = &pool->entries[arg0 >> 16];
    if (entry->handle != arg0) {
        return 0;
    }
    entry->handle = 0;
    if (entry->flags != 0) {
        entry->flags = 0;
    }
    HwLight__RemoveFromActive((s32)((char *)entry + 4));
    SList__Remove(&pool->list14, entry);
    SList__PushFront(&pool->list08, (s32)entry);
    SceneLights__RebuildCache();
    SceneLights__RefreshProjectedFlag();
    return 1;
}

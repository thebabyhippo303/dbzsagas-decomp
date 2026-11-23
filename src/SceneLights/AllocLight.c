/* SceneLights__AllocLight @ 0x8021AA24 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct {
    char pad[56];
    union {
        struct {
            unsigned short index;
            unsigned short generation;
        } parts;
        unsigned int handle;
    } id;
    char pad2[76 - 60];
    int unk76;
} SceneLightEntry;

typedef struct {
    char pad[4];
    void *entries;
    char pad2[44 - 8];
    unsigned short nextGeneration;
} SceneLightPool;

extern char lbl_803ACFD4[];
extern SceneLightPool lbl_803ACFCC;
extern SceneLightEntry *SList__PopFront(void *list);

SceneLightEntry *SceneLights__AllocLight(void) {
    SceneLightEntry *entry = SList__PopFront(lbl_803ACFD4);
    if (entry == 0) {
        return 0;
    }
    entry->id.parts.index = ((char *)entry - (char *)lbl_803ACFCC.entries) * -373475417 >> 2;
    entry->id.parts.generation = lbl_803ACFCC.nextGeneration++;
    if (entry->id.handle == 0)
        entry->id.parts.generation = lbl_803ACFCC.nextGeneration++;
    entry->unk76 = 0;
    return entry;
}

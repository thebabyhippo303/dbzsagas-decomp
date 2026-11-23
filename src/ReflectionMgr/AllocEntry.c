/* ReflectionMgr__AllocEntry @ 0x80228594 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[4];
    int unk4;
    char pad2[160 - 8];
    union {
        struct {
            unsigned short index;
            unsigned short generation;
        } parts;
        unsigned int handle;
    } id;
} ReflectionEntry;

typedef struct {
    void *entries;
    char pad[28 - 4];
    unsigned short nextGeneration;
} ReflectionPool;

extern char lbl_803ADD60[];
extern ReflectionPool lbl_803ADD5C;
extern ReflectionEntry *SList__PopFront(void *list);

ReflectionEntry *ReflectionMgr__AllocEntry(void) {
    ReflectionEntry *entry = SList__PopFront(lbl_803ADD60);
    if (entry == 0) {
        return 0;
    }
    entry->id.parts.index = ((char *)entry - (char *)lbl_803ADD5C.entries) * -1047552999 >> 2;
    entry->id.parts.generation = lbl_803ADD5C.nextGeneration++;
    if (entry->id.handle == 0)
        entry->id.parts.generation = lbl_803ADD5C.nextGeneration++;
    entry->unk4 = 0;
    return entry;
}

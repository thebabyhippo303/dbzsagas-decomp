/* SceneMgr__AllocScene @ 0x8022AEB0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[4];
    union {
        struct {
            unsigned short index;
            unsigned short generation;
        } parts;
        unsigned int handle;
    } id;
    char pad2[964 - 8];
} SceneEntry;

typedef struct {
    SceneEntry *entries;
    char pad[28 - 4];
    unsigned short nextGeneration;
} ScenePool;

extern char lbl_803AD7B4[];
extern ScenePool lbl_803AD7B0;
extern SceneEntry *SList__PopFront(void *list);
void memset(void *, int, unsigned int);

SceneEntry *SceneMgr__AllocScene(void) {
    SceneEntry *entry = SList__PopFront(lbl_803AD7B4);
    if (entry == 0)
        return 0;
    memset(entry, 0, sizeof(SceneEntry));
    entry->id.parts.index = entry - lbl_803AD7B0.entries;
    entry->id.parts.generation = lbl_803AD7B0.nextGeneration++;
    if (entry->id.handle == 0)
        entry->id.parts.generation = lbl_803AD7B0.nextGeneration++;
    return entry;
}

/* Particle__AllocEntry @ 0x8021CA18 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *IntrusiveList__PopFront(void *);
void IntrusiveList__PushFront(void *, void *);

typedef struct {
    union {
        struct { u16 index; u16 generation; } parts;
        u32 handle;
    } id;
    s32 w4;
    char pad[4];
    s32 w12;
} Entry;

typedef struct {
    char pad[12];
    void *entries;
    char pad2[1136 - 16];
    u16 counter;
} Pool;

extern char lbl_803AD06C[];
extern char lbl_803AD1BC[];

void *Particle__AllocEntry(s32 arg0) {
    Entry *entry;
    char *base;
    Pool *pool;

    entry = (Entry *)IntrusiveList__PopFront(lbl_803AD06C);
    if (entry == NULL) {
        return NULL;
    }
    base = lbl_803AD1BC;
    IntrusiveList__PushFront(base + (arg0 << 4), entry);
    pool = (Pool *)(base - 352);
    entry->id.parts.index = ((char *)entry - (char *)pool->entries) * (s32)0xC28F5C29 >> 3;
    entry->id.parts.generation = pool->counter++;
    if (entry->id.handle == 0) {
        entry->id.parts.generation = pool->counter++;
    }
    entry->w12 = 0;
    entry->w4 = 0;
    return entry;
}

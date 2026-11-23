/* Emitter__AllocEntry @ 0x8021CD18 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void *SList__PopFront(void *);
void SList__PushFront(void *, s32);

typedef struct {
    union {
        struct { u16 index; u16 generation; } parts;
        u32 handle;
    } id;
    s32 w4;
    char pad[184 - 8];
    s16 w184;
} Entry;

typedef struct {
    char pad[0x430];
    void *entries;
    char pad2[0x470 - 0x434];
    u16 counter;
} Pool;

extern char lbl_803AD490[] __attribute__((section(".data")));
extern Pool lbl_803AD05C;

void *Emitter__AllocEntry(s16 arg0) {
    Entry *entry = SList__PopFront(lbl_803AD490);
    Pool *pool;

    if (entry == 0) {
        return 0;
    }
    entry->w4 = 0;
    pool = &lbl_803AD05C;
    entry->id.parts.index = ((char *)entry - (char *)pool->entries) * -252645135 >> 4;
    entry->id.parts.generation = pool->counter++;
    if (entry->id.handle == 0) {
        entry->id.parts.generation = pool->counter++;
    }
    entry->w184 = arg0;
    SList__PushFront((char *)pool + 0x440, entry);
    return entry;
}

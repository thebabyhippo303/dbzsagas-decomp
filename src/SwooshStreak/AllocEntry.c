/* SwooshStreak__AllocEntry @ 0x80230090 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

void *SList__PopFront(void *);
void SList__PushFront(void *, s32);
void AABB__SetEmpty(void *);

typedef struct {
    union {
        struct { u16 index; u16 generation; } parts;
        u32 handle;
    } id;
    char pad1[8 - 4];
    u16 w8;
    char pad2[16 - 10];
    s32 w16;
    char pad3[32 - 20];
    s32 w32;
    s32 w36;
    s32 w40;
    char pad4[68 - 44];
    s32 w68;
    s32 w72;
} Entry;

typedef struct {
    void *head;
    char pad[24 - 4];
    void *entries;
    u16 counter;
} Pool;

extern Pool lbl_803ADE7C;

void *SwooshStreak__AllocEntry(void) {
    Pool *pool = &lbl_803ADE7C;
    Entry *entry;

    if (pool->head == 0) {
        return 0;
    }
    entry = SList__PopFront(pool);
    entry->id.parts.index = ((char *)entry - (char *)pool->entries) * 0x286BCA1B >> 3;
    entry->id.parts.generation = pool->counter++;
    if (entry->id.handle == 0) {
        entry->id.parts.generation = pool->counter++;
    }
    SList__PushFront((char *)pool + 12, entry);
    entry->w8 = 0;
    entry->w72 = 0;
    entry->w68 = 0;
    entry->w16 = 0;
    entry->w32 = 0;
    entry->w36 = 0;
    entry->w40 = 0;
    AABB__SetEmpty((char *)entry + 76);
    return entry;
}

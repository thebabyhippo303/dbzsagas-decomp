/* Attacher__AllocEntry @ 0x80214B9C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Attacher__AllocEntry @ 0x80214B9C (0xA8). ProDG -O2. */
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
    char pad[68 - 4];
    s16 w68;
} Entry;

typedef struct {
    void *head;
    char pad[24 - 4];
    void *entries;
    u16 counter;
} Pool;

extern Pool lbl_803ACF90;

void *Attacher__AllocEntry(void) {
    Pool *pool = &lbl_803ACF90;
    Entry *entry;

    if (pool->head == 0) {
        return 0;
    }
    entry = SList__PopFront(pool);
    entry->id.parts.index = ((char *)entry - (char *)pool->entries) * -373475417 >> 2;
    entry->id.parts.generation = pool->counter++;
    if (entry->id.handle == 0) {
        entry->id.parts.generation = pool->counter++;
    }
    SList__PushFront((char *)pool + 12, entry);
    entry->w68 = 0;
    return entry;
}

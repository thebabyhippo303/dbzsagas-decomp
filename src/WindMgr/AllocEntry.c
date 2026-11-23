/* WindMgr__AllocEntry @ 0x80217724 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: WindMgr__AllocEntry @ 0x80217724 (0xA8). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

void *SList__PopFront(void *);
void SList__PushFront(void *, s32);

typedef struct {
    char pad[2];
    s16 w2;
    union {
        struct { u16 index; u16 generation; } parts;
        u32 handle;
    } id;
    s16 w8;
} Entry;

typedef struct {
    char pad[24];
    void *entries;
    u16 counter;
} Pool;

extern Pool lbl_803ADCB0;

void *WindMgr__AllocEntry(s16 arg0) {
    Entry *entry = SList__PopFront(&lbl_803ADCB0);

    if (entry == 0) {
        return 0;
    }
    entry->id.parts.index = ((char *)entry - (char *)lbl_803ADCB0.entries) * -252645135 >> 3;
    entry->id.parts.generation = lbl_803ADCB0.counter++;
    if (entry->id.handle == 0) {
        entry->id.parts.generation = lbl_803ADCB0.counter++;
    }
    SList__PushFront((char *)&lbl_803ADCB0 + 12, entry);
    entry->w8 = arg0;
    entry->w2 = 0x200;
    return entry;
}

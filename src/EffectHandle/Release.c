/* EffectHandle__Release @ 0x8022F608 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: EffectHandle__Release @ 0x8022F608 (0x74). ProDG -O2. */
typedef struct {
    char pad[8];
    unsigned flags;
    char pad2[0xC];
    unsigned id;
} EffectEntry;

extern char lbl_803ADD88[];
extern void IntrusiveList__Remove(void *list, void *entry);
extern void IntrusiveList__PushFront(void *list, void *entry);

int EffectHandle__Release(unsigned handle) {
    unsigned slot;
    unsigned offset;
    char *base;
    EffectEntry *entry;

    slot = handle >> 16;
    offset = slot * 148;
    base = lbl_803ADD88;
    entry = (EffectEntry *)((char *)*(void **)(base + 4) + offset);
    if (entry->id != handle)
        return 0;
    entry->id = 0;
    IntrusiveList__Remove(base + 24, entry);
    IntrusiveList__PushFront(base + 8, entry);
    return 1;
}

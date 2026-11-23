/* ParticleMgr__FindInNameTable @ 0x8021C7F0 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct EffectAssetEntry {
    char *name;
    unsigned short idA;
    unsigned short idB;
} EffectAssetEntry;

typedef struct EffectAssetTable {
    EffectAssetEntry *entries;
    int count;
} EffectAssetTable;

extern int String__CompareIgnoreCase(const char *a, const char *b);

static inline EffectAssetEntry *GetEntry(EffectAssetTable *t, int i) {
    if (i < 0) {
        i = t->count - 1;
    }
    if ((i >= t->count) || (t->count == 0)) {
        return 0;
    }
    return t->entries + i;
}

int fn_8021C7F0(const char *name, int *outA, int *outB, EffectAssetTable *table, int count) {
    int step;
    int index;
    int cmp;

    if (table->count == 0) {
        return 0;
    }
    step = count >> 1;
    index = (count / 2) - 1;
    if (step > 0) {
        do {
            if (index >= table->count) {
                cmp = -1;
            } else {
                cmp = String__CompareIgnoreCase(name, GetEntry(table, index)->name);
            }
            if (cmp == 0) {
                *outA = GetEntry(table, index)->idA;
                *outB = GetEntry(table, index)->idB;
                return 1;
            }
            step >>= 1;
            if (cmp < 0) {
                index -= step;
            } else {
                index += step;
            }
        } while (step > 0);
    }
    return 0;
}

/* EffectParamTable__SetEntry @ 0x8019F724 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct P8 {
    s32 a;
    s32 b;
} P8;

void EffectParamTable__SetEntry(P8 *table, s32 index, P8 *entry) {
    table[index] = *entry;
}

/* EffectHandle__SetFrontPriority @ 0x8022F55C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match EffectHandle__SetFrontPriority @ 0x8022F55C (0x3C). */
typedef struct {
    char pad[8];
    unsigned flags;
    char pad2[12];
    unsigned id;
    char tail[148 - 28];
} EffectSlot;

extern EffectSlot *lbl_803ADD8C __attribute__((section(".data")));

int EffectHandle__SetFrontPriority(unsigned handle) {
    EffectSlot *entry = &lbl_803ADD8C[handle >> 16];

    if (entry->id != handle) {
        return 0;
    }
    entry->flags |= 64;
    return 1;
}

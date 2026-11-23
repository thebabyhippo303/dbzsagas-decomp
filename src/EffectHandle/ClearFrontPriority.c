/* EffectHandle__ClearFrontPriority @ 0x8022F520 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__ClearFrontPriority @ 0x8022F520 (0x3C). ProDG -O2. */
typedef unsigned int u32;
typedef int s32;

extern char *lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__ClearFrontPriority(u32 arg0) {
    char *entry = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if (*(s32 *)(entry + 0x18) != (s32)arg0) {
        return 0;
    }
    *(u32 *)(entry + 0x8) &= ~0x40U;
    return 1;
}

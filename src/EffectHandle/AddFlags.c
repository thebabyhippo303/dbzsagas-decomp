/* EffectHandle__AddFlags @ 0x8022F4A8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__AddFlags @ 0x8022F4A8 (0x3C). ProDG -O2. */
typedef unsigned int u32;
typedef int s32;

extern char *lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__AddFlags(u32 arg0, u32 arg1) {
    char *entry = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if (*(s32 *)(entry + 0x18) != (s32)arg0) {
        return 0;
    }
    *(u32 *)(entry + 0x8) |= arg1;
    return 1;
}

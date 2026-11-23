/* EffectHandle__SetPriority @ 0x8022F414 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__SetPriority @ 0x8022F414 (0x34). ProDG -O2. */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern char *lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__SetPriority(u32 arg0, u16 arg1) {
    char *entry = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if (*(s32 *)(entry + 0x18) != (s32)arg0) {
        return 0;
    }
    *(u16 *)(entry + 0x14) = arg1;
    return 1;
}

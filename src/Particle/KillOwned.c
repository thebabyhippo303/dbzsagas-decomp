/* Particle__KillOwned @ 0x80221230 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Particle__KillOwned @ 0x80221230 (0x5C). ProDG -O2. */
typedef int s32;
typedef unsigned int u32;

extern void Particle__FreeEntry(void *entry);
extern void *lbl_803AD068 __attribute__((section(".data")));

s32 Particle__KillOwned(u32 arg0, s32 arg1) {
    char *entry;

    entry = (char *)lbl_803AD068 + (arg0 >> 0x10U) * 0xC8;
    if (*(u32 *)entry != arg0) {
        return 0;
    }
    if (arg1 == 0) {
        *(s32 *)(entry + 0xB8) = arg1;
    }
    Particle__FreeEntry(entry);
    return 1;
}

/* Emitter__UseOSTimerImpl @ 0x80224604 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__UseOSTimerImpl @ 0x80224604 (0x58). ProDG -O2. */
typedef unsigned int u32;
typedef int s32;

extern char *lbl_803AD48C __attribute__((section(".data")));

s32 Emitter__UseOSTimerImpl(u32 arg0, s32 arg1) {
    u32 *entry = (u32 *)(lbl_803AD48C + (arg0 >> 16) * 0x110);

    if (entry[0] != arg0)
        return 0;
    if (arg1 != 0)
        entry[1] = entry[1] | 0x100000;
    else
        entry[1] = entry[1] & 0xFFEFFFFF;
    return 1;
}

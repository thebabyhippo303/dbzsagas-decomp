/* Breakable__SetExplodeAfter @ 0x8003B488 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Breakable__SetExplodeAfter @ 0x8003B488 (0x54). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void Breakable__SetExplodeAfter(void *script, void *context) {
    int *ptr = (int *)((char *)Script__PopInt(script, context) + 0x590);
    int value = Script__PopInt(script, context);
    *ptr = value != 0;
}

/* Script__DisableSplinePath @ 0x8002A390 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__WriteBooleanToPointer @ 0x8002A390 (0x54). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void Script__WriteBooleanToPointer(void *script, void *context) {
    int *ptr = (int *)Script__PopInt(script, context);
    int value = Script__PopInt(script, context);
    *ptr = value != 0;
}

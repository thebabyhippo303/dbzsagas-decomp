/* Breakable__GetBaseEffect @ 0x8003B0DC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Breakable__GetBaseEffect @ 0x8003B0DC (0x40). ProDG -O2. */
extern void *fn_8023A310(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Breakable__GetBaseEffect(void *script, void *context) {
    char *breakable = (char *)fn_8023A310(script, context);
    Script__PushInt(script, context, (int)(breakable + 0x508));
}

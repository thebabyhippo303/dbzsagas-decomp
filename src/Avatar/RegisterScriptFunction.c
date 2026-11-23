/* Avatar__RegisterScriptFunction @ 0x800920AC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__RegisterScriptFunction @ 0x800920AC (0x2C). */
extern void Script_RegisterFunction(void *fn, void *a, void *b);

void Avatar__RegisterScriptFunction(void *self, void *fn, void *a, void *b) {
    Script_RegisterFunction(fn, a, b);
}

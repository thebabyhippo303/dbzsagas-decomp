/* Script__RegisterBoundMethod @ 0x800920D8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__RegisterBoundMethod @ 0x800920D8 (0x34). */
extern void Script_RegisterFunction(void *fn, void *name, void *user);
extern void Script__InvokeBoundMethod;

void Script__RegisterBoundMethod(void *self, void *user, void *name) {
    Script_RegisterFunction(&Script__InvokeBoundMethod, name, user);
}

/* Script__SetStringVariable @ 0x8023A5D4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__SetStringVariable @ 0x8023A5D4 (0x7C). ProDG -O2. */
extern int strlen(const char *text);
extern void *MemHeap__Alloc(int size, int align);
extern char *strcpy(char *dst, const char *src);
extern void Script__PushString(void *script, void *context, char *text, int a, int b);
extern void Script__PopToVariable(void *script, void *context, void *var);

void Script__SetStringVariable(void *script, void *context, void *var, const char *text) {
    char *copy = MemHeap__Alloc(strlen(text) + 1, 8);
    strcpy(copy, text);
    Script__PushString(script, context, copy, 0, 1);
    Script__PopToVariable(script, context, var);
}

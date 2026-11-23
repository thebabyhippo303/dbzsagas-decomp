/* Array__AppendEntryCount @ 0x801D462C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Array__AppendEntryCount @ 0x801D462C (0x54). ProDG -O2. */
typedef struct ArrayObj {
    char pad[0x24];
    int count;
    int allocated;
} ArrayObj;

extern int sprintf(char *dst, const char *fmt, ...);
extern char *strcat(char *dst, const char *src);

void Array__AppendEntryCount(ArrayObj *self, char *dest) {
    char buf[256];
    sprintf(buf, " of %d %d byte entries (%d allocated)", self->count, 24, self->allocated);
    strcat(dest, buf);
}

/* VarString__GetAsString @ 0x8018D224 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarString__GetAsString @ 0x8018D224 (0x60). ProDG -O2. */
typedef struct {
    unsigned int flags;
    char pad[0x40 - 4];
    char *value;
} VarString;

extern char *strncpy(char *dst, const char *src, unsigned int n);

char *VarString__GetAsString(VarString *self, char *buf, int size) {
    unsigned int bit = (self->flags >> 1) & 1;
    if (bit != 0)
        return 0;
    strncpy(buf, self->value, (unsigned int)(size - 1));
    buf[size - 1] = (char)bit;
    return buf;
}

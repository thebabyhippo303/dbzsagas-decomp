/* VarVector__GetAsString @ 0x8018D85C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarVector__GetAsString @ 0x8018D85C (0x98). ProDG -O2. */
typedef struct {
    unsigned int flags;
    char pad[0x3C];
    float *values;
    int count;
} VarVectorString;

extern char lbl_8033E9F0[];
extern int sprintf(char *buffer, const char *format, ...);

char *VarVector__GetAsString(VarVectorString *self, char *buffer) {
    if (self->flags & 2)
        return 0;
    if (self->count != 0)
        sprintf(buffer, lbl_8033E9F0, self->values[0], self->values[1], self->values[2]);
    else
        sprintf(buffer, lbl_8033E9F0, self->values[0], self->values[1], self->values[2]);
    return buffer;
}

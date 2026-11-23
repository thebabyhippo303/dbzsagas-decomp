/* VarMatrix3__GetAsString @ 0x8018DCF4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix3__GetAsString @ 0x8018DCF4 (0x80). ProDG -O2. */
typedef struct {
    unsigned int flags;
    char pad[0x3C];
    float *values;
} VarMatrix3String;

extern char lbl_8033EAFC[];
extern int sprintf(char *buffer, const char *format, ...);

char *VarMatrix3__GetAsString(VarMatrix3String *self, char *buffer) {
    float *values;
    if (self->flags & 2) {
        return 0;
    }
    values = self->values;
    sprintf(buffer, lbl_8033EAFC,
            values[0], values[1], values[2],
            values[3], values[4], values[5],
            values[6], values[7], values[8]);
    return buffer;
}

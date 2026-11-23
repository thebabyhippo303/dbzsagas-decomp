/* VarMatrix4__GetAsString @ 0x8018DAEC (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix4__GetAsString @ 0x8018DAEC (0xB8). ProDG -O2. */
typedef struct {
    unsigned int flags;
    char pad[0x40 - 4];
    float *values;
} VarMatrix4String;

extern char lbl_8033EA74[];
extern int sprintf(char *buffer, const char *format, ...);

char *VarMatrix4__GetAsString(VarMatrix4String *self, char *buffer) {
    float *values;

    if (self->flags & 2)
        return 0;
    values = self->values;
    sprintf(buffer, lbl_8033EA74,
            values[0], values[1], values[2], values[3],
            values[4], values[5], values[6], values[7],
            values[8], values[9], values[10], values[11],
            values[12], values[13], values[14], values[15]);
    return buffer;
}

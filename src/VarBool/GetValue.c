/* VarBool__GetValue @ 0x8018F13C (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarBool__GetValue @ 0x8018F13C (0x8). ProDG -O2. */
typedef struct {
    char pad[0x40];
    int value;
} VarBool;

int VarBool__GetValue(VarBool *self) {
    return self->value;
}

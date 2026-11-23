/* VarReal__GetAsString @ 0x8018D62C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarReal__GetAsString @ 0x8018D62C (0x84). ProDG -O2. */
extern int sprintf(char *buffer, const char *format, ...);
extern float lbl_8033E9CC __attribute__((section(".data")));

char *VarReal__GetAsString(char *self, char *buffer) {
    float value;

    if ((*(int *)self & 2) != 0) {
        return 0;
    }
    if (*(float *)(self + 72) != lbl_8033E9CC) {
        value = *(float *)*(char **)(self + 64) / *(float *)(self + 72);
    } else {
        value = *(float *)*(char **)(self + 64);
    }
    sprintf(buffer, "%g", value);
    return buffer;
}

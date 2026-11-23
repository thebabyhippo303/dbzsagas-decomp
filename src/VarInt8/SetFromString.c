/* VarInt8__SetFromString @ 0x8018D090 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int VarInt__Parse(void *self);

int VarInt8__SetFromString(char *self) {
    int ok = 0;
    if ((*(unsigned *)self & 1) == 0) {
        int v = VarInt__Parse(self);
        if (*(int *)(self + 64) != 0) {
            **(unsigned char **)(self + 72) = *((unsigned char *)&v + 3);
        } else if (v < 0) {
            **(unsigned char **)(self + 72) = (unsigned)(-((-v) & 0x7f)) >> 24;
        } else {
            **(unsigned char **)(self + 72) = *((unsigned char *)&v + 3) & 0x7f;
        }
        ok = 1;
    }
    return ok;
}

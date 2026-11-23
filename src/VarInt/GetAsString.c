/* VarInt__GetAsString @ 0x8018CE10 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt__GetAsString @ 0x8018CE10 (0x54). ProDG -O2. */
typedef struct {
    int value;
} VarInner;

typedef struct {
    unsigned flags;
    char pad[0x48 - 4];
    VarInner *inner;
} VarInt;

extern void VarInt__Format(VarInt *self, int value, char *buf, int arg);

char *VarInt__GetAsString(VarInt *self, char *buf, int arg) {
    if ((self->flags & 2) != 0)
        return 0;
    VarInt__Format(self, self->inner->value, buf, arg);
    return buf;
}

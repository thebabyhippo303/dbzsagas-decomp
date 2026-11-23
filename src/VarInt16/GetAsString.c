/* VarInt16__GetAsString @ 0x8018CFE8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt16__GetAsString @ 0x8018CFE8 (0x54). ProDG -O2. */
typedef struct {
    unsigned short value;
} VarInner;

typedef struct {
    unsigned flags;
    char pad[0x48 - 4];
    VarInner *inner;
} VarInt16;

extern void VarInt__Format(VarInt16 *self, int value, char *buf, int arg);

char *VarInt16__GetAsString(VarInt16 *self, char *buf, int arg) {
    if ((self->flags & 2) != 0)
        return 0;
    VarInt__Format(self, self->inner->value, buf, arg);
    return buf;
}

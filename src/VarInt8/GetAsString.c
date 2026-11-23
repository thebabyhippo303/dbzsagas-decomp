/* VarInt8__GetAsString @ 0x8018D120 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt8__GetAsString @ 0x8018D120 (0x54). ProDG -O2. */
typedef struct {
    unsigned char value;
} VarInner;

typedef struct {
    unsigned flags;
    char pad[0x48 - 4];
    VarInner *inner;
} VarInt8;

extern void VarInt__Format(VarInt8 *self, int value, char *buf, int arg);

char *VarInt8__GetAsString(VarInt8 *self, char *buf, int arg) {
    if ((self->flags & 2) != 0)
        return 0;
    VarInt__Format(self, self->inner->value, buf, arg);
    return buf;
}

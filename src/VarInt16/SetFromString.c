/* VarInt16__SetFromString @ 0x8018CF58 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* VarInt16__SetFromString @ 0x8018CF58 */

typedef struct {
    unsigned flags;
    char pad[0x40 - 4];
    int mode;
    char pad2[4];
    unsigned short *value;
} VarInt16;

extern int VarInt__Parse(void *self);

int VarInt16__SetFromString(VarInt16 *self) {
    int parsed;
    unsigned short bits;

    if ((self->flags & 1) != 0) {
        return 0;
    }
    parsed = VarInt__Parse(self);
    if (self->mode != 0) {
        *self->value = *(unsigned short *)((char *)&parsed + 2);
    } else if (parsed < 0) {
        *self->value = (unsigned short)(((unsigned)(-(((-parsed) & 0x7FFF))) >> 16));
    } else {
        *self->value = *(unsigned short *)((char *)&parsed + 2) & 0x7FFF;
    }
    return 1;
}

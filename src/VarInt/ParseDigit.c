/* VarInt__ParseDigit @ 0x8018CC24 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 VarInt__ParseDigit(void *self, s32 c, s32 hex, s32 *out) {
    s32 digit;

    (void)self;
    digit = c - 48;
    if ((unsigned char)digit <= 9) {
        *out = digit;
        return 1;
    }
    if (hex != 0) {
        if ((unsigned)(c - 97) <= 5) {
            *out = c - 87;
            return 1;
        }
        if ((unsigned)(c - 65) <= 5) {
            *out = c - 55;
            return 1;
        }
    }
    return 0;
}

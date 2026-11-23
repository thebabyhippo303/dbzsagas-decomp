/* VarInt__Parse @ 0x8018CAE4 (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 VarInt__ParseDigit(void *self, s32 c, s32 hex, s32 *out);

s32 VarInt__Parse(void *self, char *str) {
    char *p;
    s32 neg;
    s32 hex;
    s32 acc;
    s32 base;
    s32 digit;
    s32 c;

    if (str == 0) {
        return 0;
    }
    p = str;
    c = *p;
    while (c == ' ' || c == '\t') {
        p += 1;
        c = *p;
    }
    if (*p == 0) {
        return 0;
    }
    neg = 0;
    if (*p == '-') {
        if (*(s32 *)((char *)self + 0x40) != 0) {
            return 0;
        }
        neg = 1;
        p += 1;
    } else if (*p == '+') {
        p += 1;
    }
    c = *p;
    hex = *(s32 *)((char *)self + 0x44);
    if (c == '0') {
        p += 1;
        c = *p;
        if (c == 0) {
            return 0;
        }
        if (c == 'x' || c == 'X') {
            hex = 1;
            p += 1;
        }
    }
    acc = 0;
    base = 10;
    if (hex != 0) {
        base = 16;
    }
    while (VarInt__ParseDigit(self, *p, hex, &digit) != 0) {
        acc = acc * base + digit;
        p += 1;
    }
    if (neg != 0) {
        acc = -(acc & 0x7FFFFFFF);
    }
    return acc;
}

/* Hash__Buffer32 @ 0x80188098 (size: 0x2E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef unsigned int u32;

#define MIX(a, b, c) \
    a -= b; a -= c; a ^= (c >> 13); \
    b -= c; b -= a; b ^= (a << 8); \
    c -= a; c -= b; c ^= (b >> 13); \
    a -= b; a -= c; a ^= (c >> 12); \
    b -= c; b -= a; b ^= (a << 16); \
    c -= a; c -= b; c ^= (b >> 5); \
    a -= b; a -= c; a ^= (c >> 3); \
    b -= c; b -= a; b ^= (a << 10); \
    c -= a; c -= b; c ^= (b >> 15);

u32 Hash__Buffer32(const u8 *k, u32 length, u32 initval) {
    u32 a, b, c, len;

    len = length;
    a = b = 0x9E3779B9;
    c = initval;
    while (len >= 12) {
        a += k[0] + ((u32)k[1] << 8) + ((u32)k[2] << 16) + ((u32)k[3] << 24);
        b += k[4] + ((u32)k[5] << 8) + ((u32)k[6] << 16) + ((u32)k[7] << 24);
        c += k[8] + ((u32)k[9] << 8) + ((u32)k[10] << 16) + ((u32)k[11] << 24);
        MIX(a, b, c);
        k += 12;
        len -= 12;
    }
    c += length;
    switch (len) {
    case 11: c += (u32)k[10] << 24;
    case 10: c += (u32)k[9] << 16;
    case 9: c += (u32)k[8] << 8;
    case 8: b += (u32)k[7] << 24;
    case 7: b += (u32)k[6] << 16;
    case 6: b += (u32)k[5] << 8;
    case 5: b += k[4];
    case 4: a += (u32)k[3] << 24;
    case 3: a += (u32)k[2] << 16;
    case 2: a += (u32)k[1] << 8;
    case 1: a += k[0];
    }
    MIX(a, b, c);
    return c;
}

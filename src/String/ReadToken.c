/* String__ReadToken @ 0x8018C25C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

s32 String__IsCharInSet(s32, u8 *);
u8 *String__SkipWhitespace(u8 *);

void String__ReadToken(u8 *str, u8 *delims, u8 *out, s32 max, s32 *hitDelim) {
    s32 isDelim;
    s8 c;
    u8 *p = String__SkipWhitespace(str);

    while ((c = *p) != 0 && String__IsCharInSet(c, delims) == 0 && max > 0) {
        *out = *p;
        max -= 1;
        p += 1;
        out += 1;
    }
    *out = 0;
    isDelim = String__IsCharInSet((s8)*p, delims);
    if (hitDelim != 0) {
        *hitDelim = isDelim;
    }
    if (isDelim != 0) {
        p += 1;
    }
    String__SkipWhitespace(p);
}

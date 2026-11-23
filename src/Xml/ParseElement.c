/* Xml__ParseElement @ 0x80306304 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Xml__GetNameLength(char *, u32);
s32 Xml__InternSubstring(char *, u32);
s32 Xml__ParseAttributes(s32 *, char *, u32);
extern u8 lbl_8033C9D9[];
extern s32 lbl_803DD0D0;

s32 Xml__ParseElement(s32 *arg0, char *arg1, u32 arg2) {
    char *p;
    s32 n;
    u8 c;
    s32 c2;

    p = arg1 + 1;
    n = Xml__GetNameLength(p, arg2 - 1);
    *arg0 = Xml__InternSubstring(p, (u32)n);
    p += n;
    if ((u32)(p - arg1) < arg2) {
        do {
            if ((*(u8 *)p == '/') && (p[1] == '>')) {
                p += 2;
                lbl_803DD0D0 = 1;
                return p - arg1;
            }
            c = *(u8 *)p;
            c2 = c;
            if ((u8)c2 == '>') {
                p += 1;
                return p - arg1;
            }
            if (lbl_8033C9D9[(u8)c2] & 8) {
                p += Xml__ParseAttributes(arg0, p, arg2 - (u32)(p - arg1));
            }
            if ((u32)(p - arg1) >= arg2) {
                break;
            }
        } while (1);
    }
    return 0;
}

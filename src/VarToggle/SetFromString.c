/* VarToggle__SetFromString @ 0x8018D438 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef struct VarToggle {
    s32 flags;
    char pad[0x40 - 4];
    s32 *value;
} VarToggle;
extern u8 lbl_8033C9D9[];
extern char lbl_8033E9B4[];
int String__CompareIgnoreCase(const char *a, const char *b);
s32 VarToggle__SetFromString(VarToggle *var, char *str) {
    s32 c;
    s32 *value;
    s32 result;
    if (var->flags & 1) {
        return 0;
    }
    if (str == 0 || *str == 0) {
        *var->value ^= 1;
    } else {
        c = *str;
        if (*(lbl_8033C9D9 + c) & 1) {
            c += 0x20;
        }
        value = var->value;
        result = 0;
        if ((s8)c == 't' || (s8)c == 'y' || (s8)c == '1' || String__CompareIgnoreCase(str, lbl_8033E9B4) == 0) {
            result = 1;
        }
        *value = result;
    }
    return 1;
}

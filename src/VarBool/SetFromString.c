/* VarBool__SetFromString @ 0x8018D2D0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarBool__SetFromString @ 0x8018D2D0 (0xA4). ProDG -O2. */
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

typedef struct VarBool {
    s32 flags;
    char pad[0x40 - 4];
    s32 *value;
} VarBool;

extern u8 lbl_8033C9D9[];
extern char lbl_8033E9B4[];

int String__CompareIgnoreCase(const char *a, const char *b);

s32 VarBool__SetFromString(VarBool *var, char *str) {
    s32 c;
    s32 *value;
    s32 result;

    if (var->flags & 1) {
        return 0;
    }
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
    return 1;
}

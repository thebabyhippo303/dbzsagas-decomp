/* File__RemapPath @ 0x80187D5C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strlwr(char *);
char * strcat(char *, char *);
char * strcpy(char *, const char *);
u8 * strstr(u8 *, u8 *);
extern u8 **lbl_803DCBF0;

void File__RemapPath(s8 *arg0, s8 *arg1) {
    s32 zero;
    u8 **var_r31;
    u8 *temp_r3;

    var_r31 = lbl_803DCBF0;
    strcpy(arg0, arg1);
    strlwr(arg0);
    if (var_r31 != NULL) {
        if ((u8 *) *var_r31 != NULL) {
            zero = 0;
            do {
                temp_r3 = strstr((u8 *) arg0, M2C_FIELD(var_r31, u8 **, 0));
                if (temp_r3 != NULL) {
                    *temp_r3 = zero;
                    strcat(arg0, M2C_FIELD(var_r31, s8 **, 4));
                    return;
                }
                var_r31 = (u8 **)((char *)var_r31 + 8);
            } while (*var_r31 != NULL);
        }
    }
}

/* LoadContext__CopyCurrentPath @ 0x80252114 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
char * strcpy(char *, const char *);
int strlen(const char *);
void LoadContext__CopyCurrentPath(s8 **arg0, u32 *arg1) {
    s8 *temp_r3;
    u32 temp_r3_2;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        temp_r3_2 = Mem__NewArray(strlen(temp_r3) + 1);
        *arg1 = temp_r3_2;
        strcpy((s8 *) temp_r3_2, *arg0);
        return;
    }
    *arg1 = (u32) temp_r3;
}

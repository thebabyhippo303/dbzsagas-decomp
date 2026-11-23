/* StreamQueue__AppendDirectory @ 0x8019458C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
int strlen(const char *);
extern s8 lbl_8033F448 __attribute__((section(".data")));

void StreamQueue__AppendDirectory(void *arg0, s8 *arg1) {
    s8 *temp_r31;
    s32 len;

    if (arg1 == NULL) {
        M2C_FIELD(arg0, s8 **, 4) = arg1;
        return;
    }
    temp_r31 = arg0 + 8;
    M2C_FIELD(arg0, s8 **, 4) = (s8 *)1;
    strcat(temp_r31, arg1);
    len = strlen(temp_r31);
    len -= 1;
    if (((u8 *)temp_r31)[len] != 0x5C) {
        strcat(temp_r31, &lbl_8033F448);
    }
}

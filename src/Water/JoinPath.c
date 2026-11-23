/* Water__JoinPath @ 0x802973A8 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Water__JoinPath @ 0x802973A8 (0x78). ProDG -O2. */
char *strcat(char *, char *);
char *strcpy(char *, const char *);
int strlen(const char *);
extern char lbl_8034F010[];

void Water__JoinPath(char *arg0, char *arg1, char *arg2) {
    int len;

    strcpy(arg2, arg0);
    len = strlen(arg2);
    if ((len > 0) && (arg2[len - 1] != 0x5C)) {
        strcat(arg2, lbl_8034F010);
    }
    strcat(arg2, arg1);
}

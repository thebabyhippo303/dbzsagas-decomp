/* LoadContext__PushPath @ 0x80251FE4 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
char * strcat(char *, char *);
char * strcpy(char *, const char *);
int strlen(const char *);
extern char lbl_80347D94 __attribute__((section(".data")));

s32 LoadContext__PushPath(void *arg0, char *arg1) {
    char *old0;
    s32 total;

    old0 = M2C_FIELD(arg0, char **, 0);
    M2C_FIELD(arg0, char **, 8) = M2C_FIELD(arg0, char **, 4);
    M2C_FIELD(arg0, char **, 4) = old0;
    if (arg1 != NULL && *arg1 != 0) {
        char *buf;
        total = strlen(old0);
        total += strlen(arg1);
        buf = Mem__NewArray(total + 2);
        M2C_FIELD(arg0, char **, 0) = buf;
        if (buf == 0) {
            return 0;
        }
        strcpy(buf, M2C_FIELD(arg0, char **, 4));
        strcat(M2C_FIELD(arg0, char **, 0), arg1);
        if (M2C_FIELD(arg0, char **, 0)[strlen(M2C_FIELD(arg0, char **, 0)) - 1] != '\\') {
            if (M2C_FIELD(arg0, char **, 0)[strlen(M2C_FIELD(arg0, char **, 0)) - 1] != '/') {
                strcat(M2C_FIELD(arg0, char **, 0), &lbl_80347D94);
            }
        }
        return 1;
    }
    return 1;
}

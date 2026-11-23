/* Avatar__BuildEffectAssetPath @ 0x8009CA40 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *fn_80184348(s32 size);
void fn_80184430(char *block);
char *strcat(char *dest, const char *src);
char *strcpy(char *dest, const char *src);
int strlen(const char *s);
extern char lbl_8031FE2C[] __attribute__((section(".data")));

void Avatar__BuildEffectAssetPath(void *arg0, s8 *arg1) {
    s32 total;
    s32 base;
    char *buf;

    base = strlen(M2C_FIELD(arg0, char **, 4)) + 1;
    total = base + strlen(arg1) + 1;
    if (total > strlen(M2C_FIELD(arg0, char **, 8))) {
        buf = M2C_FIELD(arg0, char **, 8);
        if (buf != NULL) {
            fn_80184430(buf);
        }
        M2C_FIELD(arg0, void **, 8) = fn_80184348(total);
    }
    strcpy(M2C_FIELD(arg0, char **, 8), M2C_FIELD(arg0, char **, 4));
    strcat(M2C_FIELD(arg0, char **, 8), lbl_8031FE2C);
    strcat(M2C_FIELD(arg0, char **, 8), (char *)arg1);
}

/* Sfx3DGroup__BuildSuffixedName @ 0x8009D0AC (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_80184348(int);
void fn_80184430(char *);
char * strcat(char *, const char *);
char * strcpy(char *, const char *);
int strlen(const char *);
s8 *Sfx3DGroup__BuildSuffixedName(void *arg0, s8 *arg1) {
    s32 temp_r30;
    s32 temp_r30_2;
    s8 *temp_r3;

    temp_r30 = strlen(M2C_FIELD(arg0, s8 **, 0x10));
    temp_r30_2 = temp_r30 + strlen(arg1) + 1;
    if (temp_r30_2 > strlen(M2C_FIELD(arg0, s8 **, 0x14))) {
        temp_r3 = M2C_FIELD(arg0, s8 **, 0x14);
        if (temp_r3 != NULL) {
            fn_80184430(temp_r3);
        }
        M2C_FIELD(arg0, s8 **, 0x14) = fn_80184348(temp_r30_2);
    }
    strcpy(M2C_FIELD(arg0, s8 **, 0x14), M2C_FIELD(arg0, s8 **, 0x10));
    strcat(M2C_FIELD(arg0, s8 **, 0x14), arg1);
    return M2C_FIELD(arg0, s8 **, 0x14);
}


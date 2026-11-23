/* Avatar__SetAiPrefixedName @ 0x80099088 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
char * Mem__NewArray(s32);
int sprintf(char *, const char *, ...);
char * strcat(char *, const char *);
int strlen(const char *);
extern char lbl_8031FA98[] __attribute__((section(".data")));

void Avatar__SetAiPrefixedName(void *arg0, s8 *arg1) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, s8 **, 0x680);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    temp_r3_2 = Mem__NewArray(strlen(arg1) + 4);
    M2C_FIELD(arg0, s8 **, 0x680) = temp_r3_2;
    sprintf(temp_r3_2, lbl_8031FA98);
    strcat(M2C_FIELD(arg0, s8 **, 0x680), arg1);
}

/* SphereTextBox__SetText @ 0x80273084 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
void Mem__DeleteArray(void *);
char * strcpy(char *, const char *);
int strlen(const char *);
void SphereTextBox__WordWrap(s32, s32);
M2C_UNK SphereTextBox__BuildLines(s32, s32);
void SphereTextBox__SetText(s32 arg0, s8 *arg1) {
    s8 *temp_r3;

    temp_r3 = Mem__NewArray(strlen(arg1) + 1);
    strcpy(temp_r3, arg1);
    SphereTextBox__WordWrap(arg0, (s32) temp_r3);
    SphereTextBox__BuildLines(arg0, (s32) temp_r3);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
}

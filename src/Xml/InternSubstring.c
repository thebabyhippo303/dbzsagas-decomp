/* Xml__InternSubstring @ 0x8030694C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

char *strncpy(char *, const char *, u32);
void Xml__InternString(char *);
extern char *lbl_803DD0C8;

void Xml__InternSubstring(char *arg0, u32 arg1) {
    strncpy(lbl_803DD0C8, arg0, arg1);
    lbl_803DD0C8[arg1] = 0;
    Xml__InternString(lbl_803DD0C8);
}

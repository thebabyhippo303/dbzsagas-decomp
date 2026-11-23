/* Path__Construct @ 0x801FC7C0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
char * strcpy(char *, const char *);
int strlen(const char *);
extern f32 lbl_80345050 __attribute__((section(".data")));
extern M2C_UNK lbl_803456C8 __attribute__((section(".data")));

void *Path__Construct(void *arg0, s8 *arg1) {
    s8 *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_803456C8;
    temp_r3 = Mem__NewArray(strlen(arg1) + 1);
    M2C_FIELD(arg0, s8 **, 4) = temp_r3;
    strcpy(temp_r3, arg1);
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80345050;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}

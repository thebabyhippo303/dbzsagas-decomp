/* VarRealUnit__SetUnitName @ 0x8018C8E0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcpy(char *, const char *);
int strlen(const char *);
M2C_UNK Mem__NewArray(s32);
extern M2C_UNK lbl_8033E6CC __attribute__((section(".data")));

void VarRealUnit__SetUnitName(void *arg0, s8 *arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 w;
    u8 b;

    if ((arg1 != NULL) && ((s32) *arg1 != 0)) {
        temp_r3 = Mem__NewArray(strlen(arg1) + 1);
        M2C_FIELD(arg0, s32 *, 0x44) = temp_r3;
        strcpy((s8 *) temp_r3, arg1);
        return;
    }
    temp_r3_2 = Mem__NewArray(5);
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r3_2;
    w = M2C_FIELD(&lbl_8033E6CC, s32 *, 0);
    b = M2C_FIELD(&lbl_8033E6CC, u8 *, 4);
    M2C_FIELD(temp_r3_2, s32 *, 0) = w;
    M2C_FIELD(temp_r3_2, u8 *, 4) = b;
}

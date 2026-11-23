/* LevelAlo__Construct @ 0x80285204 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void LevelAloEffect__Init(void *);
extern M2C_UNK lbl_80350338 __attribute__((section(".data")));
void *LevelAlo__Construct(void *arg0) {
    u32 var_r29;
    void *temp_r9;
    void *var_r31;
    var_r31 = arg0 + 0x1C;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80350338;
    var_r29 = 9;
    do {
        LevelAloEffect__Init(var_r31);
        var_r31 += 4;
    } while (var_r29-- != 0);
    temp_r9 = arg0 + 0x44;
    M2C_FIELD(temp_r9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r9, s32 *, 8) = 1;
    M2C_FIELD(temp_r9, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

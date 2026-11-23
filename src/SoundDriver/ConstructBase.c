/* SoundDriver__ConstructBase @ 0x8019321C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
char * Mem__NewArray(s32);
extern M2C_UNK lbl_803405F0 __attribute__((section(".data")));

void *SoundDriver__ConstructBase(void *arg0) {
    u8 *var_r9;
    s32 temp_r30;
    s32 var_ctr;
    s32 c40 = 0x28;
    s32 c8 = 8;
    s32 z = 0;

    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &lbl_803405F0;
    temp_r30 = Mem__New(0x18);
    M2C_FIELD(temp_r30, s8 **, 0) = Mem__NewArray(0xA0);
    M2C_FIELD(temp_r30, s32 *, 8) = c40;
    M2C_FIELD(temp_r30, s32 *, 0xC) = c8;
    M2C_FIELD(temp_r30, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    var_r9 = arg0 + 0x1C;
    M2C_FIELD(arg0, s32 *, 0xC) = z;
    M2C_FIELD(temp_r30, s32 *, 4) = z;
    M2C_FIELD(temp_r30, s32 *, 0x10) = z;
    M2C_FIELD(arg0, s32 *, 0) = temp_r30;
    M2C_FIELD(arg0, s32 *, 4) = z;
    var_ctr = 4;
    do {
        *(s32 *)var_r9 = 0;
        var_r9 -= 4;
        var_ctr -= 1;
    } while (var_ctr);
    return arg0;
}

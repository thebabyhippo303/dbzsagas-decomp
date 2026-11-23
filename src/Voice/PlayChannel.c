/* Voice__PlayChannel @ 0x8019CF00 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Voice__StopForRestart(void *);
s32 Voice__IsLooping(void *);
M2C_UNK fn_80196FC8(s32);
M2C_UNK fn_80196B78(s32, s32);
s32 Voice__PlayChannel(void *arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r4;
    s32 temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x20);
    if ((temp_r9 == 3) || ((s32) M2C_FIELD(arg0, s32 *, 8) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 0;
    }
    if (temp_r9 == 1) {
        Voice__StopForRestart(arg0);
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x54);
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x64)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x60));
    temp_r4 = arg1 + fn_80196FC8(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r4;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 8);
    fn_80196B78(temp_r30, Voice__IsLooping(arg0));
    return 1;
}

/* SfxEnvPlayer__AddEmitter @ 0x8019AB38 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
M2C_UNK fn_801B25FC(s32, s32);
M2C_UNK fn_8025EC14(s32, s32, s32, f32);
M2C_UNK EnvSoundSource__Initialize(s32, s32, s32, s32, s32, s32, f64, f32, f32, f32, f32);
M2C_UNK fn_8025EF80(s32, s32);
extern f32 lbl_8033FB48 __attribute__((section(".data")));
extern f32 lbl_8033FB4C __attribute__((section(".data")));
extern s32 lbl_803DCC50;

s32 SfxEnvPlayer__AddEmitter(void *arg0, void *arg1) {
    union { M2C_UNK value; unsigned char bytes[16]; } sp8;
    s32 list;
    f32 temp_f1;
    f64 var_f31;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r9;
    s32 var_r4;

    if (M2C_FIELD(arg0, s32 *, 0x17C) == 0) {
        temp_r30 = Mem__New(0x40);
        fn_801B25FC((s32) ((M2C_UNK *)sp8.bytes), lbl_803DCC50);
        temp_r3_2 = fn_8025EC14(temp_r30, (s32) ((M2C_UNK *)sp8.bytes), 0x30, lbl_8033FB48);
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r3_2;
        if (temp_r3_2 == 0) {
            return 0;
        }
    }
    var_f31 = M2C_FIELD(arg1, f32 *, 0x30);
    if (__builtin_fabsf(var_f31) < lbl_8033FB4C) {
        var_f31 = M2C_FIELD(arg0, f32 *, 0x48);
    }
    temp_r3_3 = Mem__New(0x60);
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x180);
    M2C_FIELD(arg0, s32 *, 0x180) = temp_r9 + 1;
    {
        s32 i38 = M2C_FIELD(arg1, s32 *, 0x38);
        f32 f3c = M2C_FIELD(arg1, f32 *, 0x3C);
        f32 f40 = M2C_FIELD(arg1, f32 *, 0x40);
        f32 f44 = M2C_FIELD(arg1, f32 *, 0x44);
        f32 f48 = M2C_FIELD(arg1, f32 *, 0x48);
        s32 i34 = M2C_FIELD(arg1, s32 *, 0x34);
        temp_r3 = EnvSoundSource__Initialize(temp_r3_3, temp_r9, (s32) ((char *)arg1 + 4), (s32) ((char *)arg1 + 0x24), i34, i38, var_f31, f3c, f40, f44, f48);
    }
    list = M2C_FIELD(arg0, s32 *, 0x17C);
    var_r4 = 0;
    if (temp_r3 != 0) {
        var_r4 = temp_r3 + 0x2C;
    }
    fn_8025EF80(list, var_r4);
    return temp_r3;
}

/* GcnController__Construct @ 0x801D8414 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 GcnController__SetAxisMapping(char *, s32, s32, f32, f32, f32);
M2C_UNK fn_801D4C5C(s32);
extern f32 lbl_80342F24 __attribute__((section(".data")));
extern f32 lbl_80342F28 __attribute__((section(".data")));
extern f32 lbl_80342F2C __attribute__((section(".data")));
extern M2C_UNK lbl_80343240 __attribute__((section(".data")));

s32 GcnController__Construct(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;
    s32 *tbl;
    s32 var_r30;

    fn_801D4C5C(arg0);
    var_r30 = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &lbl_80343240;
    do {
        temp_r4 = var_r30;
        var_r30 += 1;
        GcnController__SetAxisMapping((s8 *) arg0, temp_r4, 0, lbl_80342F24, lbl_80342F28, lbl_80342F2C);
    } while (var_r30 <= 0x10);
    M2C_FIELD(arg0, s32 *, 0x45FC) = arg1;
    M2C_FIELD(arg0, void **, 0x4600) = arg2;
    M2C_FIELD(arg0, s32 *, 0x4604) = 1;
    M2C_FIELD(arg0, s32 *, 0x4608) = 0;
    M2C_FIELD(arg0, s32 *, 0x460C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4610) = 0;
    M2C_FIELD(arg0, s32 *, 0x4614) = 0;
    tbl = (s32 *)((char *)arg2 + 0x68);
    *(s32 *)((char *)tbl + (arg1 << 2)) = 0;
    M2C_FIELD(arg2, s32 *, 0x78) = 1;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 1;
    return arg0;
}

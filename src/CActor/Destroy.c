/* CActor__Destroy @ 0x801DC1D0 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BoneChainSet__Destroy(void *, s32);
void Mem__Delete(void *);
void fn_80251708(void *, int, int *, void *);
void memFree(void *);
M2C_UNK fn_8023F604(s32);
M2C_UNK fn_80234508(s32, s32);
M2C_UNK fn_801DC6CC(s32);
M2C_UNK fn_801DF5C0(s32);
extern M2C_UNK lbl_80344D20 __attribute__((section(".data")));
extern M2C_UNK lbl_80344DF0 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern s32 lbl_803DCCAC;

void CActor__Destroy(void *arg0, s32 arg1) {
    char *arr;
    s32 temp_r4;
    s32 var_r29;
    s32 var_r31;
    void *temp_r11;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344D20;
    if (temp_r3 != NULL) {
        BoneChainSet__Destroy(temp_r3, 3);
    }
    var_r31 = 0;
    var_r29 = 0;
    fn_8023F604(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0x174));
    do {
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x84);
        arr = (char *)temp_r3_2 + 0xF0;
        if (*(s32 *)(arr + var_r29) != 0) {
            fn_80234508((s32) temp_r3_2, var_r31);
        }
        var_r31 += 1;
        var_r29 += 4;
    } while (var_r31 <= 3);
    fn_801DC6CC((s32) arg0);
    fn_801DF5C0((s32) arg0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x110);
    if ((temp_r4 != 0) && ((s32) lbl_803DCCAC != 0)) {
        fn_80251708(&lbl_803B1DDC, temp_r4 | lbl_803DCCAC, NULL, arg0);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xAC);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0xC);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    memFree(M2C_FIELD(arg0, void **, 0x84));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344DF0;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}

/* AvatarMovement__SetPickupObjectVisibilityScriptCallback @ 0x800B7558 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Avatar__PopScriptInt(void *, void *);
void fn_80251510(void *, int, void *, void *, int);
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void AvatarMovement__SetPickupObjectVisibilityScriptCallback(void **arg0, void *arg1) {
    void *sp8;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if (Avatar__PopScriptInt(*arg0, arg1) != 0) {
        temp_r10 = M2C_FIELD(*arg0, void **, 0x1BB0);
        temp_r9 = M2C_FIELD(temp_r10, void **, 0x34);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
        M2C_FIELD(*arg0, void **, 0x1BB0) = NULL;
        return;
    }
    temp_r9_2 = *arg0;
    sp8 = M2C_FIELD(temp_r9_2, void **, 0x1BB0);
    fn_80251510(&lbl_803B1DDC, 0x20006, &sp8, temp_r9_2, 0);
    temp_r10_2 = M2C_FIELD(*arg0, void **, 0x1BB0);
    temp_r9_3 = M2C_FIELD(temp_r10_2, void **, 0x34);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r10_2 + M2C_FIELD(temp_r9_3, s16 *, 0x60), 1);
}

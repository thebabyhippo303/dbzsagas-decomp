/* AvatarMovement__SetPositionAndHeading @ 0x800B8A68 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
void Avatar__SetAnimScriptVarFloat(void *, s32, s32, f32);
float cosf(float);
float sinf(float);
extern M2C_UNK lbl_8031F450 __attribute__((section(".data")));
extern M2C_UNK lbl_80320060 __attribute__((section(".data")));
extern M2C_UNK lbl_80320AEC __attribute__((section(".data")));
extern M2C_UNK lbl_80320AF8 __attribute__((section(".data")));
extern M2C_UNK lbl_80320B08 __attribute__((section(".data")));
extern f32 lbl_80321554 __attribute__((section(".data")));
extern f32 lbl_80321558 __attribute__((section(".data")));
extern f32 lbl_8032155C __attribute__((section(".data")));
extern f32 lbl_80321560 __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;

void AvatarMovement__SetPositionAndHeading(void **arg0, void *arg1, f32 farg0) {
    union { M2C_UNK value; unsigned char bytes[72]; } sp8;
    s16 ld_8;
    f32 sp14;
    union { f32 value; unsigned char bytes[8]; } sp50;
    f32 temp_f0;
    f32 temp_f1;
    register f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 var_f1;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    var_f1 = farg0;
    if ((var_f1 > lbl_80321554) || !(var_f1 >= lbl_80321558)) {
        var_f1 = lbl_8032155C;
    }
    temp_f0 = -lbl_803DE500;
    if (!(var_f1 >= temp_f0)) {
        do {
            var_f1 += lbl_803DE504;
        } while (var_f1 < temp_f0);
    }
    if (!(var_f1 <= lbl_803DE500)) {
        while (var_f1 > lbl_803DE500) {
            var_f1 -= lbl_803DE504;
        }
    }
    M2C_FIELD(*arg0, f32 *, 0x75C) = var_f1;
    temp_r29 = *arg0;
    temp_f31 = M2C_FIELD(temp_r29, f32 *, 0x75C);
    temp_r30 = 0x44 + temp_r29;
    temp_f30 = sinf(temp_f31);
    temp_f1 = cosf(temp_f31);
    M2C_FIELD(temp_r29, f32 *, 0x44) = temp_f1;
    temp_f31_2 = lbl_8032155C;
    M2C_FIELD(temp_r30, f32 *, 8) = (f32) -temp_f30;
    M2C_FIELD(temp_r30, f32 *, 4) = temp_f31_2;
    M2C_FIELD(temp_r30, f32 *, 0xC) = temp_f31_2;
    M2C_FIELD(temp_r30, f32 *, 0x20) = temp_f1;
    M2C_FIELD(temp_r30, f32 *, 0x10) = (f32) lbl_80321560;
    M2C_FIELD(temp_r30, f32 *, 0x18) = temp_f30;
    M2C_FIELD(temp_r30, f32 *, 0x14) = temp_f31_2;
    M2C_FIELD(temp_r30, f32 *, 0x1C) = temp_f31_2;
    temp_r9 = *arg0;
    temp_r11 = temp_r9 + 0x38;
    M2C_FIELD(temp_r9, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r11, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(temp_r11, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_r9_2 = *arg0;
    temp_r9_3 = temp_r9_2 + 0x68;
    M2C_FIELD(temp_r9_2, f32 *, 0x68) = temp_f31_2;
    M2C_FIELD(temp_r9_3, f32 *, 4) = temp_f31_2;
    M2C_FIELD(temp_r9_3, f32 *, 8) = temp_f31_2;
    temp_r11_2 = *arg0;
    temp_r11_3 = temp_r11_2 + 0x74;
    M2C_FIELD(temp_r11_2, f32 *, 0x74) = temp_f31_2;
    M2C_FIELD(temp_r11_3, f32 *, 8) = temp_f31_2;
    M2C_FIELD(temp_r11_3, f32 *, 4) = temp_f31_2;
    M2C_FIELD(((M2C_UNK *)sp8.bytes), s32 *, 4) = 0;
    temp_r10 = M2C_FIELD(*arg0, void **, 0x7BC);
    temp_r11_4 = M2C_FIELD(temp_r10, void **, 4);
    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *), 0x14)(temp_r10 + M2C_FIELD(temp_r11_4, s16 *, 0x10));
    if ((s32) sp8.bytes[0x22] != 0xFF) {
        M2C_FIELD(*arg0, f32 *, 0x3C) = sp14;
        temp_r10_2 = M2C_FIELD(*arg0, void **, 0x7C0);
        sp50.value = sp14;
        temp_r9_4 = M2C_FIELD(temp_r10_2, void **, 4);
        ld_8 = M2C_FIELD(temp_r9_4, s16 *, 8);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0xC)(ld_8 + temp_r10_2);
        sp14 = sp50.value;
    }
    Avatar__SetAnimScriptVarFloat(*arg0, (s32) &lbl_80320AEC, 0, temp_f31_2);
    Avatar__SetAnimScriptVarIntImpl(*arg0, (s32) &lbl_80320060, 1, 0);
    Avatar__SetAnimScriptVarFloat(*arg0, (s32) &lbl_8031F450, 0, temp_f31_2);
    Avatar__SetAnimScriptVarFloat(*arg0, (s32) &lbl_80320AF8, 0, temp_f31_2);
    Avatar__SetAnimScriptVarIntImpl(*arg0, (s32) &lbl_80320B08, 1, 0);
}


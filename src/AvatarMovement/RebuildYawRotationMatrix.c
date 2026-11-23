/* AvatarMovement__RebuildYawRotationMatrix @ 0x800B7DBC (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float cosf(float);
float sinf(float);
extern f32 lbl_803213D0 __attribute__((section(".data")));
extern f32 lbl_803213D4 __attribute__((section(".data")));

void AvatarMovement__RebuildYawRotationMatrix(void **arg0) {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r29;
    void *temp_r30;

    temp_r29 = *arg0;
    temp_f31 = M2C_FIELD(temp_r29, f32 *, 0x75C);
    temp_r30 = temp_r29 + 0x44;
    temp_f30 = sinf(temp_f31);
    temp_f1 = cosf(temp_f31);
    M2C_FIELD(temp_r29, f32 *, 0x44) = temp_f1;
    M2C_FIELD(temp_r30, f32 *, 8) = (f32) -temp_f30;
    M2C_FIELD(temp_r30, f32 *, 4) = (f32) lbl_803213D0;
    M2C_FIELD(temp_r30, f32 *, 0xC) = (f32) lbl_803213D0;
    M2C_FIELD(temp_r30, f32 *, 0x20) = temp_f1;
    M2C_FIELD(temp_r30, f32 *, 0x10) = (f32) lbl_803213D4;
    M2C_FIELD(temp_r30, f32 *, 0x18) = temp_f30;
    M2C_FIELD(temp_r30, f32 *, 0x1C) = (f32) lbl_803213D0;
    M2C_FIELD(temp_r30, f32 *, 0x14) = (f32) lbl_803213D0;
}

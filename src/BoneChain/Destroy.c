/* BoneChain__Destroy @ 0x801DBAD0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void DynamicBoneChain__Destroy(void *, s32);
extern M2C_UNK lbl_80344BA0 __attribute__((section(".data")));

void BoneChain__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344BA0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x17C);
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
        }
    }
    DynamicBoneChain__Destroy(arg0, arg1);
}

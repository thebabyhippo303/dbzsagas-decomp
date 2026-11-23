/* Avatar__JumpLaunchImpl @ 0x800B0D20 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800B0B9C(void *, f32);                   /* extern */

void Script__JumpLaunchImpl(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x68);
    fn_800B0B9C(arg0, M2C_FIELD(temp_r9, f32 *, 0x20));
}

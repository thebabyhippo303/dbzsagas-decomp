/* Avatar__SelectActionModeAndTarget @ 0x80099044 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarControls__SelectActionMode(char *, s32);
int AvatarControls__SetActionTarget(void *, void *);
void Avatar__SelectActionModeAndTarget(void *arg0, void *arg1) {
    s8 *temp_r30;

    temp_r30 = M2C_FIELD(arg0, s8 **, 0x7F8);
    AvatarControls__SelectActionMode(temp_r30, 1);
    AvatarControls__SetActionTarget(temp_r30, arg1);
}

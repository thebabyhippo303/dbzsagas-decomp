/* AvatarCurve__ConsumeSpecialMoveAndStartAnimation @ 0x800A09B0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarCurve__ConsumeSpecialMoveAndClearCallback(void *);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void *AvatarCurve__ConsumeSpecialMoveAndStartAnimation(void *arg0) {
    void *temp_r29;

    temp_r29 = (char *)arg0 + 8;
    AvatarCurve__ConsumeSpecialMoveAndClearCallback(temp_r29);
    Avatar__StartAnimationImpl(*(void **)arg0, 0xD00U, 1, 1, 0, 1);
    return temp_r29;
}

/* AvatarControls__HandleActionTargetReleaseEvent @ 0x8009EED4 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, int);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
M2C_UNK AvatarControls__ReleaseActionTargetAndClearHologram(void *); /* extern */

void AvatarControls__HandleActionTargetReleaseEvent(void *arg0, s32 arg1) {
    void *temp_r30;

    if ((arg1 == 0x1002D) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0x2A4) != 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) == 0) {
            Avatar__StartAnimationImpl(M2C_FIELD(arg0, void **, 0), 0x302U, 1, 1, 0, 1);
            temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xB8C);
            AI__SetState(temp_r30, 0);
            M2C_FIELD(temp_r30, s32 *, 0x78) = 0x81;
            M2C_FIELD(temp_r30, s32 *, 0x74) = 0x81;
        }
        AvatarControls__ReleaseActionTargetAndClearHologram(arg0);
    }
}

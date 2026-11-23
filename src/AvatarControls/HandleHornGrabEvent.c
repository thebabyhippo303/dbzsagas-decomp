/* AvatarControls__HandleHornGrabEvent @ 0x8009FCBC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AvatarControls__ReleaseHornGrabbedAvatar(); /* extern */

void AvatarControls__HandleHornGrabEvent(void *arg0, s32 arg1) {
    if ((arg1 == 0x1002D) && ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0x2A4) != 0)) {
        AvatarControls__ReleaseHornGrabbedAvatar();
    }
}

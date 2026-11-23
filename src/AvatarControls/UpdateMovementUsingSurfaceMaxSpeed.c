/* AvatarControls__UpdateMovementUsingSurfaceMaxSpeed @ 0x800A4BCC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float AvatarMovement__GetSurfaceMaxSpeed(void **, int);
M2C_UNK AvatarControls__UpdateMovementFromAnalogInput(void *, f32, f32, f32); /* extern */

void AvatarControls__UpdateMovementUsingSurfaceMaxSpeed(void *arg0, f32 farg0, f32 farg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x7C);
    AvatarControls__UpdateMovementFromAnalogInput(arg0, farg0, farg1, AvatarMovement__GetSurfaceMaxSpeed(temp_r3 + 0x68, M2C_FIELD(temp_r3, s32 *, 0x594)));
}


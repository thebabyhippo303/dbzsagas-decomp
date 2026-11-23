/* AvatarMovement__ClearVelocity @ 0x800A7AC8 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80320B88 __attribute__((section(".data")));

void AvatarMovement__ClearVelocity(void **arg0) {
    void *temp_r11;
    volatile f32 *velocity;
    f32 zero_velocity;

    temp_r11 = *arg0;
    velocity = (volatile f32 *) ((char *) temp_r11 + 0x74);
    zero_velocity = lbl_80320B88;
    velocity[0] = zero_velocity;
    velocity[2] = zero_velocity;
    velocity[1] = zero_velocity;
}

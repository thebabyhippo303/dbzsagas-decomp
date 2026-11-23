/* AvatarMovement__InitializeControlCallbackState @ 0x800B7014 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetControlCallbackState(void *, void *);
void AvatarMovement__InitializeControlCallbackState(void *arg0) {
    Avatar__SetControlCallbackState(M2C_FIELD(arg0, void **, 0), arg0 + 0xFC);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x75C);
    M2C_FIELD(arg0, s16 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
}

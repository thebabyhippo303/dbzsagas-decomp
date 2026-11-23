/* AvatarControls__ConstructHornGrabMode @ 0x8009F218 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AvatarControls__ConstructCallbackState();   /* extern */
extern M2C_UNK lbl_80334CB8 __attribute__((section(".data")));

void *AvatarControls__ConstructHornGrabMode(void *arg0) {
    AvatarControls__ConstructCallbackState();
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80334CB8;
    return arg0;
}

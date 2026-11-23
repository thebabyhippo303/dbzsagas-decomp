/* AvatarMovement__Construct @ 0x800B6AD0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AvatarMovement__InitializeComponents(void *, void *, s32);
extern M2C_UNK lbl_80334068 __attribute__((section(".data")));

void *AvatarMovement__Construct(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80334068;
    M2C_FIELD(arg0, void **, 0) = arg1;
    AvatarMovement__InitializeComponents(arg0 + 8, arg1, (s32) arg0);
    return arg0;
}


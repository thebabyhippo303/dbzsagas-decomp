/* AvatarControls__Construct @ 0x800A2240 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * AvatarControls__ConstructExplosionGrapple(void *, s32, s32);
void * CThrownMode__Construct(void *, s32, s32);
void * AvatarControls__ConstructHornGrabMode(void *, s32, s32);
void * AvatarControls__ConstructTargetRelativePositionMode(void *, s32, s32);
extern M2C_UNK lbl_80334BF8 __attribute__((section(".data")));
extern M2C_UNK lbl_80334C78 __attribute__((section(".data")));
extern M2C_UNK lbl_80334C98 __attribute__((section(".data")));
extern M2C_UNK lbl_80335408 __attribute__((section(".data")));

void *AvatarControls__Construct(void *arg0, s32 arg1) {
    void *temp_r11;
    char *p_270;
    void *temp_r10;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80334BF8;
    AvatarControls__ConstructExplosionGrapple(0x10 + arg0, arg1, (s32) arg0);
    CThrownMode__Construct(arg0 + 0xB4, arg1, (s32) arg0);
    AvatarControls__ConstructHornGrabMode(arg0 + 0x140, arg1, (s32) arg0);
    AvatarControls__ConstructTargetRelativePositionMode(arg0 + 0x1E4, arg1, (s32) arg0);
    temp_r10 = 0x274 + arg0;
    M2C_FIELD(temp_r10, M2C_UNK **, 4) = &lbl_80335408;
    p_270 = (char *)arg0 + 0x270;
    M2C_FIELD(p_270, s32 *, 0x4) = 0;
    M2C_FIELD(temp_r10, M2C_UNK **, 4) = &lbl_80334C98;
    temp_r11 = arg0 + 0x28C;
    M2C_FIELD(temp_r10, s32 *, 8) = 0;
    M2C_FIELD(temp_r10, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r10, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r11, M2C_UNK **, 4) = &lbl_80335408;
    M2C_FIELD(temp_r11, s32 *, 0xC) = 0;
    M2C_FIELD(p_270, s32 *, 0x1c) = 0;
    M2C_FIELD(temp_r11, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r11, M2C_UNK **, 4) = &lbl_80334C78;
    M2C_FIELD(temp_r11, s32 *, 8) = 0;
    M2C_FIELD(p_270, s32 *, 0x34) = 0;
    return arg0;
}

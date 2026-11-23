/* Camera__SetPoseAndEnableControls @ 0x800BEEEC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__ActivateControls(void *, s32);
M2C_UNK Camera__RefreshFollowPositionFromActor(s32);
extern void *lbl_803DC3C0;

void Camera__SetPoseAndEnableControls(char *arg0, void *arg1, void *arg2) {
    void *rot = (char *)arg0 + 0xC;
    s32 pos_x = M2C_FIELD(arg1, s32 *, 0);
    s32 pos_y = M2C_FIELD(arg1, s32 *, 4);
    s32 pos_z = M2C_FIELD(arg1, s32 *, 8);

    M2C_FIELD(arg0, s32 *, 0) = pos_x;
    M2C_FIELD(arg0, s32 *, 4) = pos_y;
    M2C_FIELD(arg0, s32 *, 8) = pos_z;
    {
        s32 rot_x = M2C_FIELD(arg2, s32 *, 0);
        s32 rot_y = M2C_FIELD(arg2, s32 *, 4);
        s32 rot_z = M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = rot_x;
    M2C_FIELD(rot, s32 *, 4) = rot_y;
    M2C_FIELD(rot, s32 *, 8) = rot_z;
    }
    Camera__RefreshFollowPositionFromActor((s32) arg0);
    SimLoop__ActivateControls(lbl_803DC3C0, 1);
}

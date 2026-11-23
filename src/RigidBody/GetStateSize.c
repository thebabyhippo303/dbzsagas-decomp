/* RigidBody__GetStateSize @ 0x801A6004 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int RigidBody__GetSize(void);
s32 fn_801F353C(s32);                               /* extern */

s32 RigidBody__GetStateSize(s32 arg0) {
    s32 temp_r29;

    temp_r29 = RigidBody__GetSize();
    return temp_r29 + fn_801F353C(arg0);
}

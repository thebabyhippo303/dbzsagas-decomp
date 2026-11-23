/* Weapon__GetAttachmentBonePosition @ 0x800DEE00 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801DD1FC(float *, void *, int);
s8 Weapon__ResolveAttachmentBoneId(void **, void *, s32); /* extern */
M2C_UNK fn_801DD1B4(f32 *, void *, s8);             /* extern */

void *Weapon__GetAttachmentBonePosition(void *arg0, void **arg1, void *arg2, s32 arg3, s8 *arg4) {
    f32 sp18;
    f32 sp8;
    s8 temp_r3;

    temp_r3 = Weapon__ResolveAttachmentBoneId(arg1, arg2, arg3);
    if (arg4 != NULL) {
        *arg4 = temp_r3;
    }
    if (M2C_FIELD(*arg1, s32 *, 0x44) & 4) {
        fn_801DD1FC(&sp18, arg2, (s32) temp_r3);
    } else {
        fn_801DD1B4(&sp18, arg2, temp_r3);
    }
    sp8 = sp18;
    M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(&sp18, s32 *, 4);
    M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(&sp18, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&sp8, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 0) = sp18;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(&sp8, s32 *, 8);
    return arg0;
}

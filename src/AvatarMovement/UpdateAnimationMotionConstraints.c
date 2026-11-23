/* AvatarMovement__UpdateAnimationMotionConstraints @ 0x800A6E74 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Avatar__GetAnimScriptVarInt(void *, void *, void *);
f32 *CActor__GetBoneModelOffsetPosition(void *, s32, s32);
f32 AvatarMovement__GetCollisionBoundsVerticalSpan(s32);
extern M2C_UNK lbl_8031F3F4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031F408 __attribute__((section(".data")));
extern f32 lbl_80320B48 __attribute__((section(".data")));

void AvatarMovement__UpdateAnimationMotionConstraints(void *arg0) {
    f32 temp_f1;
    s32 ld_58C;
    f32 sp8[3];
    f32 *pv;
    f32 var_f31;
    s32 temp_r3;

    temp_r3 = Avatar__GetAnimScriptVarInt(M2C_FIELD(arg0, void **, 0), &lbl_8031F408, NULL);
    M2C_FIELD(arg0, s32 *, 0x584) = (s32) (temp_r3 == 0);
    temp_r3 = Avatar__GetAnimScriptVarInt(M2C_FIELD(arg0, void **, 0), &lbl_8031F3F4, NULL);
    var_f31 = lbl_80320B48;
    ld_58C = M2C_FIELD(arg0, s32 *, 0x58C);
    M2C_FIELD(arg0, s32 *, 0x620) = (s32) ld_58C;
    M2C_FIELD(arg0, s32 *, 0x588) = (s32) (temp_r3 == 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x638) != 0) {
        pv = sp8;
        CActor__GetBoneModelOffsetPosition(pv, (s32) M2C_FIELD(arg0, void **, 0), (s32) M2C_FIELD(arg0, u8 *, 0x644));
        var_f31 = pv[1];
        CActor__GetBoneModelOffsetPosition(pv, (s32) M2C_FIELD(arg0, void **, 0), (s32) M2C_FIELD(arg0, u8 *, 0x645));
        temp_f1 = pv[1];
        if (!(temp_f1 >= var_f31)) {
            var_f31 = temp_f1;
        }
        temp_f1 = AvatarMovement__GetCollisionBoundsVerticalSpan((s32) M2C_FIELD(arg0, void **, 0));
        if (!(temp_f1 >= var_f31)) {
            var_f31 = temp_f1;
        }
        if (!(var_f31 >= lbl_80320B48)) {
            var_f31 = lbl_80320B48;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x640) = (f32) (var_f31 - M2C_FIELD(arg0, f32 *, 0x63C));
    M2C_FIELD(arg0, f32 *, 0x63C) = var_f31;
}

/* ShatterPieces__Update @ 0x800F7ED8 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__MarkForDeath(void *, f32);
s32 Emitter__Kill(u32);
M2C_UNK fn_800F78DC(void);
M2C_UNK RigidBody__UpdateWorldTransform(s32);
extern f32 lbl_80324394 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void ShatterPieces__Update(void *arg0) {
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f31;
    s32 temp_r30;
    s32 temp_r3;
    f32 temp_f0;
    void *temp_r9;

    fn_800F78DC();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x364) == 0) {
        temp_f13 = M2C_FIELD(arg0, f32 *, 0x35C);
        if (!(temp_f13 < lbl_80324394)) {
            M2C_FIELD(arg0, f32 *, 0x35C) = (f32) (temp_f13 - lbl_803A35BC);
        }
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r30 != 0) {
        temp_f13_2 = M2C_FIELD(arg0, f32 *, 0x35C);
        temp_f31 = lbl_80324394;
        if (!(temp_f13_2 >= temp_f31)) {
            M2C_FIELD(arg0, f32 *, 0x35C) = temp_f31;
            temp_r9 = M2C_FIELD(arg0, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 1);
            Actor__MarkForDeath(arg0, temp_f31);
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), f32 *, 0x8C) = (f32) (temp_f13_2 / M2C_FIELD(arg0, f32 *, 0x358));
        }
    } else if (!(M2C_FIELD(arg0, f32 *, 0x35C) >= lbl_80324394)) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x358);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x370);
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        M2C_FIELD(arg0, f32 *, 0x35C) = temp_f0;
        if (temp_r3 != 0) {
            Emitter__Kill((u32) temp_r3);
            M2C_FIELD(arg0, s32 *, 0x370) = temp_r30;
        }
    }
    RigidBody__UpdateWorldTransform((s32) arg0);
}

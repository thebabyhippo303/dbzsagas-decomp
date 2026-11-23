/* AvatarControls__ProcessRecoveryInput @ 0x800A3D60 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 Avatar__StartAnimationImpl(char *, u16, s32, s32, s32, s32);
extern f32 lbl_80320258 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AvatarControls__ProcessRecoveryInput(void *arg0) {
    s8 *avatar1;
    s8 *avatar2;
    void *unk7c;
    s32 v58c;
    s16 input;
    s32 flag;
    char pad[64];

    avatar1 = M2C_FIELD(arg0, s8 **, 0);
    flag = 0;
    if (!(M2C_FIELD(avatar1, f32 *, 0x288) > lbl_80320258)) {
        if (M2C_FIELD(avatar1, s32 *, 0x90) != 0) {
            flag = 1;
        }
    }
    if (flag == 0) {
        unk7c = M2C_FIELD(arg0, void **, 0x7C);
        if (!(lbl_803A35C0 > (M2C_FIELD(arg0, f32 *, 0x178) + M2C_FIELD(unk7c, f32 *, 0x110)))) {
            avatar2 = M2C_FIELD(arg0, s8 **, 0);
            v58c = M2C_FIELD(unk7c, s32 *, 0x58C);
            input = M2C_FIELD(M2C_FIELD(M2C_FIELD(avatar2, void **, 0x84), void **, 0xF0), s16 *, 0xA);
            if (input != 0x200 || v58c == 0) {
                Avatar__StartAnimationImpl((char *)avatar2, 0x200U, v58c ^ 1, 0, 0, 1);
                M2C_FIELD(arg0, s32 *, 0x17C) = -1;
            }
        }
    }
}

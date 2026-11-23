/* AI__UpdatePelvisWeaponSequence @ 0x8006C028 (size: 0x16C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__ComputeTargetingInfo(void *, void *);
void AI__ResolveTargetPose(void *, void *);
void AI__SetAttackSuppressed(void *, int);
void AI__SetState(void *, int);
void Avatar__SelectWeaponWithBoneNameImpl(void *, int, const char *);
void Avatar__SetWeaponScriptFlag(void *, int);
void Avatar__ShowWeaponImpl(void *, int);
s32 WeaponInventory__AddById(void *, int);
extern s8 lbl_8031E188 __attribute__((section(".data")));
extern f32 lbl_8031ECE8 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
void AI__UpdatePelvisWeaponSequence(void *arg0) {
    char sp8[32]; s32 temp_r30; s32 temp_r9;
    AI__ResolveTargetPose(&sp8, arg0);
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r9) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x530) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1); AI__SetAttackSuppressed(arg0, 1); return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2F;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7) {
            WeaponInventory__AddById(M2C_FIELD(arg0, s32 *, 0x390) + 0x15F0, 0x58);
            Avatar__SelectWeaponWithBoneNameImpl(M2C_FIELD(arg0, s32 *, 0x390) + 0x15A0, 0x58, &lbl_8031E188);
            Avatar__ShowWeaponImpl(M2C_FIELD(arg0, s32 *, 0x390) + 0x15A0, 1);
            Avatar__SetWeaponScriptFlag(M2C_FIELD(arg0, s32 *, 0x390) + 0x15A0, 1);
        }
        AI__SetState(arg0, 2); M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0; return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECE8) != 0) {
            temp_r30 = M2C_FIELD(arg0, s32 *, 0x564);
            if (temp_r30 == 0) {
                AI__SetAttackSuppressed(arg0, 0);
                if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7)
                    Avatar__SetWeaponScriptFlag(M2C_FIELD(arg0, s32 *, 0x390) + 0x15A0, 0);
                M2C_FIELD(arg0, s32 *, 0x380) = 0x2B; AI__SetState(arg0, 3);
                M2C_FIELD(arg0, s32 *, 0x4BC) = temp_r30;
                M2C_FIELD(arg0, s32 *, 0x4B4) = 1;
                M2C_FIELD(arg0, s32 *, 0x504) = temp_r30;
            }
        }
        return;
    }
}
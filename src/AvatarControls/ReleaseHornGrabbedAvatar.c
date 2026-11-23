/* AvatarControls__ReleaseHornGrabbedAvatar @ 0x8009FCFC (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetAnimScriptVarIntImpl(void *, char *, s32, s32);
extern char lbl_8031F408[] __attribute__((section(".data")));
s32 Avatar__StartAnimationImpl(char *, u16, s32, s32, s32, s32);
s32 Protagonist__AttachTo(void *, s32);
void fn_80251510(void *, int, void *, void *, int);
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void AvatarControls__ReleaseHornGrabbedAvatar(void *arg0) {
    s32 sp8;
    s8 *temp_r9;
    s8 *temp_r9_2;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r8;
    void *var_r7;
    void *thisp;
    M2C_UNK (*fnp)(void *, s32 *);

    temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4);
    if (temp_r9 != NULL) {
        temp_r11 = M2C_FIELD(temp_r9, void **, 0x84);
        M2C_FIELD(temp_r11, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x104) & 0xFFFFEFFF);
        temp_r10 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), void **, 0x84);
        M2C_FIELD(temp_r10, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r10, s32 *, 0x104) & 0xFFFFBFFF);
        temp_r10_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), void **, 0x84);
        M2C_FIELD(temp_r10_2, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r10_2, s32 *, 0x104) & 0xFFFF7FFF);
        Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), lbl_8031F408, 1, 0);
        var_r7 = NULL;
        temp_r9_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4);
        if (temp_r9_2 != NULL) {
            var_r7 = temp_r9_2 + 0x19C;
        }
        fn_80251510(&lbl_803B1DDC, 0x20014, NULL, arg0, (s32) var_r7);
        Avatar__StartAnimationImpl(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), 0x101U, 1, 0, 0, 1);
        Avatar__StartAnimationImpl(M2C_FIELD(arg0, s8 **, 0), 0x101U, 1, 0, 0, 1);
        temp_r8 = M2C_FIELD(M2C_FIELD(arg0, s8 **, 0), void **, 0x7D8);
        temp_r10_3 = M2C_FIELD(temp_r8, void **, 4);
        fnp = M2C_FIELD(temp_r10_3, M2C_UNK (**)(void *, s32 *), 0xC);
        thisp = temp_r8 + M2C_FIELD(temp_r10_3, s16 *, 8);
        sp8 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), s32 *, 0x9C);
        fnp(thisp, &sp8);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4), s32 *, 0x66C) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s8 **, 0x2A4) = NULL;
        Protagonist__AttachTo(M2C_FIELD(arg0, s8 **, 0), 0);
        M2C_FIELD(M2C_FIELD(arg0, s8 **, 0), s32 *, 0x28) = 0;
    }
}

/* AvatarMovement__HandleWallImpact @ 0x800ADE20 (size: 0x354, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
f32 atan2f(f32, f32);
void Avatar__SetAnimScriptVarFloat(void *, s32, s32, f32);
f32 Avatar__SetAirSpeedTimeConstantImpl(void *, f32);
f32 AvatarMovement__MarkWallImpactPending(void *);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
float cosf(float);
f32 fn_80251510(void *, int, void *, void *, int);
int fn_8025C17C(void *, void *, void *);
float sinf(float);
void * sprintf(s8 *, void *, s8 *, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern M2C_UNK lbl_8031F4CC __attribute__((section(".data")));
extern M2C_UNK lbl_80320DAC __attribute__((section(".data")));
extern M2C_UNK lbl_80320DBC __attribute__((section(".data")));
extern f32 lbl_80320DD8 __attribute__((section(".data")));
extern f32 lbl_80320DDC __attribute__((section(".data")));
extern f32 lbl_80320DE0 __attribute__((section(".data")));
extern M2C_UNK lbl_80394514 __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern M2C_UNK lbl_80394694 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern s32 lbl_803DD1C0;
extern f32 lbl_803DE500;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void AvatarMovement__HandleWallImpact(void *arg0, u8 *arg1, void *arg2, f32 farg0) {
    char *p_670;
    void *sp148;
    union { s8 value; unsigned char bytes[256]; } sp48;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    union { f32 value; unsigned char bytes[48]; } sp18;
    union { M2C_UNK value; unsigned char bytes[16]; } sp8;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    void *var_r7;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 var_r11;
    void *temp_r10;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    f32 temp_f9;

    var_f1 = farg0;
    sp148 = arg1;
    if ((s32) (M2C_FIELD(arg1, s32 *, 0) & M2C_FIELD(&lbl_80394694, s32 *, 4)) == (s32) M2C_FIELD(&lbl_80394694, s32 *, 0)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        p_670 = (char *)temp_r9 + 0x670;
        if (arg1 == (s32) M2C_FIELD(p_670, s32 *, 0x8)) {
            M2C_FIELD(p_670, s32 *, 0x8) = 0;
            temp_r0 = M2C_FIELD(arg1, s32 *, 0x544);
            if ((temp_r0 == 4) || (temp_r0 == 6) || (temp_r0 == 5)) {
                fn_8025C17C(arg2, ((M2C_UNK *)sp8.bytes), ((f32 *)sp18.bytes));
                temp_r3 = M2C_FIELD(arg0, void **, 0);
                temp_r9_2 = 0x44 + temp_r3;
                temp_f11 = M2C_FIELD(temp_r9_2, f32 *, 0x18);
                temp_f9 = M2C_FIELD(temp_r9_2, f32 *, 0x20);
                temp_f10 = M2C_FIELD(temp_r9_2, f32 *, 0x1C);
                temp_f13 = sp18.value * temp_f11;
                sp28.v0 = temp_f11;
                sp38.v0 = temp_f13;
                sp38.v1 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4) * temp_f10;
                sp38.v2 = M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8) * temp_f9;
                sp28.v1 = temp_f10;
                sp28.v2 = temp_f9;
                if (!((temp_f13 + sp38.v1 + sp38.v2) <= lbl_80320DD8)) {
                    Avatar__SetAnimScriptVarIntImpl(temp_r3, (s32) &lbl_8031F4CC, 0xA, 0);
                } else {
                    Avatar__SetAnimScriptVarIntImpl(temp_r3, (s32) &lbl_8031F4CC, 0xB, 0);
                }
                if (M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8) == lbl_80320DD8) {
                    temp_cr0_eq = sp18.value == lbl_80320DD8;
                    if (temp_cr0_eq == 0) {
                        var_f1_2 = (temp_cr0_eq == 0) ? lbl_803DE500 * lbl_80320DDC : -lbl_803DE500 * lbl_80320DDC;
                    } else {
                        var_f1_2 = lbl_80320DD8;
                    }
                } else {
                    var_f1_2 = atan2f(sp18.value, M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x8));
                }
                temp_r28 = arg0 + 0x68;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x75C) = var_f1_2;
                temp_r29 = M2C_FIELD(arg0, void **, 0);
                temp_f31 = M2C_FIELD(temp_r29, f32 *, 0x75C);
                temp_r30 = temp_r29 + 0x44;
                temp_f1 = cosf(temp_f31);
                temp_f30 = sinf(temp_f31);
                M2C_FIELD(temp_r29, f32 *, 0x44) = temp_f1;
                temp_f31_2 = lbl_80320DD8;
                M2C_FIELD(temp_r30, f32 *, 8) = (f32) -temp_f30;
                M2C_FIELD(temp_r30, f32 *, 4) = temp_f31_2;
                M2C_FIELD(temp_r30, f32 *, 0xC) = temp_f31_2;
                M2C_FIELD(temp_r30, f32 *, 0x20) = temp_f1;
                M2C_FIELD(temp_r30, f32 *, 0x10) = (f32) lbl_80320DE0;
                M2C_FIELD(temp_r30, f32 *, 0x18) = temp_f30;
                M2C_FIELD(temp_r30, f32 *, 0x14) = temp_f31_2;
                M2C_FIELD(temp_r30, f32 *, 0x1C) = temp_f31_2;
                Avatar__SetAnimScriptVarFloat(M2C_FIELD(arg0, void **, 0), (s32) &lbl_80320DAC, 0, __builtin_fabsf(M2C_FIELD(((f32 *)sp18.bytes), f32 *, 0x4)));
                Avatar__StartAnimationImpl(M2C_FIELD(arg0, void **, 0), 0x300U, 1, 1, 0, 1);
                temp_r9_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_r9_3, f32 *, 0x68) = temp_f31_2;
                temp_r9_4 = temp_r9_3 + 0x68;
                M2C_FIELD(temp_r9_4, f32 *, 8) = temp_f31_2;
                M2C_FIELD(temp_r9_4, f32 *, 4) = temp_f31_2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70C) = temp_f31_2;
                var_f1 = Avatar__SetAirSpeedTimeConstantImpl(temp_r28, temp_f31_2);
                M2C_FIELD(temp_r28, f32 *, 0xD8) = temp_f31_2;
            }
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x144);
            if (temp_r3_2 == (void *) (arg0 + 0x478)) {
                var_f1 = AvatarMovement__MarkWallImpactPending(temp_r3_2);
            }
        }
    }
    if ((s32) (M2C_FIELD(sp148, s32 *, 0) & M2C_FIELD(&lbl_80394514, s32 *, 4)) == (s32) M2C_FIELD(&lbl_80394514, s32 *, 0)) {
        var_r11 = 1;
        if (!(M2C_FIELD(sp148, s32 *, 0x10) & lbl_803DD1C0)) {
            var_r11 = 0;
        }
        if (var_r11 != 0) {
            temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7C8);
            temp_r9_5 = M2C_FIELD(temp_r10, void **, 4);
            var_f1 = M2C_FIELD(temp_r9_5, f32 (**)(void *, void **), 0xC)(temp_r10 + M2C_FIELD(temp_r9_5, s16 *, 8), &sp148);
        }
        if ((s32) M2C_FIELD(&lbl_803945A4, s32 *, 0) == (s32) (M2C_FIELD(sp148, s32 *, 0) & M2C_FIELD(&lbl_803945A4, s32 *, 4))) {
            var_r7 = NULL;
            if (sp148 != NULL) {
                var_r7 = sp148 + 0x19C;
            }
            var_f1 = fn_80251510(&lbl_803B1DDC, 0x20015, M2C_FIELD(arg0, void **, 0), arg0, (s32) var_r7);
        }
        temp_r9_6 = M2C_FIELD(sp148, void **, 0x84);
        sprintf(((s8 *)sp48.bytes), &lbl_80320DBC, M2C_FIELD(temp_r9_6, s32 *, 0x94) + 0x20, M2C_ERROR(/* Read from unset register $r6 */), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), (s32) temp_r9_6, M2C_ERROR(/* Read from unset register $r10 */), var_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
    }
}

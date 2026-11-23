/* Avatar__FindNearestBuildingTarget @ 0x800940D8 (size: 0x214, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Actor__FindBoneIdByName(void *, char *, char *);
int String__CompareIgnoreCase(const char *, const char *);
void fn_801DD1FC(float *, void *, int);
void fn_8023A97C(void *, int);
extern s8 lbl_8031E188 __attribute__((section(".data")));
extern s8 lbl_8031F908 __attribute__((section(".data")));
extern f32 lbl_8031F918 __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void *Avatar__FindNearestBuildingTarget(void *arg0) {
    char *p_80;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s8 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp38;
    f32 sp28;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f31;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r21;
    void *var_r29;

    temp_r9 = arg0 + 0x38;
    var_r21 = NULL;
    sp8 = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
    var_f31 = lbl_8031F918;
    var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r29 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r29, void **, 0);
            p_80 = (char *)temp_r31 + 0x80;
            fn_8023A97C(M2C_FIELD(p_80, void **, 0x4), 0);
            if (((s32) (M2C_FIELD(temp_r31, s32 *, 0) & M2C_FIELD(&lbl_803945A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945A4, s32 *, 0)) && (String__CompareIgnoreCase(temp_r31 + 0x1C0, &lbl_8031F908) == 0) && (temp_r31 != arg0)) {
                temp_r9_2 = temp_r31 + 0x38;
                sp38 = M2C_FIELD(temp_r31, f32 *, 0x38);
                M2C_FIELD(&sp38, s32 *, 4) = (s32) M2C_FIELD(temp_r9_2, f32 *, 4);
                M2C_FIELD(&sp38, s32 *, 8) = (s32) M2C_FIELD(temp_r9_2, s32 *, 8);
                sp48 = sp38 - sp8;
                sp4C = M2C_FIELD(&sp38, s32 *, 4) - M2C_FIELD(&sp8, f32 *, 4);
                sp50 = M2C_FIELD(&sp38, s32 *, 8) - M2C_FIELD(&sp8, f32 *, 8);
                sp28 = sp48;
                M2C_FIELD(&sp28, s32 *, 4) = (s32) M2C_FIELD(&sp48, s32 *, 4);
                M2C_FIELD(&sp28, s32 *, 8) = (s32) M2C_FIELD(&sp48, s32 *, 8);
                if (((s32) M2C_FIELD(M2C_FIELD(p_80, void **, 0x4), s32 *, 0xC) != 0) && (Actor__FindBoneIdByName(temp_r31, &lbl_8031E188, &sp58) != 0)) {
                    fn_801DD1FC(&sp48, temp_r31, (s32) (u8) sp58);
                    M2C_FIELD(&sp38, s32 *, 4) = (s32) M2C_FIELD(&sp48, s32 *, 4);
                    sp38 = sp48;
                    M2C_FIELD(&sp38, s32 *, 8) = (s32) M2C_FIELD(&sp48, s32 *, 8);
                }
                temp_f0 = sp28 * sp28;
                sp60 = temp_f0;
                sp64 = M2C_FIELD(&sp28, s32 *, 4) * M2C_FIELD(&sp28, s32 *, 4);
                sp68 = M2C_FIELD(&sp28, s32 *, 8) * M2C_FIELD(&sp28, s32 *, 8);
                temp_f0_2 = temp_f0 + M2C_FIELD(&sp60, f32 *, 4) + M2C_FIELD(&sp60, f32 *, 8);
                if (!(temp_f0_2 >= var_f31)) {
                    var_r21 = temp_r31;
                    var_f31 = temp_f0_2;
                    sp18 = sp38;
                    M2C_FIELD(&sp18, s32 *, 4) = (s32) M2C_FIELD(&sp38, s32 *, 4);
                    M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(&sp38, s32 *, 8);
                }
            }
            if (var_r29 != NULL) {
                var_r29 = M2C_FIELD(var_r29, void **, 0x14);
            } else {
                var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
            }
        } while (var_r29 != NULL);
    }
    return var_r21;
}

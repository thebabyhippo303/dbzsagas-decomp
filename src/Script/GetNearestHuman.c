/* Script__GetNearestHuman @ 0x8002582C (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Script__PushInt(void *, s32, s32);
void Script__PushFloat(void *, s32, f32);
void * Script__PopInt(void *, void *);
float sqrtf(float);
extern f32 lbl_80311400 __attribute__((section(".data")));
extern f32 lbl_80311404 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void Script__GetNearestHuman(void *arg0, void *arg1) {
    f32 sp60;
    f32 sp18;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp38;
    f32 sp28;
    f32 sp5C;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_r31;
    f32 var_f31;
    f32 temp_f30;
    void *temp_r3;
    void *temp_r9;
    void *var_r18;
    void *var_r29;

    temp_r3 = Script__PopInt(arg0, arg1);
    var_r18 = NULL;
    temp_r9 = temp_r3 + 0x38;
    sp8 = M2C_FIELD(temp_r3, u32 *, 0x38);
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9, s32 *, 4);
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
    var_f31 = lbl_80311400;
    var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r29 != NULL) {
        temp_f30 = lbl_80311404;
        do {
            temp_r31 = M2C_FIELD(var_r29, void **, 0);
            if (((s32) (M2C_FIELD(temp_r31, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) && (temp_r31 != temp_r3) && ((s32) M2C_FIELD(temp_r31, s32 *, 0x7E4) != 0) && !(M2C_FIELD(temp_r31, f32 *, 0x288) <= temp_f30)) {
                sp38 = M2C_FIELD(temp_r31, f32 *, 0x38);
                M2C_FIELD(&sp38, f32 *, 4) = (f32) M2C_FIELD(temp_r31, f32 *, 0x3c);
                M2C_FIELD(&sp38, f32 *, 8) = (f32) M2C_FIELD(temp_r31, f32 *, 0x40);
                sp48 = sp38 - sp8;
                sp4C = M2C_FIELD(&sp38, f32 *, 4) - M2C_FIELD(&sp8, f32 *, 4);
                sp50 = M2C_FIELD(&sp38, f32 *, 8) - M2C_FIELD(&sp8, f32 *, 8);
                sp28 = sp48;
                M2C_FIELD(&sp28, s32 *, 4) = (s32) M2C_FIELD(&sp48, s32 *, 4);
                M2C_FIELD(&sp28, s32 *, 8) = (s32) M2C_FIELD(&sp48, s32 *, 8);
                temp_f1 = sp28 * sp28;
                sp58 = temp_f1;
                sp5C = M2C_FIELD(&sp28, s32 *, 4) * M2C_FIELD(&sp28, s32 *, 4);
                sp60 = M2C_FIELD(&sp28, s32 *, 8) * M2C_FIELD(&sp28, s32 *, 8);
                temp_f1_2 = sqrtf(temp_f1 + M2C_FIELD(&sp58, f32 *, 4) + M2C_FIELD(&sp58, f32 *, 8));
                if (!(temp_f1_2 >= var_f31)) {
                    var_r18 = temp_r31;
                    var_f31 = temp_f1_2;
                    sp18 = sp38;
                    M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(&sp38, f32 *, 4);
                    M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(&sp38, f32 *, 8);
                }
            }
            if (var_r29 != NULL) {
                var_r29 = M2C_FIELD(var_r29, void **, 0x14);
            } else {
                var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
            }
        } while (var_r29 != NULL);
    }
    if (var_r18 != NULL) {
        sp8 = sp18;
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
        M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
    }
    Script__PushInt(arg0, (s32) arg1, (s32) var_r18);
    Script__PushFloat(arg0, (s32) arg1, sp8);
    Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(&sp8, f32 *, 4));
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 8));
    Script__PushFloat(arg0, (s32) arg1, var_f31);
}

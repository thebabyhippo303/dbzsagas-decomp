/* Avatar__ClearLockActor @ 0x80031714 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetLockActor(void *, void *);
void * Script__PopInt(void *, void *);
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));

void Avatar__ClearLockActor(void *arg0, void *arg1) {
    void *temp_r3;
    void *var_r30;
    s32 a;
    s32 b;

    temp_r3 = Script__PopInt(arg0, arg1);
    var_r30 = NULL;
    a = M2C_FIELD(&lbl_803945E4, s32 *, 0);
    b = M2C_FIELD(temp_r3, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4);
    if (b == a) {
        var_r30 = M2C_FIELD(temp_r3, void **, 0x2B8);
        Avatar__SetLockActor(temp_r3, NULL);
    }
    if ((var_r30 != NULL) && ((s32) M2C_FIELD(var_r30, s32 *, 0x2B8) == temp_r3)) {
        Avatar__SetLockActor(var_r30, NULL);
    }
}

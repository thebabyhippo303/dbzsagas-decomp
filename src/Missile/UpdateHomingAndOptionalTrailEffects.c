/* Missile__UpdateHomingAndOptionalTrailEffects @ 0x800D9ABC (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Missile__UpdateHomingTrajectory(void *, float, float);
void Missile__UpdateTrailEffects(void *, void *);
extern f32 lbl_80322994 __attribute__((section(".data")));
extern f32 lbl_80322998 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));

void Missile__UpdateHomingAndOptionalTrailEffects(void *arg0) {
    s32 var_r11;
    s32 a;
    s32 b;
    void *temp_r30;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg0, void **, 0x36C);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x364) + 0x5C;
    if (temp_r7 != NULL) {
        a = M2C_FIELD(&lbl_803945E4, s32 *, 0);
        b = M2C_FIELD(temp_r7, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4);
        if (b == a) {
            var_r11 = 0;
            if ((s32) M2C_FIELD(M2C_FIELD(temp_r7, void **, 0x159C), s32 *, 0xF9C) != 0) {
                var_r11 = 1;
            }
            if (var_r11 != 0) {
                Missile__UpdateHomingTrajectory(arg0, lbl_80322994, lbl_80322998);
            }
        }
    }
    if (temp_r30 != NULL) {
        Missile__UpdateTrailEffects(arg0, temp_r30);
    }
}

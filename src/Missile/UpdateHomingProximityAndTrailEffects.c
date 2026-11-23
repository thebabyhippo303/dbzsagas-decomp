/* Missile__UpdateHomingProximityAndTrailEffects @ 0x800D9C04 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Missile__UpdateHomingTrajectory(void *, float, float);
void Missile__UpdateTrailEffects(void *, void *);
M2C_UNK Missile__CheckActorProximity(void *);       /* extern */
extern f32 lbl_803229A4 __attribute__((section(".data")));
extern f32 lbl_803229A8 __attribute__((section(".data")));
typedef struct Mask { s32 value; s32 mask; } Mask;
extern Mask lbl_803945E4 __attribute__((section(".data")));

void Missile__UpdateHomingProximityAndTrailEffects(void *arg0) {
    s32 var_r11;
    void *temp_r30;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg0, void **, 0x36C);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x364) + 0x5C;
    if ((temp_r7 != NULL) && ((M2C_FIELD(temp_r7, s32 *, 0) & lbl_803945E4.mask) == lbl_803945E4.value)) {
        var_r11 = 0;
        if ((s32) M2C_FIELD(M2C_FIELD(temp_r7, void **, 0x159C), s32 *, 0xF9C) != 0) {
            var_r11 = 1;
        }
        if (var_r11 != 0) {
            Missile__UpdateHomingTrajectory(arg0, lbl_803229A4, lbl_803229A8);
        }
    }
    Missile__CheckActorProximity(arg0);
    Missile__UpdateTrailEffects(arg0, temp_r30);
}

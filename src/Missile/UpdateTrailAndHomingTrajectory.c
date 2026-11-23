/* Missile__UpdateTrailAndHomingTrajectory @ 0x800D9D60 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Missile__UpdateTrailEffects(void *, void *);
M2C_UNK Missile__UpdateHomingTrajectory(void *, f32, f32); /* extern */
extern f32 lbl_803229AC __attribute__((section(".data")));
extern f32 lbl_803229B0 __attribute__((section(".data")));

void Missile__UpdateTrailAndHomingTrajectory(void *arg0) {
    Missile__UpdateTrailEffects(arg0, M2C_FIELD(arg0, s32 *, 0x364) + 0x5C);
    Missile__UpdateHomingTrajectory(arg0, lbl_803229AC, lbl_803229B0);
}

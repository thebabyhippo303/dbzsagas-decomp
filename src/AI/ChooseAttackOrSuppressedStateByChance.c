/* AI__ChooseAttackOrSuppressedStateByChance @ 0x800625F4 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetAttackSuppressed(void *, int);
void AI__SetState(void *, int);
void * Actor__GetStateHandler(int);
float Rand__RangeFloat(void *, float, float);
extern f32 lbl_8031E474 __attribute__((section(".data")));
extern f32 lbl_8031E478 __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sbss")));

void AI__ChooseAttackOrSuppressedStateByChance(void *arg0) {
    f32 roll;

    roll = Rand__RangeFloat(lbl_803DD634, lbl_8031E474, lbl_8031E478);
    if (!(roll >= M2C_FIELD(arg0, f32 *, 0x354))) {
        M2C_FIELD(arg0, s32 *, 0x74) = 0x76;
        AI__SetAttackSuppressed(arg0, 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x4BC) = 1;
        M2C_FIELD(arg0, s32 *, 0x74) = 0x12;
    }
    AI__SetState(arg0, 0);
    M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(M2C_FIELD(arg0, s32 *, 0x74));
    M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
}

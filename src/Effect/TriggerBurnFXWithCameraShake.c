/* Effect__TriggerBurnFXWithCameraShake @ 0x800DAEFC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SpawnAttackFXWithCameraShake(s32, s32, void *);
extern M2C_UNK lbl_80322A78 __attribute__((section(".data")));

void Avatar__TriggerBurnFXWithCameraShake(s32 arg0) {
    Avatar__SpawnAttackFXWithCameraShake(arg0, arg0, &lbl_80322A78);
}

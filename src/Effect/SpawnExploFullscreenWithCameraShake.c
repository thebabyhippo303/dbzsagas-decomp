/* Effect__SpawnExploFullscreenWithCameraShake @ 0x800DAB50 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_800DA918(void *, void *, const char *);
extern s8 lbl_80322A34 __attribute__((section(".data")));

void Avatar__TriggerExploFX(void *arg0) {
    fn_800DA918(arg0, arg0, &lbl_80322A34);
}

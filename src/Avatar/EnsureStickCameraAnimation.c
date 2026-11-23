/* Avatar__EnsureStickCameraAnimation @ 0x8008E764 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
int CameraBag__IsCurrentNamed(void *, char *);
extern s8 lbl_8031F7DC __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void Avatar__EnsureStickCameraAnimation(void *arg0) {
    s16 temp_r0;

    if (CameraBag__IsCurrentNamed(lbl_803DC5B4, &lbl_8031F7DC) != 0) {
        temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0xF0), s16 *, 0xA);
        if ((temp_r0 != 0x600) && (temp_r0 != 0xB00) && (temp_r0 != 0xC00) && (temp_r0 != 0xE00) && (temp_r0 != 0x1000)) {
            Avatar__StartAnimationImpl(arg0, 0x1000U, 1, 1, 0, 1);
        }
    }
}


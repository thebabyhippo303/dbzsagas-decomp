/* Avatar__AddFootprintCameraEffect @ 0x800B0E74 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * CameraBag__GetCurrent(void *);
void Camera__AddEffect(void *, void *);
void * fn_801842C4(unsigned int);
void *CameraShake__ConstructAtPosition(void *, void *, f32, f32, f32, f32, f32);
extern f32 lbl_80320F4C __attribute__((section(".data")));
extern f32 lbl_80320F50 __attribute__((section(".data")));
extern f32 lbl_80320F54 __attribute__((section(".data")));
extern f32 lbl_80320F58 __attribute__((section(".data")));
extern void *lbl_803DC5B4;

typedef struct Vec3i {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

void Script__ShakeCameraAtPosition(void **arg0, void *arg1) {
    Vec3i pos;
    void *temp_r29;

    if ((s32) M2C_FIELD(M2C_FIELD(*arg0, void **, 0x19D8), s32 *, 0xC) == 0x1C) {
        temp_r29 = CameraBag__GetCurrent(lbl_803DC5B4);
        pos = *(Vec3i *)arg1;
        Camera__AddEffect(temp_r29, CameraShake__ConstructAtPosition(fn_801842C4(0x18U), &pos, lbl_80320F4C, lbl_80320F50, lbl_80320F54, lbl_80320F58, lbl_80320F54));
    }
}


/* Camera__Shake @ 0x8002C2F0 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Script__PopFloat(void *script, void *context);
void *CameraBag__GetCurrent(void *bag);
void *CameraShake__Construct(void *mem, f32 a, f32 b, f32 c);
void Camera__AddEffect(void *camera, void *effect);
void *fn_801842C4(u32 size);
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));

void Camera__Shake(void *arg0, void *arg1) {
    f32 p1;
    f32 p2;
    f32 p3;
    void *camera;

    p1 = Script__PopFloat(arg0, arg1);
    p2 = Script__PopFloat(arg0, arg1);
    p3 = Script__PopFloat(arg0, arg1);
    camera = CameraBag__GetCurrent(lbl_803DC5B4);
    Camera__AddEffect(camera, CameraShake__Construct(fn_801842C4(0x18), p1, p2, p3));
}

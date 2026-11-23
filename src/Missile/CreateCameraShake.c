/* Missile__CreateCameraShake @ 0x800DB088 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__CreateCameraShake @ 0x800DB088 (0x60). ProDG -O2. */
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));
extern float lbl_80322AB8 __attribute__((section(".data")));
extern float lbl_80322ABC __attribute__((section(".data")));
extern float lbl_80322AC0 __attribute__((section(".data")));
extern void *CameraBag__GetCurrent(void *bag);
extern void *fn_801842C4(unsigned int size);
extern void *CameraShake__Construct(void *mem, float amount, float y, float z);
extern void Camera__AddEffect(void *camera, void *effect);

void Missile__CreateCameraShake(void) {
    void *camera;
    void *shake;

    camera = CameraBag__GetCurrent(lbl_803DC5B4);
    shake = CameraShake__Construct(fn_801842C4(24), lbl_80322AB8, lbl_80322ABC, lbl_80322AC0);
    Camera__AddEffect(camera, shake);
}

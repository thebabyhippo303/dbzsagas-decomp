/* Camera__ShakeRelative @ 0x8002C38C (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int x, y, z; } V3i;

extern float Script__PopFloat(void *script, void *context);
void *CameraBag__GetCurrent(void *);
void *fn_801842C4(int);
void *CameraShake__ConstructAtPosition(void *, V3i *, float, float, float, float, float);
void Camera__AddEffect(void *, void *);

extern void *lbl_803DC594 __attribute__((section(".sdata")));

void Camera__ShakeRelative(void *script, void *context) {
    float a;
    float b;
    float c;
    float d;
    float e;
    V3i pos;
    void *cam;
    void *shake;
    char *obj;

    a = Script__PopFloat(script, context);
    b = Script__PopFloat(script, context);
    c = Script__PopFloat(script, context);
    d = Script__PopFloat(script, context);
    e = Script__PopFloat(script, context);
    obj = *(char **)((char *)script + 0xC8);
    cam = CameraBag__GetCurrent(lbl_803DC594);
    pos = *(V3i *)(obj + 0x38);
    shake = fn_801842C4(24);
    shake = CameraShake__ConstructAtPosition(shake, &pos, a, b, c, d, e);
    Camera__AddEffect(cam, shake);
}

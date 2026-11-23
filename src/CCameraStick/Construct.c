/* CCameraStick__Construct @ 0x800CD344 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CCameraStick__Construct @ 0x800CD344 (0xC4). ProDG -O2. */
typedef float f32;

extern void fn_800BADC0(void);
extern void *fn_801842C4(unsigned int size);
extern void *CFilterSmooth__Construct(void *self, f32 a, f32 b);
extern void Camera__AddEffect(void *camera, void *effect);
extern void *CameraCollisionBlockers__Construct(void *self);
extern char lbl_80335750[] __attribute__((section(".data")));
extern f32 lbl_80321C10 __attribute__((section(".data")));
extern f32 lbl_80321C14 __attribute__((section(".data")));
extern f32 lbl_80321C18 __attribute__((section(".data")));
extern char lbl_8032E8F8[] __attribute__((section(".data")));
extern char lbl_8032E930[] __attribute__((section(".data")));

typedef struct {
    char *vt;
    f32 value;
} StickEffect;

void *CCameraStick__Construct(void *arg0) {
    StickEffect *effect;
    char **tag;

    fn_800BADC0();
    *(char **)((char *)arg0 + 0x3C) = lbl_80335750;
    Camera__AddEffect(arg0, CFilterSmooth__Construct(fn_801842C4(12U), lbl_80321C10, lbl_80321C14));
    effect = fn_801842C4(8U);
    effect->vt = lbl_8032E8F8;
    effect->value = lbl_80321C18;
    Camera__AddEffect(arg0, effect);
    tag = fn_801842C4(4U);
    *tag = lbl_8032E930;
    Camera__AddEffect(arg0, tag);
    *(void **)((char *)arg0 + 0x88) = CameraCollisionBlockers__Construct(fn_801842C4(0x88U));
    return arg0;
}

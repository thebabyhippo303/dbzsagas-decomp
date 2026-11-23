/* CCameraStatic__Construct @ 0x800CD0D4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraStatic__Construct @ 0x800CD0D4 (0x64). ProDG -O2. */
typedef unsigned int u32;
typedef float f32;

extern void fn_800BADC0(void);
extern void *fn_801842C4(u32 size);
extern void *CFilterSmooth__Construct(void *self, f32 a, f32 b);
extern void Camera__AddEffect(void *camera, void *effect);
extern char lbl_8032E5A8[] __attribute__((section(".data")));
extern f32 lbl_80321BD0 __attribute__((section(".data")));
extern f32 lbl_80321BD4 __attribute__((section(".data")));

void *CameraStatic__Construct(void *arg0) {
    fn_800BADC0();
    *(char **)((char *)arg0 + 0x3C) = lbl_8032E5A8;
    Camera__AddEffect(arg0, CFilterSmooth__Construct(fn_801842C4(0xCU), lbl_80321BD0, lbl_80321BD4));
    return arg0;
}

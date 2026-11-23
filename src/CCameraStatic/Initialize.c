/* CCameraStatic__Initialize @ 0x800CD138 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern void Debug__FormatMessage(char *fmt, ...);
extern void fn_800BAE9C(void *cam, f32 value);
extern char lbl_80321BD8[] __attribute__((section(".data")));
extern char lbl_80321BFC[] __attribute__((section(".data")));
extern char lbl_80321C04[] __attribute__((section(".data")));
extern f32 lbl_80321C0C __attribute__((section(".data")));

void CameraStatic__Initialize(void *cam, void *a, void *b, s32 flag) {
    char *label;
    s32 ax, ay, az;
    s32 bx, by, bz;
    char *pa;
    char *pb;

    ax = *(volatile s32 *)a;
    az = *(volatile s32 *)((char *)a + 8);
    ay = *(volatile s32 *)((char *)a + 4);
    pa = (char *)cam + 120;
    pb = (char *)cam + 132;
    *(s32 *)((char *)cam + 120) = ax;
    *(volatile s32 *)(pa + 8) = az;
    *(volatile s32 *)(pa + 4) = ay;
    bx = *(volatile s32 *)b;
    bz = *(volatile s32 *)((char *)b + 8);
    by = *(volatile s32 *)((char *)b + 4);
    *(s32 *)((char *)cam + 132) = bx;
    *(volatile s32 *)(pb + 8) = bz;
    *(volatile s32 *)(pb + 4) = by;
    *(s32 *)((char *)cam + 144) = flag;
    if (flag != 0) {
        label = lbl_80321BFC;
    } else {
        label = lbl_80321C04;
    }
    Debug__FormatMessage(lbl_80321BD8, label);
    fn_800BAE9C(cam, lbl_80321C0C);
}

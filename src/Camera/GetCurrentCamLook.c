/* Camera__GetCurrentCamLook @ 0x8002CBC4 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Script__PushFloat(void *, void *, float);
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));

void Camera__GetCurrentCamLook(void *arg0, void *arg1) {
    volatile s32 sp8;
    volatile s32 spC;
    volatile s32 sp10;
    void *base;
    s32 a;
    s32 b;
    s32 c;
    f32 *fp;

    base = (char *)lbl_803DC5B4 + 0xAC;
    a = M2C_FIELD(base, s32 *, 0);
    b = M2C_FIELD(base, s32 *, 4);
    c = M2C_FIELD(base, s32 *, 8);
    sp8 = a;
    spC = b;
    sp10 = c;
    fp = (f32 *)&sp8;
    Script__PushFloat(arg0, arg1, fp[0]);
    Script__PushFloat(arg0, arg1, fp[1]);
    Script__PushFloat(arg0, arg1, fp[2]);
}

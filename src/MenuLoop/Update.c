/* MenuLoop__Update @ 0x8004CD10 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_803A35BC __attribute__((section(".data")));
extern s32 MenuLoop__FinishCopyrightSplash(void *self, f32 dt);
extern s32 MenuLoop__AdvanceCopyrightSplashFade(void *self, f32 dt);
extern s32 MenuLoop__MarkComplete(void *self, f32 dt);
extern s32 fn_8004CCEC(void *self, f32 dt);
extern s32 fn_8004CD08(void *self, f32 dt);
extern void fn_8026BF14(void *p);
extern void fn_8025FEA4(f32 dt);
extern void Sphere__ResetRegistry(void);
extern void fn_8022876C(void);

s32 MenuLoop__Update(void *self) {
    s32 state;
    f32 dt;
    s32 result;

    state = *(s32 *)((char *)self + 0xBD0);
    dt = lbl_803A35BC;
    switch (state) {
    case 0:
        result = MenuLoop__FinishCopyrightSplash(self, dt);
        break;
    case 1:
        result = MenuLoop__AdvanceCopyrightSplashFade(self, dt);
        break;
    case 2:
        result = fn_8004CCEC(self, dt);
        break;
    case 4:
        result = MenuLoop__MarkComplete(self, dt);
        break;
    case 5:
        result = fn_8004CD08(self, dt);
        break;
    }
    fn_8026BF14((char *)self + 0x210);
    fn_8025FEA4(dt);
    Sphere__ResetRegistry();
    fn_8022876C();
    return result;
}

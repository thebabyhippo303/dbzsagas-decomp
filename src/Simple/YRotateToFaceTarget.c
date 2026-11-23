/* Simple__YRotateToFaceTarget @ 0x802AEC88 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

extern f32 Script__PopFloat(void *, void *);
extern void fn_802C6B40(int, Vec3 *, f32, f32);
extern f32 lbl_80351DCC __attribute__((section(".data")));

void Simple__YRotateToFaceTarget(char *self, void *context) {
    Vec3 v;
    Vec3 *p = &v;
    f32 speed;

    speed = Script__PopFloat(self, context);
    p->z = Script__PopFloat(self, context);
    p->y = Script__PopFloat(self, context);
    p->x = Script__PopFloat(self, context);
    fn_802C6B40(*(int *)(self + 0xC8), p, speed, lbl_80351DCC);
}

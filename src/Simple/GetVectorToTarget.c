/* Simple__GetVectorToTarget @ 0x802AEBF0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

extern f32 Script__PopFloat(void *, void *);
extern void Script__PushFloat(void *, void *, f32);
extern void Simple__GetVectorToTargetImpl(int, Vec3 *, Vec3 *);

void Simple__GetVectorToTarget(char *self, void *context) {
    Vec3 v;
    Vec3 out;
    Vec3 *p = &v;

    p->z = Script__PopFloat(self, context);
    p->y = Script__PopFloat(self, context);
    p->x = Script__PopFloat(self, context);
    Simple__GetVectorToTargetImpl(*(int *)(self + 0xC8), p, &out);
    Script__PushFloat(self, context, out.x);
    Script__PushFloat(self, context, out.y);
    Script__PushFloat(self, context, out.z);
}

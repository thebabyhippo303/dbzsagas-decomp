/* Script__GetProneOrientation @ 0x800B1320 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32; typedef unsigned char u8;
typedef struct Vec3 { f32 x, y, z; } Vec3;
void Avatar__PushScriptInt(void *, s32, void *);
void fn_801DCE74(Vec3 *, void *, s32);
void fn_801DCED0(Vec3 *, void *, s32);
typedef struct Avatar { char pad[0x19DC]; u8 bone; } Avatar;
typedef struct Script { Avatar *av; char pad[0x6BC - 4]; s32 flag; s32 alt; } Script;
void Script__GetProneOrientation(Script *self, void *ctx) {
    Vec3 a;
    Vec3 b;
    f32 az;
    if (self->flag != 0) {
        self->flag = 0;
        if (self->alt == 0) {
            Avatar__PushScriptInt(self->av, 0, ctx);
        } else {
            Avatar__PushScriptInt(self->av, 1, ctx);
        }
        return;
    }
    fn_801DCE74(&a, self->av, self->av->bone);
    az = a.z;
    fn_801DCED0(&b, self->av, self->av->bone);
    if (!(az <= b.z)) {
        Avatar__PushScriptInt(self->av, 1, ctx);
    } else {
        Avatar__PushScriptInt(self->av, 0, ctx);
    }
}

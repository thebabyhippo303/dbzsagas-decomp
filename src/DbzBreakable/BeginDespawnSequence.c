/* DbzBreakable__BeginDespawnSequence @ 0x800E987C (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef short s16;
typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

typedef struct {
    char pad0[0x60];
    s16 adjust;
    char pad1[2];
    char pad2[0x64 - 0x62 - 2];
    void (*setHidden)(void *, s32);
} ObjVtbl;

typedef struct {
    char pad0[0x34];
    ObjVtbl *vtbl;
    char pad1[0x7DC - 0x38];
    s32 f7DC;
    s32 f7E0;
    s32 f7E4;
    f32 f7E8;
    f32 f7EC;
    f32 f7F0;
    f32 f7F4;
    f32 f7F8;
    char pad2[0x83C - 0x7FC];
    u32 emitter;
    char pad3[0x860 - 0x840];
    s32 f860;
} Breakable;

void Actor__ToNonProtagonistCastImpl(void *);
f32 Rand__RangeFloat(void *, f32, f32);
void Actor__MarkForDeath(void *, f32);
s32 Emitter__Kill(u32);
void Simple__SetScaleImpl(void *, Vec3 *);
void Simple__AnimateScale(void *, Vec3 *, s32, f32, f32);
extern f32 lbl_8032371C __attribute__((section(".data")));
extern f32 lbl_80323720 __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sdata")));

void DbzBreakable__BeginDespawnSequence(Breakable *self, f32 arg) {
    Vec3 scale;
    Vec3 *p;
    f32 one;

    if (self->f7DC != 0) {
        if (self->f860 <= 0) {
            p = &scale;
            self->vtbl->setHidden((char *)self + self->vtbl->adjust, 1);
            Actor__ToNonProtagonistCastImpl(self);
            one = lbl_8032371C;
            scale.x = one;
            p->y = one;
            p->z = one;
            Simple__SetScaleImpl(self, p);
            Simple__AnimateScale(self, p, 0, one, lbl_80323720);
            if (self->f7E4 != 0) {
                self->f7F8 = Rand__RangeFloat(lbl_803DD634, self->f7EC, self->f7F0);
            } else {
                self->f7F8 = self->f7F4;
            }
            self->f7E0 = 0;
            self->f860 = 1;
        }
    } else {
        Actor__MarkForDeath(self, arg);
    }
    if (self->emitter != 0) {
        Emitter__Kill(self->emitter);
    }
}

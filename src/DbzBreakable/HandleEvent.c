/* DbzBreakable__HandleEvent @ 0x800E7538 (size: 0x23C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct V3 { f32 x, y, z; } V3;
typedef struct Blk { char pad[16]; V3 v; } Blk;
typedef struct Brk {
    char p0[0x53C]; s32 hit;
    s32 f540;
    s32 st;
    s32 mode;
    char p1[0x598 - 0x54C]; s32 f598;
    char p2[0x7E8 - 0x59C]; s32 f7E8;
    char p3[0x814 - 0x7EC]; s32 f814;
    char p4[0x858 - 0x818]; s32 f858;
    char p5[0x8E0 - 0x85C]; s32 f8E0;
} Brk;
void DbzBreakable__ProcessImpactConsequences(void *);
void DbzBreakable__ProcessImpact(void *, V3 *);
void DbzBreakable__DispatchEventToNumberedPieces(void *);
void fn_80251650(void *, s32, s32, void *, void *);
void fn_802CB62C(void *, u32, s32, s32);
extern f32 lbl_8032366C __attribute__((section(".data")));
extern char lbl_803B1DDC[] __attribute__((section(".data")));

void DbzBreakable__HandleEvent(Brk *self, u32 ev, s32 arg, s32 arg3) {
    Blk l;
    f32 zero;
    zero = lbl_8032366C;
    l.v.x = zero;
    l.v.y = zero;
    l.v.z = zero;
    switch (ev) {
    case 0x2000C:
        DbzBreakable__ProcessImpactConsequences(self);
        break;
    case 0x200FD:
        self->f8E0 = arg;
        self->f814 = 1;
        break;
    case 0x200FE:
        self->f814 = 1;
        break;
    case 0x20109:
        if (self->st == 7) {
            break;
        }
    case 0x20100:
        self->mode = 4;
        l.v.x = zero;
        l.v.y = zero;
        l.v.z = zero;
        self->hit = 1;
        DbzBreakable__ProcessImpact(self, &l.v);
        break;
    case 0x20101:
        if (self->st == 3) {
            self->hit = 0;
        }
        self->mode = 4;
        if (self->f598 != 0 && self->f858 == 2) {
            DbzBreakable__DispatchEventToNumberedPieces(self);
        }
        break;
    case 0x20102:
        self->f7E8 = 1;
        DbzBreakable__ProcessImpactConsequences(self);
        self->mode = 3;
        fn_80251650(lbl_803B1DDC, 0x2000C, 0, self, self);
        break;
    case 0x103:
        self->mode = 3;
        self->f7E8 = 1;
        break;
    }
    if (self->hit != 0 || self->f814 != 0) {
        fn_802CB62C(self, ev, arg, arg3);
        return;
    }
    if (self->mode > 0 && self->st == 7 && self->f598 != 0) {
        fn_802CB62C(self, ev, arg, arg3);
    }
}

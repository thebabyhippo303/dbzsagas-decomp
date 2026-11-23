/* SuspensionBridge__UpdateActorProximityFlags @ 0x800FB760 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vt { char pad[16]; short adjust; short unused; float (*fn)(void *, void *); } Vt;
typedef struct Mgr { Vt *vt; } Mgr;
typedef struct Inner { char pad[12]; int id; } Inner;
typedef struct Body { char pad[148]; Inner *inner; } Body;
typedef struct SB {
    char pad[56];
    char pos[12];
    char pad2[0x84 - 68];
    Body *body;
    char pad3[0x76C - 0x88];
    float scale;
    unsigned flags;
} SB;
extern float lbl_80324574 __attribute__((section(".data")));
extern float lbl_80324578 __attribute__((section(".data")));
extern int lbl_803AD83C __attribute__((section(".data")));
extern Mgr *lbl_803DCE10;

void SuspensionBridge__UpdateActorProximityFlags(SB *self) {
    unsigned f;
    if (self->scale != lbl_80324574 && self->body->inner->id == lbl_803AD83C) {
        Vt *vt = lbl_803DCE10->vt;
        float d = vt->fn((char *)lbl_803DCE10 + vt->adjust, self->pos);
        if (d >= lbl_80324578) {
            f = self->flags & 0xBFFFFFFF;
        } else {
            f = self->flags | 0xC0000000;
        }
    } else {
        f = self->flags & 0xBFFFFFFF;
    }
    self->flags = f;
}

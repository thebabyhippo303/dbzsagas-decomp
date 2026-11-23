/* Piccolo__TimerStart @ 0x80041C84 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched conditionals and layer toggles. ProDG -O2.
   Collision__EnableLayer            @ 0x802B2340 (0x30)
   Collision__DisableLayer           @ 0x802B2370 (0x30)
   Sound__Kill2DSfxLoop              @ 0x8002C2BC (0x34)
   Exploder__SetActorSpawnedFromScript @ 0x80030378 (0x34)
   Avatar__StopFlying                @ 0x8003353C (0x34)
   Avatar__PauseBoss                 @ 0x8003E414 (0x34)
   AI__FinishedTargetingBuilding     @ 0x80041894 (0x34)
   Piccolo__TimerStart               @ 0x80041C84 (0x34)
   Avatar__EndBurrow                 @ 0x80043AC4 (0x34)
*/
void *fn_8023A310(void *a, void *b);
extern void *lbl_803DCC50;
void fn_801B2678(void *world, void *who, int on);

void Collision__EnableLayer(void *a, void *b) {
    void *who = fn_8023A310(a, b);
    fn_801B2678(lbl_803DCC50, who, 1);
}

void Collision__DisableLayer(void *a, void *b) {
    void *who = fn_8023A310(a, b);
    fn_801B2678(lbl_803DCC50, who, 0);
}

void fn_80188FB0(void **pp);
void Sound__Kill2DSfxLoop(void *a, void *b) {
    void *p = fn_8023A310(a, b);
    if (p)
        fn_80188FB0(&p);
}

typedef struct { char pad[0x700]; void *spawned; } ExpInner;
typedef struct { char pad[0xc8]; ExpInner *inner; } ExpObj;
void Exploder__SetActorSpawnedFromScript(ExpObj *self, void *ctx) {
    self->inner->spawned = fn_8023A310(self, ctx);
}

typedef struct {
    char pad[0x71c];
    int state;
    char pad2[0x7fc - 0x720];
    void *ctrl;
} FlyObj;
void fn_800A5D04(void *p);
void Avatar__StopFlying(void *a, void *b) {
    FlyObj *o = fn_8023A310(a, b);
    if (o->state == 5)
        fn_800A5D04(o->ctrl);
}

typedef struct { char pad[0x2d4]; int flag; } PauseObj;
extern int lbl_803DC460;
void Avatar__PauseBoss(void *a, void *b) {
    PauseObj *o = fn_8023A310(a, b);
    if (o->flag)
        lbl_803DC460 = 0;
}

typedef struct { char pad[0x3b0]; int slot; } TgtInner;
typedef struct {
    char pad[0x7e4];
    int flag;
    char pad2[0xb8c - 0x7e8];
    TgtInner *inner;
} TgtObj;
void AI__FinishedTargetingBuilding(void *a, void *b) {
    TgtObj *o = fn_8023A310(a, b);
    if (o->flag == 0)
        o->inner->slot = 0;
}

typedef struct { char pad[0x500]; int slot; } BurInner;
typedef struct {
    char pad[0x7e4];
    int flag;
    char pad2[0xb8c - 0x7e8];
    BurInner *inner;
} BurObj;
void Avatar__EndBurrow(void *a, void *b) {
    BurObj *o = fn_8023A310(a, b);
    if (o->flag == 0)
        o->inner->slot = 0;
}

extern void *lbl_803DC654;
extern char lbl_80310000[];
void fn_8010F3C8(void *p);
void fn_8010F410(void *p, float t);
void Piccolo__TimerStart(void) {
    fn_8010F3C8(lbl_803DC654);
    fn_8010F410(lbl_803DC654, *(float *)(lbl_80310000 + 0x1CE4));
}

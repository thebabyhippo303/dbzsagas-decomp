/* AvatarControls__InitializeMovementState @ 0x800A3E20 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VT { char pad0[8]; short adjust; short pad0A; void (*fn)(void *, int *); } VT;
typedef struct Sub { char pad[4]; VT *vt; } Sub;
typedef struct AvatarObj { char pad[0x7D0]; Sub *sub; } AvatarObj;
typedef struct Cfg { char pad[0x58C]; int flag; } Cfg;
typedef struct Controls {
    AvatarObj *avatar;
    char pad4[4];
    char cb[0x7C - 8];
    Cfg *cfg;
    char pad80[0x178 - 0x80];
    float f178; int f17C;
    char pad180[0x19C - 0x180];
    int f19C;
    char pad1A0[4];
    int f1A4;
    float f1A8; float f1AC;
} Controls;
extern void Avatar__SetAnimScriptVarIntImpl(AvatarObj *, const char *, int, int);
extern void Avatar__SetControlCallbackState(AvatarObj *, void *);
extern void AvatarControls__ResetActionInputState(Controls *);
extern void fn_800B686C(void *, void *);
extern void fn_800A2C88(Controls *);
extern char lbl_8031F3F4[] __attribute__((section(".data")));
extern char lbl_8031F408[] __attribute__((section(".data")));
extern float lbl_8032025C __attribute__((section(".data")));
extern float lbl_803A35C0 __attribute__((section(".data")));

void AvatarControls__InitializeMovementState(Controls *self) {
    int arg;
    float v;
    Sub *sub;
    char *c = (char *)self->cfg;

    fn_800B686C(c + 0x68, c + 0x100);
    fn_800A2C88(self);
    Avatar__SetAnimScriptVarIntImpl(self->avatar, lbl_8031F3F4, 1, 0);
    Avatar__SetAnimScriptVarIntImpl(self->avatar, lbl_8031F408, 1, 0);
    Avatar__SetControlCallbackState(self->avatar, self->cb);
    if (self->cfg->flag != 0) {
        v = lbl_803A35C0;
    } else {
        v = lbl_8032025C;
    }
    self->f19C = 0;
    self->f1A4 = 0;
    self->f178 = v;
    self->f17C = -1;
    self->f1A8 = lbl_8032025C;
    self->f1AC = lbl_8032025C;
    arg = 1;
    sub = self->avatar->sub;
    sub->vt->fn((char *)sub + sub->vt->adjust, &arg);
    AvatarControls__ResetActionInputState(self);
}

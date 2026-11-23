/* FMV__Play @ 0x80032914 (size: 0x180, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
char * Script__PopString(void *, s32, void *);
void * Game__GetPlayerImpl(void *, s32);
s32 Game__GetConfiguredPlayerCount(void *);
s32 Game__IsPendulumModeImpl(s32);
void Audio__Pause(void *, s32);
void EffectHandle__SetFrontPriorityForGroup(s32);
void * Mem__New(u32);
void * FmvQueue__Construct(void *);
s32 FmvQueue__AddMovie(void *, char *, s32);
s32 FmvQueue__CreatePlayer(void *, s32);
s32 FmvQueue__PlayNext(void *, s32);
void FmvQueue__ClosePlayer(void *, s32);
void FmvQueue__Destroy(void *, s32);
void EffectHandle__ClearFrontPriorityForGroup(s32);
void Audio__Resume(void *, s32);
void Mem__DeleteArray(void *);
void AvatarControls__ClearCombatHoldInputs(void *);
extern char DVD__GetErrorMessage[] __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;
extern void *lbl_803DCC20;
extern void *lbl_803DCC74;

void FMV__Play(void *arg0, s32 arg1) {
    s32 sp8;
    s32 spC;
    s32 i;
    char *name;
    void *q;
    s32 pend;
    void *p;
    void *obj;
    void *vt;

    name = Script__PopString(arg0, arg1, &sp8);
    for (i = 0; i < Game__GetConfiguredPlayerCount(lbl_803DC3C0); i++) {
        p = (char *)Game__GetPlayerImpl(lbl_803DC3C0, i) + 0x94C;
        if (p != 0) {
            AvatarControls__ClearCombatHoldInputs(p);
        }
    }
    pend = Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C);
    if (pend == 0) {
        Audio__Pause(lbl_803DCC20, 1);
        EffectHandle__SetFrontPriorityForGroup(0);
        q = FmvQueue__Construct(Mem__New(0x18));
        if (q != 0) {
            if (FmvQueue__AddMovie(q, name, 1) != 0 && FmvQueue__CreatePlayer(q, (s32)DVD__GetErrorMessage) != 0) {
                spC = pend;
                do {
                } while (FmvQueue__PlayNext(q, (s32)&spC) != 0);
                FmvQueue__ClosePlayer(q, 1);
            }
            if (q != 0) {
                FmvQueue__Destroy(q, 3);
            }
        }
        EffectHandle__ClearFrontPriorityForGroup(0);
        Audio__Resume(lbl_803DCC20, 1);
        obj = lbl_803DCC74;
        vt = M2C_FIELD(obj, void **, 0x10);
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x14))((char *)obj + M2C_FIELD(vt, s16 *, 0x10));
        vt = M2C_FIELD(obj, void **, 0x10);
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
    }
    if (sp8 != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
}

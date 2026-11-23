/* CActorSoundEmitter__PlayVoice @ 0x801DEDD4 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32; typedef short s16; typedef unsigned char u8;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
typedef struct V3 { f32 x, y, z; } V3;
typedef struct Emitter { void *actor; s32 player; s32 voice; } Emitter;
void Debug__FormatMessage(char *, ...);
s32 Actor__FindBoneIdByName(void *, char *, u8 *);
void *CActor__GetBoneModelPosition(void *, void *, s32);
s32 SfxPlayer__StartVoice(s32, s32);
void SfxPlayer__StopVoice(s32, void *);
s32 SfxPlayer__IsVoiceActive(s32, s32);
void Sfx3DPlayer__SetVoiceStaticPosition(s32, s32, void *);
extern char lbl_80343C8C[] __attribute__((section(".data")));
extern char lbl_80343CDC[] __attribute__((section(".data")));
extern char lbl_80343D14[] __attribute__((section(".data")));
extern char lbl_80343D1C[] __attribute__((section(".data")));
extern char lbl_80343D54[] __attribute__((section(".data")));
extern f32 lbl_80343DA0 __attribute__((section(".data")));
void CActorSoundEmitter__PlayVoice(Emitter *self, char *name) {
    V3 pos;
    V3 *pp;
    struct { u8 b; u8 p[7]; } bn;
    V3 tmp;
    V3 *pt;
    s32 eff;
    void *vt;
    if (self->voice != 0) {
        if (SfxPlayer__IsVoiceActive(self->player, self->voice) == 0) {
            SfxPlayer__StopVoice(self->player, &self->voice);
        } else if (self->voice != 0) {
            Debug__FormatMessage(lbl_80343C8C, name);
            return;
        }
    }
    vt = F(self->player, void **, 0x3C);
    eff = ((s32 (*)(void *, char *))F(vt, void **, 0x14))((char *)self->player + F(vt, s16 *, 0x10), name);
    if (eff == 0) {
        Debug__FormatMessage(lbl_80343CDC, name);
    }
    pp = &pos;
    pos.x = lbl_80343DA0;
    pp->y = lbl_80343DA0;
    pp->z = lbl_80343DA0;
    if (Actor__FindBoneIdByName(self->actor, lbl_80343D14, &bn.b) != 0) {
        pt = &tmp;
        CActor__GetBoneModelPosition(pt, self->actor, bn.b);
        *pp = *pt;
    } else {
        Debug__FormatMessage(lbl_80343D1C);
    }
    Sfx3DPlayer__SetVoiceStaticPosition(self->player, eff, &pos);
    if (SfxPlayer__StartVoice(self->player, eff) == 0) {
        Debug__FormatMessage(lbl_80343D54, name);
    }
    self->voice = eff;
}

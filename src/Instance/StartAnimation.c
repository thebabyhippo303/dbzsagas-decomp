/* Instance__StartAnimation @ 0x802004AC (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    u16 f0;
    s16 f2;
    s16 f4;
    u16 pad6;
    u32 arg3;
    void *a12;
    void *a16;
} Chan;

typedef struct {
    char pad0[12];
    void *skeleton;
    char pad16[248];
    Chan chans[4];
    s32 weights[4];
    char pad360[12];
    void *mixer;
} Instance;

void Instance__StopAnimationChannel(void *, s32);
void Animation__ResetFrame(s16 *);
u32 Instance__RemapBoneMask(u32, u32 *);
void Instance__AnimationChannelCallback(void *, void *, s32, void *, s32);
M2C_UNK AnimMixer__AddAnimation(void *, void *, s32, s32, u32, void *, void *);

void Instance__StartAnimation(s32 arg0, Instance *inst, void *anim, s32 arg3, s32 arg4, s32 arg5, s32 chanIdx) {
    u32 mask = 0xFFFFFFFFu;
    Chan *chan;

    Instance__StopAnimationChannel(inst, chanIdx);
    if (arg4 == 0) {
        mask = M2C_FIELD(anim, u32 *, 0x18);
    }
    inst->chans[chanIdx].a16 = anim;
    if (arg3 & 0x4000) {
        if (inst->chans[chanIdx].a12 == anim) {
            arg3 |= 0x20;
        } else {
            arg3 &= 0xFFFFFFDFu;
        }
    }
    if (!(arg3 & 0x80)) {
        inst->chans[chanIdx].a12 = anim;
    }
    chan = &inst->chans[chanIdx];
    inst->chans[chanIdx].arg3 = arg3;
    Animation__ResetFrame((s16 *)chan);
    if (arg3 & 0x10) {
        mask = Instance__RemapBoneMask(mask, M2C_FIELD(inst->skeleton, u32 **, 0xC));
    }
    AnimMixer__AddAnimation(inst->mixer, Instance__AnimationChannelCallback, arg0, arg5, mask, chan, &inst->weights[chanIdx]);
}

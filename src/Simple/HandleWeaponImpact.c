/* Simple__HandleWeaponImpact @ 0x802C7FFC (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[120]; s32 f120; char pad2[252 - 124]; s32 flag252; } ImpactSub;
typedef struct { char pad[132]; ImpactSub *sub; char pad2[412 - 136]; char f412; } ImpactActor;
typedef struct { s32 f0; s32 f1; s32 f2; s32 f3; s32 f4; s32 f5; s32 f6; } ImpactBlock;

void EventDispatcher__Send(void *, s32, s32, s32, s32);
void EventDispatcher__SendToActor(void *, s32, s32, s32, s32);
extern char lbl_803B1DDC[];
extern s32 lbl_803DCF18;
extern s32 lbl_803DCF1C;

s32 Simple__HandleWeaponImpact(ImpactActor *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    ImpactBlock blk;
    if (a0->sub->flag252 != 0) {
        blk.f0 = a2;
        blk.f1 = a6;
        blk.f2 = (s32)a0;
        blk.f5 = a0->sub->f120;
        blk.f3 = a3;
        blk.f4 = a5;
        blk.f6 = a4;
        EventDispatcher__Send(lbl_803B1DDC, lbl_803DCF18, (s32)&blk, a1, (s32)&a0->f412);
    }
    EventDispatcher__SendToActor(lbl_803B1DDC, lbl_803DCF1C, 0, (s32)a0, a1);
    return 1;
}

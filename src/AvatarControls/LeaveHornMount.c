/* AvatarControls__LeaveHornMount @ 0x8009F808 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32; typedef unsigned char u8;
typedef struct V3 { f32 x, y, z; } V3;
typedef struct W3 { s32 a, b, c; } W3;
typedef struct Ev { s32 owner; W3 pos; f32 f50; f32 f54; f32 f58; f32 f5c; s32 one; } Ev;
typedef struct Blk { char id[8]; V3 bone; } Blk;
typedef struct Ac { char *actor; } Ac;
s32 Actor__FindBoneIdByName(void *, char *, char *);
void *CActor__GetBoneWorldPosition(void *, void *, s32);
void fn_80251510(void *, s32, void *, void *, s32);
void fn_802A9180(void *, void *, f32, f32, f32, f32, f32);
void CmdCon__Print(void *, char *, ...);
void Avatar__StopSecondaryAnimationIfId(void *, s32);
void AvatarControls__ReleaseHornGrabbedAvatar(void *);
extern char lbl_8031E9D0[] __attribute__((section(".data")));
extern char lbl_8031FFB4[] __attribute__((section(".data")));
extern f32 lbl_8031FFC8 __attribute__((section(".data")));
extern f32 lbl_8031FFCC __attribute__((section(".data")));
extern f32 lbl_8031FFD0 __attribute__((section(".data")));
extern f32 lbl_8031FFD4 __attribute__((section(".data")));
extern f32 lbl_8031FFD8 __attribute__((section(".data")));
extern f32 lbl_8031FFDC __attribute__((section(".data")));
extern char lbl_803B1DDC[] __attribute__((section(".data")));
extern void *lbl_803DCC10;
extern void *lbl_803DCEEC;

void AvatarControls__LeaveHornMount(Ac *self) {
    W3 sp8;
    V3 sp18;
    Blk blk;
    Ev ev;
    char *p44;
    char *a;
    f32 f30;
    f32 tz;
    f32 ty;
    f32 tx;
    f32 f31;

    a = self->actor;
    p44 = a + 0x44;
    tx = *(f32 *)(p44 + 0x18);
    ty = *(f32 *)(p44 + 0x1C);
    tz = *(f32 *)(p44 + 0x20);
    sp18.y = ty;
    sp18.x = tx;
    sp18.z = tz;
    Actor__FindBoneIdByName(a, lbl_8031E9D0, blk.id);
    CActor__GetBoneWorldPosition(&blk.bone, self->actor, *(u8 *)blk.id);
    sp8 = *(W3 *)&blk.bone;
    ev.owner = *(s32 *)(self->actor + 0x84);
    ev.pos = sp8;
    f31 = lbl_8031FFC8;
    f30 = lbl_8031FFCC;
    ev.f58 = lbl_8031FFD0;
    ev.one = 1;
    ev.f54 = f31;
    ev.f50 = f30;
    ev.f5c = f31;
    fn_80251510(lbl_803B1DDC, 0x30016, &ev, self->actor, 0);
    *(W3 *)&blk.bone = *(W3 *)(self->actor + 0x38);
    fn_802A9180(lbl_803DCEEC, &blk.bone, f30, lbl_8031FFD4, lbl_8031FFD8, f31, lbl_8031FFDC);
    CmdCon__Print(lbl_803DCC10, lbl_8031FFB4);
    Avatar__StopSecondaryAnimationIfId(self->actor, -1);
    AvatarControls__ReleaseHornGrabbedAvatar(self);
}

/* Avatar__MarkDeadAndCreditKill @ 0x8008DADC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void EventDispatcher__Broadcast(void *, s32, s32, s32);
void Actor__MarkForDeath(void *, f32);
s32 Game__GetConfiguredPlayerCount(void *);
s32 Rand__RangeInt(void *, s32, s32);
void * Game__GetPlayerImpl(void *, s32);
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern char lbl_803DD634[] __attribute__((section(".sdata")));
void Avatar__MarkDeadAndCreditKill(void *self, f32 time) {
    void *owner;
    void *player;
    s32 idx;
    EventDispatcher__Broadcast(&lbl_803B1DDC, 0x20106, 0, self);
    Actor__MarkForDeath(self, time);
    owner = M2C_FIELD(self, void **, 0x1A7C);
    if (owner != NULL) {
        M2C_FIELD(owner, s32 *, 0x1AC4) = M2C_FIELD(owner, s32 *, 0x1AC4) + 1;
        return;
    }
    if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 1) {
        player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        M2C_FIELD(player, s32 *, 0x1AC4) = M2C_FIELD(player, s32 *, 0x1AC4) + 1;
    } else {
        idx = Rand__RangeInt(&lbl_803DD634, 0, 1);
        player = Game__GetPlayerImpl(lbl_803DC3C0, idx);
        M2C_FIELD(player, s32 *, 0x1AC4) = M2C_FIELD(player, s32 *, 0x1AC4) + 1;
    }
}

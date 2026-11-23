/* AI__SetState @ 0x800629DC (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned short u16; typedef short s16; typedef float f32;
void Actor__ToProtagonistCastImpl(void *);
s32 Cast__IsProtagonist(void *);
extern f32 lbl_8031E49C __attribute__((section(".data")));
typedef struct Vt { char p0[0x60]; s16 adj; char p1[2]; void (*fn)(void *, s32); } Vt;
typedef struct Tgt { char p0[0x34]; Vt *vt; char p1[0x288 - 0x38]; f32 hp; f32 mhp; char p2[0x7E4 - 0x290]; s32 f7e4; } Tgt;
typedef struct AI { char p0[0x7C]; s32 state; char p1[0xC8 - 0x80]; s32 c8; char p2[0x390 - 0xCC]; Tgt *tgt; } AI;
#define F(e,t,o) (*(t)((char *)(e) + (o)))

void AI__SetState(AI *self, s32 st) {
    Tgt *t = self->tgt;
    self->state = st;
    if ((t->hp / t->mhp) != lbl_8031E49C && t->f7e4 == 0 && F(self, s32 *, 0x544) == 0 && F(self, s32 *, 0x550) == 0 && F(self, s32 *, 0x564) == 0 && F(self, s32 *, 0x568) == 0 && F(self, s32 *, 0x56C) == 0 && F(self, s32 *, 0x554) == 0 && F(self, s32 *, 0x558) == 0 && F(self, s32 *, 0x55C) == 0 && F(self, s32 *, 0x560) == 0 && st == 3 && self->c8 == 7) {
        if (F(F(t, void **, 0x84), u16 *, 2) & 1) {
            Vt *v = t->vt;
            v->fn((char *)t + v->adj, 0);
        }
        if (Cast__IsProtagonist(self->tgt) == 0) {
            Actor__ToProtagonistCastImpl(self->tgt);
        }
    }
}

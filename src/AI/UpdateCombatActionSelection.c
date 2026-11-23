/* AI__UpdateCombatActionSelection @ 0x80061E64 (size: 0x354, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void AI__SetState(void *, s32);
void * Actor__GetStateHandler(u32);
void AI__ComputeTargetingInfo(void *, void *);
void * Game__FindNearestEligibleAvatar(void *);
s32 fn_8023A97C(void *, int);
void AI__SelectCombatActionState(void *);
extern f32 lbl_8031E454 __attribute__((section(".data")));
extern f32 lbl_8031E458 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void AI__UpdateCombatActionSelection(void *arg0) {
    u8 sp8[32];
    s32 mode;
    s32 state = M2C_FIELD(arg0, s32 *, 0x74);
    s32 zero = 0;
    s32 sub;
    s32 v;
    s16 h;
    void *found;

    M2C_FIELD(arg0, s32 *, 0x124) = zero;
    if ((state == 0x2E) || (state == 0x7A)) {
        return;
    }
    if ((mode = M2C_FIELD(arg0, s32 *, 0xC8)) != 7) {
        goto L29;
    }
    if ((sub = M2C_FIELD(arg0, s32 *, 0xCC)) == 0xA) {
        if (state == 0x60) {
            M2C_FIELD(arg0, s32 *, 0xC0) = zero;
            return;
        }
    }
    if (sub != 3) {
        goto L29;
    }
    if (M2C_FIELD(arg0, s32 *, 0x74) == 0x7B) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0x15) {
        void *t = M2C_FIELD(arg0, void **, 0x390);
        if (!((M2C_FIELD(t, f32 *, 0x288) / M2C_FIELD(t, f32 *, 0x28C)) > lbl_8031E454)) {
            if ((mode == 7) && (M2C_FIELD(arg0, s32 *, 0xCC) == 3) && (M2C_FIELD(arg0, s32 *, 0x74) != 0x6E)) {
                found = Game__FindNearestEligibleAvatar(t);
                AI__SetState(arg0, 0);
                if (found == NULL) {
                    v = 0x86;
                } else {
                    s16 h2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(found, void **, 0x84), void **, 0xF4), s16 *, 0xA);
                    if (h2 == 0x300) {
                        v = 0x6E;
                    } else {
                        v = 0x86;
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x74) = v;
                M2C_FIELD(arg0, s32 *, 0xC0) = 0;
                M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler((u32)M2C_FIELD(arg0, s32 *, 0x74));
                M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
                return;
            }
        }
    }
L29:
    if ((mode == 5) && (M2C_FIELD(arg0, s32 *, 0xCC) == 2)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4BC) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xF4) != 0) {
        if (mode != 7) {
            return;
        }
        {
            void *p = M2C_FIELD(arg0, void **, 0x57C);
            s16 off = M2C_FIELD(p, s16 *, 0x60);
            s32 (*fn)(void *) = M2C_FIELD(p, s32 (**)(void *), 0x64);
            if (fn((char *)arg0 + off) == 0) {
                return;
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xD4) != 0) {
        return;
    }
    state = M2C_FIELD(arg0, s32 *, 0x74);
    if ((state == 0x3E) || (state == 0x3C) || (state == 0x3A) || (state == 0x83) || (state == 0x84) || (state == 0x85)) {
        return;
    }
    if (state == 0x78) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        return;
    }
    {
        void *t2 = M2C_FIELD(arg0, void **, 0x390);
        void *u = M2C_FIELD(t2, void **, 0x84);
        void *w = M2C_FIELD(u, void **, 0xF4);
        h = M2C_FIELD(w, s16 *, 0xA);
        if (((u32)(h - 774)) <= 1U) {
            return;
        }
        if ((h == 777) || (h == 771)) {
            return;
        }
        if ((M2C_FIELD(arg0, s32 *, 0xCC) != 3) || (M2C_FIELD(arg0, s32 *, 0xC8) != 0)) {
            goto L166;
        }
        found = Game__FindNearestEligibleAvatar(t2);
        if (found == NULL) {
            goto L166;
        }
        if (((s16)fn_8023A97C(M2C_FIELD(found, void **, 0x84), 0)) != 774) {
            goto L166;
        }
        if ((M2C_FIELD(arg0, s32 *, 0x78) == 0x51) || (M2C_FIELD(arg0, s32 *, 0x74) == 0x51)) {
            goto L166;
        }
        AI__ComputeTargetingInfo(sp8, arg0);
        if (M2C_FIELD(sp8, f32 *, 24) >= lbl_8031E458) {
            goto L166;
        }
        AI__SetState(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x74) = 0x51;
        {
            void *hh2 = Actor__GetStateHandler(0x51U);
            M2C_FIELD(arg0, void **, 0x388) = hh2;
            M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
        }
        return;
L166:
        if (M2C_FIELD(arg0, s32 *, 0x74) == 0x1F) {
            M2C_FIELD(arg0, s32 *, 0xC0) = 0;
            return;
        }
        if (((M2C_FIELD(arg0, s32 *, 0x4F0) != 0) || (M2C_FIELD(arg0, s32 *, 0xC0) != 0)) && (M2C_FIELD(arg0, s32 *, 0x4E8) == 0) && (M2C_FIELD(arg0, s32 *, 0x564) == 0) && (M2C_FIELD(arg0, s32 *, 0x568) == 0) && (M2C_FIELD(arg0, s32 *, 0x56C) == 0) && (M2C_FIELD(arg0, s32 *, 0x550) == 0) && (M2C_FIELD(arg0, s32 *, 0x554) == 0) && (M2C_FIELD(arg0, s32 *, 0x558) == 0) && (M2C_FIELD(arg0, s32 *, 0x55C) == 0) && (M2C_FIELD(arg0, s32 *, 0x560) == 0)) {
            AI__SelectCombatActionState(arg0);
            M2C_FIELD(arg0, s32 *, 0x124) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        return;
    }
}

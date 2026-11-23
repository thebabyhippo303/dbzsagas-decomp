/* Bink__AdvanceFrame @ 0x802ECA64 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */

typedef int s32;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void Bink__ServiceSound(void *);
s32 RADTimerRead(void);
typedef void (*BinkFrameFn)(void *, s32, u32, s32, u32);
void Bink__AdvanceFrame(void *bink, s32 frame) {
    s32 idx = frame;
    s32 hasSound;
    s32 timer;
    s32 hdr;
    u32 *table;
    u32 *table_b;
    u32 arg5;
    u32 nxt;
    BinkFrameFn fn;
    if (idx != 0) idx -= 1;
    hasSound = M2C_FIELD(bink, s32 *, 0x2F8);
    M2C_FIELD(bink, s32 *, 0x308) = 0;
    if (hasSound != 0) Bink__ServiceSound(bink);
    M2C_FIELD(bink, s32 *, 0x10) = M2C_FIELD(bink, s32 *, 0xC);
    if (idx == 0) {
        timer = RADTimerRead();
        if (M2C_FIELD(bink, s32 *, 0x2F0) == 0) M2C_FIELD(bink, s32 *, 0x2F0) = timer;
        if ((u32)(timer - M2C_FIELD(bink, s32 *, 0x2F0)) > 300000u) {
            M2C_FIELD(bink, s32 *, 0x2F0) = timer;
            M2C_FIELD(bink, s32 *, 0x2F4) = 1;
        }
    }
    hdr = M2C_FIELD(bink, s32 *, 0x108);
    if (hdr != 0) {
        u32 a;
        u32 b;
        table = M2C_FIELD(bink, u32 **, 0x10C);
        a = table[idx];
        b = table[0];
        a &= ~1u;
        b &= ~1u;
        M2C_FIELD(bink, s32 *, 0x104) = hdr + (s32)(a - b);
    } else {
        table_b = M2C_FIELD(bink, u32 **, 0x10C);
        fn = M2C_FIELD(bink, BinkFrameFn *, 0x114);
        arg5 = table_b[idx];
        nxt = table_b[idx + 1];
        arg5 &= ~1u;
        nxt &= ~1u;
        fn((char *)bink + 0x110, idx, arg5, M2C_FIELD(bink, s32 *, 0x104), nxt - arg5);
    }
    if (M2C_FIELD(bink, s32 *, 0x2F8) != 0) Bink__ServiceSound(bink);
    M2C_FIELD(bink, s32 *, 0xC) = idx + 1;
}

/* BinkWait @ 0x802EEE74 (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define F(p, t, o) (*(t *)((char *)(p) + (o)))
#define NULL 0
typedef void (*cb_t)(void *);

void Bink__StartPlaybackTimer(void *);
void Bink__EndTimedSection(void *, s32);
void Bink__UpdateSlowestFrames(void *, u32);
s32 RADTimer__TryLockCallback(s32, void *);
void RADTimer__UnlockCallback(s32, void *);
void Bink__ServiceSound(void *);
u32 RADTimerRead(void);
s32 mult64anddiv(s32, s32, s32);
s32 mult64andshift(s32, s32, s32);
extern s32 lbl_8037C23C __attribute__((section(".data")));

s32 BinkWait(void *arg0) {
    s32 v280;
    u32 timer;
    s32 d;
    s32 e;
    s32 left;
    u32 a;
    u32 b;

    if (arg0 == NULL) {
        return 0;
    }
    if ((F(arg0, s32, 0x270) == 0) && (F(arg0, s32, 0xFC) == 0)) {
        return 0;
    }
    if (F(arg0, s32, 0x1C) != 0) {
        return 0;
    }
    v280 = F(arg0, s32, 0x280);
    if (v280 == 0) {
        Bink__StartPlaybackTimer(arg0);
        v280 = F(arg0, s32, 0x280);
    }
    if (F(arg0, s32, 0x2F8) != 0) {
        Bink__ServiceSound(arg0);
    }
    timer = RADTimerRead();
    Bink__EndTimedSection(arg0, timer);
    Bink__UpdateSlowestFrames(arg0, timer);
    if ((F(arg0, s32, 0xFC) != 0) || ((F(arg0, s32, 0x2F8) != 0) && (F(arg0, s32, 0x2A0) == 0))) {
        goto tail;
    }
    if (F(arg0, s32, 0x14) == 0) {
        return 0;
    }
    d = mult64anddiv((F(arg0, s32, 0x270) - F(arg0, s32, 0x284)) * 1000, F(arg0, s32, 0x18), F(arg0, s32, 0x14));
    e = mult64andshift(d, F(F(arg0, void *, 0x300), s32, 0x68), 16);
    left = (s32)timer - (v280 + F(arg0, s32, 0x338));
    if (left < e) {
        goto tail;
    }
    left = left - e;
    if (left > F(arg0, s32, 0x288)) {
        if (F(arg0, s32, 0x2F8) == 0) {
            F(arg0, s32, 0x280) = (s32)timer;
            F(arg0, s32, 0x284) = F(arg0, s32, 0x270) - 1;
        } else {
            F(arg0, s32, 0x338) = left;
            F(arg0, s32, 0x33C) = mult64anddiv(left, F(arg0, s32, 0x18), F(arg0, s32, 0x14));
        }
    }
    a = (u32)F(arg0, s32, 0x338);
    b = (u32)F(arg0, s32, 0x33C);
    if (a < b) {
        b = 0;
    } else {
        b = a - b;
    }
    F(arg0, s32, 0x338) = (s32)b;
    return 0;
tail:
    if (F(arg0, s32, 0x108) != 0) {
        return 1;
    }
    if (RADTimer__TryLockCallback(lbl_8037C23C, (char *)arg0 + 0x20C) != 0) {
        F(arg0, cb_t, 0x120)((char *)arg0 + 0x110);
        RADTimer__UnlockCallback(lbl_8037C23C, (char *)arg0 + 0x20C);
    }
    return 1;
}

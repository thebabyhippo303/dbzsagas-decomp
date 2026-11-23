/* BinkPause @ 0x802EF034 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Bink__EndTimedSection(void *, s32);
void Bink__ServiceSound(void *);
u32 RADTimerRead(void);
void Bink__UpdateSlowestFrames(void *, u32);

typedef void (*TrackFn)(void *, s32);

s32 BinkPause(void *arg0, s32 arg1) {
    u32 i;
    s32 off;
    u32 t;
    TrackFn fn;
    void *track;
    void *base;

    if (arg0 == NULL) {
        return 0;
    }
    t = RADTimerRead();
    Bink__EndTimedSection(arg0, t);
    Bink__UpdateSlowestFrames(arg0, t);
    if ((arg1 == 0) && (M2C_FIELD(arg0, s32 *, 0xFC) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x280) = arg1;
        M2C_FIELD(arg0, s32 *, 0x338) = arg1;
    }
    i = 0U;
    M2C_FIELD(arg0, s32 *, 0xFC) = arg1;
    if (i < M2C_FIELD(arg0, u32 *, 0x2F8)) {
        off = 0;
        do {
            i += 1;
            base = (void *)(off + M2C_FIELD(arg0, s32 *, 0x300));
            fn = M2C_FIELD(base, TrackFn *, 0x14);
            track = base;
            off += 0x178;
            fn(track, arg1);
        } while (i < M2C_FIELD(arg0, u32 *, 0x2F8));
    }
    if ((M2C_FIELD(arg0, s32 *, 0x270) != 0) && (M2C_FIELD(arg0, s32 *, 0x2F8) != 0)) {
        Bink__ServiceSound(arg0);
    }
    return M2C_FIELD(arg0, s32 *, 0xFC);
}

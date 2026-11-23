/* AnimationTrack__Sample @ 0x8023ACDC (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned short u16;
typedef int s32;
typedef float f32;
typedef struct { s32 w[10]; } D40;
extern char lbl_803AD8E8[];
f32 AnimationTrack__EvaluateChannel(void *, s32);
void Quaternion__Normalize(void *);
s32 AnimationTrack__Sample(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    char *b = (char *)arg0;
    u16 flags = *(u16 *)arg1;
    void *ch = *(void **)((char *)arg1 + 8);
    f32 *q;
    s32 ret;
    *(D40 *)arg0 = *(D40 *)lbl_803AD8E8;
    ret = 0;
    if ((flags & 7) != 0) {
        ret = 1;
        if ((flags & 1) != 0) { *(f32 *)(b + 0) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
        if ((flags & 2) != 0) { *(f32 *)(b + 4) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
        if ((flags & 4) != 0) { *(f32 *)(b + 8) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
    }
    if ((flags & 0x38) != 0) {
        if ((flags & 8) != 0) { *(f32 *)(b + 12) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
        if ((flags & 0x10) != 0) { *(f32 *)(b + 16) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
        if ((flags & 0x20) != 0) { *(f32 *)(b + 20) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
    }
    if ((flags & 0x40) != 0) { *(f32 *)(b + 24) = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
    q = (f32 *)(b + 24);
    if ((flags & 0x80) != 0) { q[1] = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
    if ((flags & 0x100) != 0) { q[2] = AnimationTrack__EvaluateChannel(ch, arg2); ch = (char *)ch + 12; }
    if ((flags & 0x200) != 0) { *(f32 *)(b + 36) = AnimationTrack__EvaluateChannel(ch, arg2); }
    if (arg3 != 0) { *(f32 *)(b + 24) = -*(f32 *)(b + 24); *(f32 *)(b + 36) = -*(f32 *)(b + 36); *(f32 *)(b + 0) = -*(f32 *)(b + 0); }
    Quaternion__Normalize(q);
    return ret;
}

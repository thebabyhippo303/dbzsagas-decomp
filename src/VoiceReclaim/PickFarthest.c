/* VoiceReclaim__PickFarthest @ 0x8019BB7C (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Voice3D__GetWorldPosition(s32);
s32 VoiceReclaim__IsFarther(s32, s32, s32, f32, f32);
s32 SoundGroup__NextReclaimCandidateAfter(void *, void *);
s32 SoundGroup__NextReclaimCandidate(void *, void *);
M2C_UNK fn_8019B8AC(s32, s32);
extern f32 lbl_8033FB78 __attribute__((section(".data")));

s32 VoiceReclaim__PickFarthest(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void *obj;
    void *vt2;
    void *vt;
    s32 cur;
    s32 best;
    f32 best_dist;
    f32 dist;

    best_dist = lbl_8033FB78;
    best = 0;
    for (cur = fn_8019B8AC((s32) arg0, SoundGroup__NextReclaimCandidate(arg0, arg2)); cur != 0;
         cur = fn_8019B8AC((s32) arg0, SoundGroup__NextReclaimCandidateAfter(arg0, (void *) cur))) {
        vt = M2C_FIELD(arg1, void **, 0x60);
        vt2 = (char *)vt + 0xC8;
        obj = (char *)arg1 + M2C_FIELD(vt, s16 *, 0xC8);
        dist = M2C_FIELD(vt2, f32 (**)(void *, s32), 4)(obj, Voice3D__GetWorldPosition(cur));
        if (VoiceReclaim__IsFarther((s32) arg0, cur, best, dist, best_dist) != 0) {
            best_dist = dist;
            best = cur;
        }
    }
    if (arg3 == 0) {
        return best;
    }
    vt = M2C_FIELD(arg1, void **, 0x60);
    vt2 = (char *)vt + 0xC8;
    obj = (char *)arg1 + M2C_FIELD(vt, s16 *, 0xC8);
    if (VoiceReclaim__IsFarther((s32) arg0, best, arg3, best_dist, M2C_FIELD(vt2, f32 (**)(void *, s32), 4)(obj, Voice3D__GetWorldPosition(fn_8019B8AC((s32) arg0, arg3)))) != 0) {
        return best;
    }
    return 0;
}

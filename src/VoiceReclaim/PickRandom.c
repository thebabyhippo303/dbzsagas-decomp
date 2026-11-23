/* VoiceReclaim__PickRandom @ 0x8019B9C4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundGroup__CountReclaimCandidates(void *, s32);
s32 rand(void);
s32 SoundGroup__NextReclaimCandidateAfter(void *, s32);
s32 SoundGroup__NextReclaimCandidate(void *, s32);
void *VoiceReclaim__PickRandom(void *arg0, s32 arg1, s32 arg2) {
    s32 count;
    s32 n;
    s32 cand;
    s32 result;

    count = SoundGroup__CountReclaimCandidates(arg0, arg2);
    if (count != 0) {
        n = rand() % count;
        cand = SoundGroup__NextReclaimCandidate(arg0, arg2);
        while (cand != 0) {
            n -= 1;
            if (n + 1 == 0) {
                return (void *) cand;
            }
            cand = SoundGroup__NextReclaimCandidateAfter(arg0, cand);
        }
    }
    return 0;
}

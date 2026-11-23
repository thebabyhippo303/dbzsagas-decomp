/* SoundGroup__NextReclaimCandidateAfter @ 0x8019B878 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 SoundGroup__NextReclaimCandidate(void *, void *);
s32 SoundGroup__NextReclaimCandidateAfter(void *arg0, void *arg1) {
    if ((s32)arg1 == 0) return 0;
    return SoundGroup__NextReclaimCandidate(arg0, M2C_FIELD(arg1, void **, 80));
}

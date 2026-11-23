/* Audio__Pause @ 0x8018FEA0 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoundGroup__PauseVoices(void *);
M2C_UNK StreamQueue__SetPaused(s32, s32);
void Audio__Pause(void *arg0, s32 arg1) {
    s32 i;
    s32 idx;
    void *vec;
    void **elem;

    M2C_FIELD(arg0, s32 *, 0x184) = 1;
    if (arg1 != 0) {
        StreamQueue__SetPaused((s32) arg0, 1);
    }
    StreamQueue__SetPaused((s32) (0xCC + arg0), 1);
    i = 0;
    if (i < M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4)) {
        do {
            vec = M2C_FIELD(arg0, void **, 0x188);
            idx = i;
            if (i < 0) {
                idx = M2C_FIELD(vec, s32 *, 4) - 1;
            }
            if (idx >= M2C_FIELD(vec, s32 *, 4) || M2C_FIELD(vec, s32 *, 4) == 0) {
                elem = NULL;
            } else {
                elem = M2C_FIELD(vec, void ***, 0) + idx;
            }
            i++;
            SoundGroup__PauseVoices(*elem);
        } while (i < M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4));
    }
}

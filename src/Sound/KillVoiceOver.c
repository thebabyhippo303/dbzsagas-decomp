/* Sound__KillVoiceOver @ 0x8002C228 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Sound__KillVoiceOver @ 0x8002C228 (0x48). ProDG -O2. */
extern void *lbl_803DCC20;
extern void StreamQueue__Kill(void *voice);

void Sound__KillVoiceOver(void) {
    char *state = (char *)lbl_803DCC20;
    char *voice = state + 0xCC;
    int count = *(int *)(state + 0x178);
    int active = 1;
    if (*(int *)(voice + 0x80) == 0) {
        active = 0;
    }
    if (active + count > 0) {
        StreamQueue__Kill(voice);
    }
}

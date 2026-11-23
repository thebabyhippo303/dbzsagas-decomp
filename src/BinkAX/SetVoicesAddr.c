/* BinkAX__SetVoicesAddr @ 0x802EB2A8 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct __attribute__((packed)) { char pad[0x1B2]; u32 cur; } BinkVoice;
typedef struct {
    char pad[0x50];
    BinkVoice *v0;
    BinkVoice *v1;
    u32 a58;
    u32 a5C;
    u32 shift;
    u32 len;
} BinkAX;
void AXSetVoiceAddr(void *voice, u16 *addr);
void BinkAX__SetVoicesAddr(BinkAX *s, s32 arg1, s32 arg2) {
    u16 abuf[8];
    u32 start;
    u32 end;
    u32 cur;
    abuf[0] = 1;
    abuf[1] = (arg1 == 16) ? 10 : 25;
    start = s->a58 >> s->shift;
    end = ((s->a58 + s->len) >> s->shift) - 1;
    if (arg2 == 0) {
        cur = s->v0->cur;
    } else {
        cur = start;
    }
    abuf[2] = start >> 16;
    abuf[3] = start;
    abuf[4] = end >> 16;
    abuf[5] = end;
    abuf[6] = cur >> 16;
    abuf[7] = cur;
    AXSetVoiceAddr(s->v0, abuf);
    if (s->v1 != 0) {
        start = s->a5C >> s->shift;
        end = ((s->a5C + s->len) >> s->shift) - 1;
        cur = start;
        if (arg2 == 0) {
            cur = s->v1->cur;
        }
        abuf[2] = start >> 16;
        abuf[3] = start;
        abuf[4] = end >> 16;
        abuf[5] = end;
        abuf[6] = cur >> 16;
        abuf[7] = cur;
        AXSetVoiceAddr(s->v1, abuf);
    }
}

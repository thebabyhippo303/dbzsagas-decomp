/* SoundDriver__ResumeStreams @ 0x80193CD0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 StreamTable__GetCount(s32);
s32 StreamTable__GetStream(s32, s32);
M2C_UNK fn_80197234(s32);

void SoundDriver__ResumeStreams(void **arg0) {
    s32 i;
    s32 j;
    s32 idx;
    s32 st;
    s32 *elem;
    void *vec;

    i = 0;
    if (i < M2C_FIELD(*arg0, s32 *, 4)) {
    do {
        vec = *arg0;
        idx = i;
        if (i < 0) {
            idx = M2C_FIELD(vec, s32 *, 4) - 1;
        }
        if (idx >= M2C_FIELD(vec, s32 *, 4) || M2C_FIELD(vec, s32 *, 4) == 0) {
            elem = NULL;
        } else {
            elem = M2C_FIELD(vec, s32 **, 0) + idx;
        }
        {
            s32 tbl = *elem;

            for (j = 0; j < StreamTable__GetCount(tbl); j++) {
                st = StreamTable__GetStream(tbl, j);
                if (st != 0) {
                    fn_80197234(st);
                }
            }
        }
        i++;
    } while (i < M2C_FIELD(*arg0, s32 *, 4));
    }
}

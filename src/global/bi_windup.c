/* bi_windup @ 0x8025BDD8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char Byte; typedef unsigned short ush; typedef int s32; typedef unsigned int u32;
typedef struct { char pad0[8]; Byte *pending_buf; char pad12[8]; u32 pending; char pad24[0x1698]; ush bi_buf; s32 bi_valid; } DeflateState;
void bi_windup(DeflateState *s) {
    if (s->bi_valid > 8) {
        s->pending_buf[s->pending++] = ((Byte *)&s->bi_buf)[1];
        s->pending_buf[s->pending++] = (Byte)(s->bi_buf >> 8);
    } else if (s->bi_valid > 0) {
        s->pending_buf[s->pending++] = ((Byte *)&s->bi_buf)[1];
    }
    s->bi_buf = 0;
    s->bi_valid = 0;
}
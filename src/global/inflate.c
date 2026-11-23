/* inflate @ 0x802591D8 (size: 0x5A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned long uLong;
typedef unsigned int uInt;

typedef struct z_stream_s {
    u8 *next_in;
    uInt avail_in;
    uLong total_in;
    u8 *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct inflate_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    s32 data_type;
    uLong adler;
} z_stream;

struct inflate_state {
    s32 mode;
    union {
        uInt method;
        struct {
            uLong was;
            uLong need;
        } check;
        uInt marker;
    } sub;
    s32 nowrap;
    uInt wbits;
    void *blocks;
};

enum { METHOD, FLAG, DICT4, DICT3, DICT2, DICT1, DICT0, BLOCKS, CHECK4, CHECK3, CHECK2, CHECK1, DONE, BAD };

s32 inflate_blocks(void *, z_stream *, s32);
void inflate_blocks_reset(void *, z_stream *, uLong *);
extern char lbl_80350000[] __attribute__((section(".data")));

#define NEEDBYTE                \
    {                           \
        if (z->avail_in == 0) { \
            return r;           \
        }                       \
        r = f;                  \
    }
#define NEXTBYTE (z->avail_in--, z->total_in++, *z->next_in++)

s32 inflate(z_stream *z, s32 f) {
    s32 r;
    uInt b;

    if (z == NULL || z->state == NULL || z->next_in == NULL) {
        return -2;
    }
    f = f == 4 ? -5 : 0;
    r = -5;
    while (1) {
        switch (z->state->mode) {
        case METHOD:
            NEEDBYTE
            if (((z->state->sub.method = NEXTBYTE) & 0xf) != 8) {
                z->state->mode = BAD;
                z->msg = "unknown compression method";
                z->state->sub.marker = 5;
                break;
            }
            if ((z->state->sub.method >> 4) + 8 > z->state->wbits) {
                z->state->mode = BAD;
                z->msg = "invalid window size";
                z->state->sub.marker = 5;
                break;
            }
            z->state->mode = FLAG;
        case FLAG:
            NEEDBYTE
            b = NEXTBYTE;
            if (((z->state->sub.method << 8) + b) % 31) {
                z->state->mode = BAD;
                z->msg = "incorrect header check";
                z->state->sub.marker = 5;
                break;
            }
            if (!(b & 0x20)) {
                z->state->mode = BLOCKS;
                break;
            }
            z->state->mode = DICT4;
        case DICT4:
            NEEDBYTE
            z->state->sub.check.need = (uLong)NEXTBYTE << 24;
            z->state->mode = DICT3;
        case DICT3:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE << 16;
            z->state->mode = DICT2;
        case DICT2:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE << 8;
            z->state->mode = DICT1;
        case DICT1:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE;
            z->adler = z->state->sub.check.need;
            z->state->mode = DICT0;
            return 2;
        case DICT0:
            z->state->mode = BAD;
            z->msg = "need dictionary";
            z->state->sub.marker = 0;
            return -2;
        case BLOCKS:
            r = inflate_blocks(z->state->blocks, z, r);
            if (r == -3) {
                z->state->mode = BAD;
                z->state->sub.marker = 0;
                break;
            }
            if (r == 0) {
                r = f;
            }
            if (r != 1) {
                return r;
            }
            r = f;
            inflate_blocks_reset(z->state->blocks, z, &z->state->sub.check.was);
            if (z->state->nowrap) {
                z->state->mode = DONE;
                break;
            }
            z->state->mode = CHECK4;
        case CHECK4:
            NEEDBYTE
            z->state->sub.check.need = (uLong)NEXTBYTE << 24;
            z->state->mode = CHECK3;
        case CHECK3:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE << 16;
            z->state->mode = CHECK2;
        case CHECK2:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE << 8;
            z->state->mode = CHECK1;
        case CHECK1:
            NEEDBYTE
            z->state->sub.check.need += (uLong)NEXTBYTE;
            if (z->state->sub.check.was != z->state->sub.check.need) {
                z->state->mode = BAD;
                z->msg = "incorrect data check";
                z->state->sub.marker = 5;
                break;
            }
            z->state->mode = DONE;
        case DONE:
            return 1;
        case BAD:
            return -3;
        default:
            return -2;
        }
    }
}

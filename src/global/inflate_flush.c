/* inflate_flush @ 0x8025A004 (size: 0x180, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

#define Z_OK 0
#define Z_BUF_ERROR (-5)

typedef struct {
    char pad[0x28];
    u8 *window;
    u8 *end;
    u8 *read;
    u8 *write;
    u32 (*checkfn)(u32, const u8 *, u32);
    u32 check;
} InflateBlocksState;

typedef struct {
    u8 *next_in;
    u32 avail_in;
    u32 total_in;
    u8 *next_out;
    u32 avail_out;
    u32 total_out;
    char pad[0x30 - 0x18];
    u32 adler;
} ZStream;

void *memcpy(void *, const void *, unsigned int);

s32 inflate_flush(InflateBlocksState *s, ZStream *z, s32 r) {
    u32 n;
    u8 *p;
    u8 *q;

    p = z->next_out;
    q = s->read;

    n = (u32)((q <= s->write ? s->write : s->end) - q);
    if (n > z->avail_out) {
        n = z->avail_out;
    }
    if (n != 0 && r == Z_BUF_ERROR) {
        r = Z_OK;
    }

    z->avail_out -= n;
    z->total_out += n;

    if (s->checkfn != NULL) {
        s->check = s->checkfn(s->check, q, n);
        z->adler = s->check;
    }

    memcpy(p, q, n);
    p += n;
    q += n;

    if (q == s->end) {
        q = s->window;
        if (s->write == s->end) {
            s->write = s->window;
        }

        n = (u32)(s->write - q);
        if (n > z->avail_out) {
            n = z->avail_out;
        }
        if (n != 0 && r == Z_BUF_ERROR) {
            r = Z_OK;
        }

        z->avail_out -= n;
        z->total_out += n;

        if (s->checkfn != NULL) {
            s->check = s->checkfn(s->check, q, n);
            z->adler = s->check;
        }

        memcpy(p, q, n);
        p += n;
        q += n;
    }

    z->next_out = p;
    s->read = q;

    return r;
}

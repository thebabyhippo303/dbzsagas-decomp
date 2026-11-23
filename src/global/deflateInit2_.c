/* deflateInit2_ @ 0x80255C3C (size: 0x290, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16; typedef int s32; typedef unsigned int u32;
typedef void *(*AllocFn)(void *, u32, u32);
typedef void (*FreeFn)(void *, void *);
typedef struct Strm {
    u8 *next_in; u32 avail_in; u32 total_in;
    u8 *next_out; u32 avail_out; u32 total_out;
    char *msg; struct State *state;
    AllocFn zalloc; FreeFn zfree; void *opaque;
} Strm;
typedef struct State {
    Strm *strm; s32 status; u8 *pending_buf; u32 pending_buf_size;
    u8 *pending_out; s32 pending; s32 noheader; u8 data_type; u8 method;
    s32 last_flush;
    u32 w_size; u32 w_bits; u32 w_mask; u8 *window; u32 window_size;
    u16 *prev; u16 *head;
    u32 ins_h; u32 hash_size; u32 hash_bits; u32 hash_mask; u32 hash_shift;
    char pad[0x7C - 0x54];
    s32 level; s32 strategy;
    char pad2[0x1690 - 0x84];
    u8 *l_buf; u32 lit_bufsize; s32 last_lit; u16 *d_buf;
} State;
s32 deflateEnd(Strm *);
s32 deflateReset(Strm *);
void *zcalloc(void *, u32, u32);
void zcfree(void *, void *);
extern char *lbl_80375768 __attribute__((section(".data")));
extern char *lbl_803DCE38;

s32 deflateInit2_(Strm *strm, s32 level, s32 method, s32 windowBits, s32 memLevel, s32 strategy, char *version, s32 stream_size) {
    State *s;
    s32 noheader = 0;
    u16 *overlay;

    if (version == 0 || version[0] != lbl_803DCE38[0] || stream_size != 56) {
        return -6;
    }
    if (strm == 0) return -2;
    strm->msg = 0;
    if (strm->zalloc == 0) {
        strm->zalloc = zcalloc;
        strm->opaque = 0;
    }
    if (strm->zfree == 0) strm->zfree = zcfree;
    if (level == -1) level = 6;
    if (windowBits < 0) {
        noheader = 1;
        windowBits = -windowBits;
    }
    if (memLevel < 1 || memLevel > 9 || method != 8 || windowBits < 9 || windowBits > 15 || level < 0 || level > 9 || strategy < 0 || strategy > 2) {
        return -2;
    }
    s = (State *) strm->zalloc(strm->opaque, 1, 5816);
    if (s == 0) return -4;
    strm->state = s;
    s->strm = strm;
    s->noheader = noheader;
    s->w_bits = windowBits;
    s->w_size = 1 << s->w_bits;
    s->w_mask = s->w_size - 1;
    s->hash_bits = memLevel + 7;
    s->hash_size = 1 << s->hash_bits;
    s->hash_mask = s->hash_size - 1;
    s->hash_shift = (s->hash_bits + 2) / 3;
    s->window = (u8 *) strm->zalloc(strm->opaque, s->w_size, 2);
    s->prev = (u16 *) strm->zalloc(strm->opaque, s->w_size, 2);
    s->head = (u16 *) strm->zalloc(strm->opaque, s->hash_size, 2);
    s->lit_bufsize = 1 << (memLevel + 6);
    overlay = (u16 *) strm->zalloc(strm->opaque, s->lit_bufsize, 4);
    s->pending_buf = (u8 *) overlay;
    s->pending_buf_size = s->lit_bufsize * 4;
    if (s->window == 0 || s->prev == 0 || s->head == 0 || overlay == 0) {
        strm->msg = lbl_80375768;
        deflateEnd(strm);
        return -4;
    }
    s->d_buf = overlay + s->lit_bufsize / 2;
    s->l_buf = s->pending_buf + 3 * s->lit_bufsize;
    s->level = level;
    s->strategy = strategy;
    s->method = (u8) method;
    return deflateReset(strm);
}

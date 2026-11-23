/* deflateReset @ 0x80255ECC (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: deflateReset @ 0x80255ECC (0xC4). ProDG -O2. */
typedef struct z_stream_s {
    void *next_in;
    unsigned int avail_in;
    unsigned long total_in;
    void *next_out;
    unsigned int avail_out;
    unsigned long total_out;
    char *msg;
    void *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned long adler;
    unsigned long reserved;
} z_stream;

typedef struct deflate_state {
    int pad0;
    int status;
    unsigned char *pending_buf;
    unsigned long pending_buf_size;
    unsigned char *pending_out;
    unsigned long pending;
    int noheader;
    int pad1;
    int last_flush;
} deflate_state;

extern void _tr_init(deflate_state *s);
extern void lm_init(deflate_state *s);

int deflateReset(z_stream *strm) {
    deflate_state *s;

    if (strm == 0 || strm->state == 0 || strm->zalloc == 0 || strm->zfree == 0) {
        return -2;
    }
    strm->total_in = strm->total_out = 0;
    strm->msg = 0;
    strm->data_type = 2;
    s = (deflate_state *)strm->state;
    s->pending = 0;
    s->pending_out = s->pending_buf;
    if (s->noheader < 0) {
        s->noheader = 0;
    }
    s->status = s->noheader ? 113 : 42;
    strm->adler = 1;
    s->last_flush = 0;
    _tr_init(s);
    lm_init(s);
    return 0;
}

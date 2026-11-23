/* deflateEnd @ 0x802563BC (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: deflateEnd @ 0x802563BC (0x108). ProDG -O2. */
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
    void *pending_buf;
} deflate_state;

typedef void (*ZFreeFn)(void *opaque, void *ptr);

#define TRY_FREE(strm, p)                                       \
    do {                                                        \
        if ((p) != 0) {                                         \
            ((ZFreeFn)(strm)->zfree)((strm)->opaque, (p));      \
        }                                                       \
    } while (0)

int deflateEnd(z_stream *strm) {
    deflate_state *s;
    int status;

    if (strm == 0 || strm->state == 0) {
        return -2;
    }
    s = (deflate_state *)strm->state;
    status = s->status;
    if (status != 42 && status != 113 && status != 666) {
        return -2;
    }
    TRY_FREE(strm, ((deflate_state *)strm->state)->pending_buf);
    TRY_FREE(strm, *(void **)((char *)strm->state + 0x3C));
    TRY_FREE(strm, *(void **)((char *)strm->state + 0x38));
    TRY_FREE(strm, *(void **)((char *)strm->state + 0x30));
    ((ZFreeFn)strm->zfree)(strm->opaque, strm->state);
    strm->state = 0;
    return status == 113 ? -3 : 0;
}

/* inflateEnd @ 0x80258FC8 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflateEnd @ 0x80258FC8 (0x80). ProDG -O2. */
typedef struct {
    char pad[0x14];
    void *blocks;
} InflateState;

typedef struct {
    char pad[0x1C];
    InflateState *state;
    void *zalloc;
    void (*zfree)(void *opaque, void *ptr);
    void *opaque;
} ZStream;

extern void inflate_blocks_free(void *blocks, ZStream *z);

int inflateEnd(ZStream *z) {
    if (z == 0 || z->state == 0 || z->zfree == 0)
        return -2;
    if (z->state->blocks != 0)
        inflate_blocks_free(z->state->blocks, z);
    z->zfree(z->opaque, z->state);
    z->state = 0;
    return 0;
}

/* inflate_blocks_free @ 0x80258240 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflate_blocks_free @ 0x80258240 (0x74). ProDG -O2. */
typedef void (*FreeFn)(void *opaque, void *ptr);

typedef struct {
    char pad[36];
    FreeFn zfree;
    void *opaque;
} ZStream;

typedef struct {
    char pad[36];
    void *hufts;
    void *window;
} Blocks;

extern void inflate_blocks_reset(Blocks *s, ZStream *z, void *check);

int inflate_blocks_free(Blocks *s, ZStream *z) {
    inflate_blocks_reset(s, z, 0);
    z->zfree(z->opaque, s->window);
    z->zfree(z->opaque, s->hufts);
    z->zfree(z->opaque, s);
    return 0;
}

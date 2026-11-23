/* inflate_blocks_new @ 0x80257620 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned long uLong;
typedef unsigned int uInt;
typedef void *(*ZAllocFn)(void *opaque, uInt items, uInt size);
typedef void (*ZFreeFn)(void *opaque, void *ptr);
typedef uLong (*CheckFn)(uLong adler, const void *buf, unsigned len);

typedef struct {
    int mode;
    char pad0[0x24 - 4];
    void *hufts;
    char *window;
    char *end;
    char pad1[0x38 - 0x30];
    CheckFn checkfn;
} BlocksState;

typedef struct {
    char pad0[0x20];
    ZAllocFn zalloc;
    ZFreeFn zfree;
    void *opaque;
} ZStream;

void inflate_blocks_reset(void *s, void *z, uLong *c);

BlocksState *inflate_blocks_new(ZStream *z, CheckFn c, uInt w) {
    BlocksState *s;

    s = (BlocksState *)z->zalloc(z->opaque, 1, 64);
    if (s == 0) {
        return s;
    }
    s->hufts = z->zalloc(z->opaque, 8, 1440);
    if (s->hufts == 0) {
        z->zfree(z->opaque, s);
        return 0;
    }
    s->window = (char *)z->zalloc(z->opaque, 1, w);
    if (s->window == 0) {
        z->zfree(z->opaque, s->hufts);
        z->zfree(z->opaque, s);
        return 0;
    }
    s->end = s->window + w;
    s->checkfn = c;
    s->mode = 0;
    inflate_blocks_reset(s, z, 0);
    return s;
}

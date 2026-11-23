/* inflate_trees_bits @ 0x80259D2C (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflate_trees_bits @ 0x80259D2C (0xEC). ProDG -O2. */
typedef unsigned int uInt;

typedef struct z_stream {
    char pad[0x18];
    char *msg;
    void *state;
    void *(*zalloc)(void *opaque, uInt items, uInt size);
    void (*zfree)(void *opaque, void *ptr);
    void *opaque;
} z_stream;

extern char lbl_803480E0[];
extern char lbl_80348108[];

int huft_build(uInt *b, uInt n, uInt s, uInt *d, uInt *e, void **t, uInt *m, void *hp, uInt *hn, uInt *v);

int inflate_trees_bits(uInt *c, uInt *bb, void **tb, void *hp, z_stream *z) {
    int r;
    uInt hn;
    uInt *v;

    hn = 0;
    v = z->zalloc(z->opaque, 19, 4);
    if (v == 0) {
        return -4;
    }
    r = huft_build(c, 19, 19, 0, 0, tb, bb, hp, &hn, v);
    if (r == -3) {
        z->msg = lbl_803480E0;
    } else if (r == -5 || *bb == 0) {
        z->msg = lbl_80348108;
        r = -3;
    }
    z->zfree(z->opaque, v);
    return r;
}

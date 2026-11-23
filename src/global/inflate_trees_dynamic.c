/* inflate_trees_dynamic @ 0x80259E18 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int uInt;
typedef struct z_stream_s {
    char pad0[24];
    char *msg;
    char pad1[4];
    void *(*zalloc)(void *, uInt, uInt);
    void (*zfree)(void *, void *);
    void *opaque;
} z_stream;
extern int huft_build(uInt *, uInt, uInt, void *, void *, void *, void *, void *, uInt *, uInt *);
extern char lbl_80348BFC[] __attribute__((section(".data")));
extern char lbl_80348C78[] __attribute__((section(".data")));
extern char lbl_80348CF4[] __attribute__((section(".data")));
extern char lbl_80348D6C[] __attribute__((section(".data")));
extern char lbl_8034812C[] __attribute__((section(".data")));
extern char lbl_80348150[] __attribute__((section(".data")));
extern char lbl_80348170[] __attribute__((section(".data")));
extern char lbl_80348190[] __attribute__((section(".data")));
extern char lbl_803481AC[] __attribute__((section(".data")));

int inflate_trees_dynamic(uInt nl, uInt nd, uInt *c, uInt *bl, uInt *bd, void *tl, void *td, void *hp, z_stream *z) {
    int r;
    uInt hn = 0;
    uInt *v;

    if ((v = (uInt *)z->zalloc(z->opaque, 288, 4)) == 0) {
        return -4;
    }
    r = huft_build(c, nl, 257, lbl_80348BFC, lbl_80348C78, tl, bl, hp, &hn, v);
    if (r != 0 || *bl == 0) {
        if (r == -3) {
            z->msg = lbl_8034812C;
        } else if (r != -4) {
            z->msg = lbl_80348150;
            r = -3;
        }
        z->zfree(z->opaque, v);
        return r;
    }
    r = huft_build(c + nl, nd, 0, lbl_80348CF4, lbl_80348D6C, td, bd, hp, &hn, v);
    if (r != 0 || (*bd == 0 && nl > 257)) {
        if (r == -3) {
            z->msg = lbl_80348170;
        } else if (r == -5) {
            z->msg = lbl_80348190;
            r = -3;
        } else if (r != -4) {
            z->msg = lbl_803481AC;
            r = -3;
        }
        z->zfree(z->opaque, v);
        return r;
    }
    z->zfree(z->opaque, v);
    return 0;
}

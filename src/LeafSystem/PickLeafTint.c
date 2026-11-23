/* LeafSystem__PickLeafTint @ 0x80288340 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    union {
        unsigned short w;
        struct {
            unsigned char hi;
            unsigned char lo;
        } b;
    } seed;
    unsigned char adjust;
    unsigned char pad[5];
} TintChannel;

extern unsigned char lbl_8034F3EC[] __attribute__((section(".data")));
extern unsigned char lbl_8034F3EF[] __attribute__((section(".data")));

void LeafSystem__PickLeafTint(void *arg0, unsigned int *out, unsigned int seed) {
    TintChannel ch[2];
    unsigned int color;
    unsigned char *bytes = (unsigned char *)&color;
    unsigned char *p0 = lbl_8034F3EC;
    unsigned char *p1 = lbl_8034F3EF;
    int b, r, g;
    int v, w;
    ch[0].seed.w = *(unsigned short *)p0;
    b = (seed >> 8) & 0xF8;
    ch[0].adjust = p0[2];
    ch[1].seed.w = *(unsigned short *)p1;
    r = (seed << 3) & 0xF8;
    ch[1].adjust = p1[2];
    g = (seed >> 3) & 0xFC;
    if (g > 127) {
        v = ch[0].seed.b.hi;
        v += r;
        w = v;
        if (v > 255)
            w = 255;
        bytes[0] = w;
        v = ch[0].seed.b.lo;
        v += g;
        w = v;
        if (v > 255)
            w = 255;
        bytes[1] = w;
        v = ch[0].adjust;
        v += b;
        w = v;
        if (v > 255)
            w = 255;
        bytes[2] = w;
    } else {
        v = ch[1].seed.b.hi;
        v += r;
        w = v;
        if (v > 255)
            w = 255;
        bytes[0] = w;
        v = ch[1].seed.b.lo;
        v += g;
        w = v;
        if (v > 255)
            w = 255;
        bytes[1] = w;
        v = ch[1].adjust;
        v += b;
        w = v;
        if (v > 255)
            w = 255;
        bytes[2] = w;
    }
    bytes[3] = 255;
    out[60] = color;
    out[61] = color;
    out[62] = color;
    out[63] = color;
}

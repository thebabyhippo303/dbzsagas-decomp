/* inflate_fast @ 0x80258AFC (size: 0x454, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char Byte;
typedef unsigned int uInt;
typedef unsigned long uLong;

typedef struct {
    Byte Exop;
    Byte Bits;
    uInt base;
} Huft;

typedef struct {
    char pad0[0x1C];
    uInt bitk;
    uInt bitb;
    char pad1[4];
    Byte *window;
    Byte *end;
    Byte *read;
    Byte *write;
} BState;

typedef struct {
    Byte *next_in;
    uInt avail_in;
    uLong total_in;
    Byte *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
} ZS;

extern char lbl_8034803C[] __attribute__((section(".rodata")));
extern char lbl_80348058[] __attribute__((section(".rodata")));
extern uInt lbl_803756D0[] __attribute__((section(".data")));

#define inflate_mask lbl_803756D0

int inflate_fast(uInt bl, uInt bd, Huft *tl, Huft *td, BState *s, ZS *z) {
    Huft *t;
    uInt e;
    uInt b;
    uInt k;
    Byte *p;
    uInt n;
    Byte *q;
    uInt m;
    uInt ml;
    uInt md;
    uInt c;
    uInt d;
    Byte *r;

    p = z->next_in;
    n = z->avail_in;
    b = s->bitb;
    k = s->bitk;
    q = s->write;
    m = q < s->read ? (uInt)(s->read - q - 1) : (uInt)(s->end - q);
    ml = inflate_mask[bl];
    md = inflate_mask[bd];
    do {
        while (k < 20) {
            n--;
            b |= (uInt)(*p++) << k;
            k += 8;
        }
        t = tl + (b & ml);
        e = t->Exop;
        if (e == 0) {
            b >>= t->Bits;
            k -= t->Bits;
            *q++ = (Byte)t->base;
            m--;
            continue;
        }
        do {
            b >>= t->Bits;
            k -= t->Bits;
            if (e & 16) {
                e &= 15;
                c = t->base + (b & inflate_mask[e]);
                b >>= e;
                k -= e;
                while (k < 15) {
                    n--;
                    b |= (uInt)(*p++) << k;
                    k += 8;
                }
                t = td + (b & md);
                e = t->Exop;
                do {
                    b >>= t->Bits;
                    k -= t->Bits;
                    if (e & 16) {
                        e &= 15;
                        while (k < e) {
                            n--;
                            b |= (uInt)(*p++) << k;
                            k += 8;
                        }
                        d = t->base + (b & inflate_mask[e]);
                        b >>= e;
                        k -= e;
                        m -= c;
                        r = q - d;
                        if (r < s->window) {
                            do {
                                r += s->end - s->window;
                            } while (r < s->window);
                            e = s->end - r;
                            if (c > e) {
                                c -= e;
                                do {
                                    *q++ = *r++;
                                } while (--e);
                                r = s->window;
                                do {
                                    *q++ = *r++;
                                } while (--c);
                            } else {
                                *q++ = *r++;
                                c--;
                                *q++ = *r++;
                                c--;
                                do {
                                    *q++ = *r++;
                                } while (--c);
                            }
                        } else {
                            *q++ = *r++;
                            c--;
                            *q++ = *r++;
                            c--;
                            do {
                                *q++ = *r++;
                            } while (--c);
                        }
                        break;
                    } else if ((e & 64) == 0) {
                        t += t->base;
                        t += b & inflate_mask[e];
                        e = t->Exop;
                    } else {
                        z->msg = lbl_80348058;
                        c = z->avail_in - n;
                        c = (k >> 3) < c ? (k >> 3) : c;
                        n += c;
                        p -= c;
                        k -= c << 3;
                        s->bitb = b;
                        s->bitk = k;
                        z->avail_in = n;
                        z->total_in += p - z->next_in;
                        z->next_in = p;
                        s->write = q;
                        return -3;
                    }
                } while (1);
                break;
            }
            if ((e & 64) == 0) {
                t += t->base;
                t += b & inflate_mask[e];
                e = t->Exop;
                if (e == 0) {
                    b >>= t->Bits;
                    k -= t->Bits;
                    *q++ = (Byte)t->base;
                    m--;
                    break;
                }
            } else if (e & 32) {
                c = z->avail_in - n;
                c = (k >> 3) < c ? (k >> 3) : c;
                n += c;
                p -= c;
                k -= c << 3;
                s->bitb = b;
                s->bitk = k;
                z->avail_in = n;
                z->total_in += p - z->next_in;
                z->next_in = p;
                s->write = q;
                return 1;
            } else {
                z->msg = lbl_8034803C;
                c = z->avail_in - n;
                c = (k >> 3) < c ? (k >> 3) : c;
                n += c;
                p -= c;
                k -= c << 3;
                s->bitb = b;
                s->bitk = k;
                z->avail_in = n;
                z->total_in += p - z->next_in;
                z->next_in = p;
                s->write = q;
                return -3;
            }
        } while (1);
    } while (m >= 258 && n >= 10);
    c = z->avail_in - n;
    c = (k >> 3) < c ? (k >> 3) : c;
    n += c;
    p -= c;
    k -= c << 3;
    s->bitb = b;
    s->bitk = k;
    z->avail_in = n;
    z->total_in += p - z->next_in;
    z->next_in = p;
    s->write = q;
    return 0;
}

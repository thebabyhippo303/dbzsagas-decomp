/* inflate_blocks @ 0x80257710 (size: 0xB30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* inflate_blocks @ 0x80257710 (0xB30) - zlib 1.1.x infblock.c */
typedef unsigned char Byte;
typedef unsigned int uInt;
typedef unsigned long uLong;
typedef Byte Bytef;
typedef uInt uIntf;

#define Z_OK 0
#define Z_STREAM_END 1
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR (-3)
#define Z_MEM_ERROR (-4)
#define Z_NULL 0

typedef struct inflate_huft_s {
    Byte exop;
    Byte bits;
    uInt base;
} inflate_huft;

typedef struct inflate_codes_state inflate_codes_statef;
typedef uLong (*check_func)(uLong, const Bytef *, uInt);

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    void *state;
    void *(*zalloc)(void *, uInt, uInt);
    void (*zfree)(void *, void *);
    void *opaque;
    int data_type;
    uLong adler;
    uLong reserved;
} z_stream, *z_streamp;

enum { TYPE, LENS, STORED, TABLE, BTREE, DTREE, CODES, DRY, DONE, BAD };
typedef int inflate_block_mode;

typedef struct inflate_blocks_state {
    inflate_block_mode mode;
    union {
        uInt left;
        struct {
            uInt table;
            uInt index;
            uIntf *blens;
            uInt bb;
            inflate_huft *tb;
        } trees;
        struct {
            inflate_codes_statef *codes;
        } decode;
    } sub;
    uInt last;
    uInt bitk;
    uLong bitb;
    inflate_huft *hufts;
    Bytef *window;
    Bytef *end;
    Bytef *read;
    Bytef *write;
    check_func checkfn;
    uLong check;
} inflate_blocks_statef;

extern uInt inflate_mask[17] __attribute__((section(".data")));
extern uInt border[19] __attribute__((section(".data")));

int inflate_trees_fixed(uInt *, uInt *, inflate_huft **, inflate_huft **, z_streamp);
inflate_codes_statef *inflate_codes_new(uInt, uInt, inflate_huft *, inflate_huft *, z_streamp);
int inflate_flush(inflate_blocks_statef *, z_streamp, int);
void *memcpy(void *, const void *, unsigned);
int inflate_trees_bits(uIntf *, uIntf *, inflate_huft **, inflate_huft *, z_streamp);
int inflate_trees_dynamic(uInt, uInt, uIntf *, uIntf *, uIntf *, inflate_huft **, inflate_huft **, inflate_huft *, z_streamp);
int inflate_codes(inflate_blocks_statef *, z_streamp, int);
void inflate_codes_free(inflate_codes_statef *, z_streamp);

#define zmemcpy memcpy
#define ZALLOC(z, items, size) (*((z)->zalloc))((z)->opaque, (items), (size))
#define ZFREE(z, addr) (*((z)->zfree))((z)->opaque, (void *)(addr))

#define WAVAIL (uInt)(q < s->read ? s->read - q - 1 : s->end - q)
#define LOADIN { p = z->next_in; n = z->avail_in; b = s->bitb; k = s->bitk; }
#define LOADOUT { q = s->write; m = (uInt)WAVAIL; }
#define LOAD { LOADIN LOADOUT }
#define UPDATEIN { s->bitb = b; s->bitk = k; z->avail_in = n; z->total_in += p - z->next_in; z->next_in = p; }
#define UPDATEOUT { s->write = q; }
#define UPDATE { UPDATEIN UPDATEOUT }
#define LEAVE { UPDATE return inflate_flush(s, z, r); }
#define NEEDBYTE { if (n) r = Z_OK; else LEAVE }
#define NEXTBYTE (n--, *p++)
#define NEEDBITS(j) { while (k < (j)) { NEEDBYTE; b |= ((uLong)NEXTBYTE) << k; k += 8; } }
#define DUMPBITS(j) { b >>= (j); k -= (j); }
#define WRAP { if (q == s->end && s->read != s->window) { q = s->window; m = (uInt)WAVAIL; } }
#define FLUSH { UPDATEOUT r = inflate_flush(s, z, r); LOADOUT }
#define NEEDOUT { if (m == 0) { WRAP if (m == 0) { FLUSH WRAP if (m == 0) LEAVE } } r = Z_OK; }

int inflate_blocks(inflate_blocks_statef *s, z_streamp z, int r) {
    uInt t;
    uLong b;
    uInt k;
    Bytef *p;
    uInt n;
    Bytef *q;
    uInt m;

    LOAD

    while (1) switch (s->mode) {
    case TYPE:
        NEEDBITS(3)
        t = (uInt)b & 7;
        s->last = t & 1;
        switch (t >> 1) {
        case 0:
            DUMPBITS(3)
            t = k & 7;
            DUMPBITS(t)
            s->mode = LENS;
            break;
        case 1: {
            uInt bl, bd;
            inflate_huft *tl, *td;

            inflate_trees_fixed(&bl, &bd, &tl, &td, z);
            s->sub.decode.codes = inflate_codes_new(bl, bd, tl, td, z);
            if (s->sub.decode.codes == Z_NULL) {
                r = Z_MEM_ERROR;
                LEAVE
            }
        }
            DUMPBITS(3)
            s->mode = CODES;
            break;
        case 2:
            DUMPBITS(3)
            s->mode = TABLE;
            break;
        case 3:
            DUMPBITS(3)
            s->mode = BAD;
            z->msg = (char *)"invalid block type";
            r = Z_DATA_ERROR;
            LEAVE
        }
        break;
    case LENS:
        NEEDBITS(32)
        if ((((~b) >> 16) & 0xffff) != (b & 0xffff)) {
            s->mode = BAD;
            z->msg = (char *)"invalid stored block lengths";
            r = Z_DATA_ERROR;
            LEAVE
        }
        s->sub.left = (uInt)b & 0xffff;
        b = k = 0;
        s->mode = s->sub.left ? STORED : (s->last ? DRY : TYPE);
        break;
    case STORED:
        if (n == 0) {
            LEAVE
        }
        NEEDOUT
        t = s->sub.left;
        if (t > n) t = n;
        if (t > m) t = m;
        zmemcpy(q, p, t);
        p += t;
        n -= t;
        q += t;
        m -= t;
        if ((s->sub.left -= t) != 0) break;
        s->mode = s->last ? DRY : TYPE;
        break;
    case TABLE:
        NEEDBITS(14)
        s->sub.trees.table = t = (uInt)b & 0x3fff;
        if ((t & 0x1f) > 29 || ((t >> 5) & 0x1f) > 29) {
            s->mode = BAD;
            z->msg = (char *)"too many length or distance symbols";
            r = Z_DATA_ERROR;
            LEAVE
        }
        t = 258 + (t & 0x1f) + ((t >> 5) & 0x1f);
        if ((s->sub.trees.blens = (uIntf *)ZALLOC(z, t, sizeof(uInt))) == Z_NULL) {
            r = Z_MEM_ERROR;
            LEAVE
        }
        DUMPBITS(14)
        s->sub.trees.index = 0;
        s->mode = BTREE;
    case BTREE:
        while (s->sub.trees.index < 4 + (s->sub.trees.table >> 10)) {
            NEEDBITS(3)
            s->sub.trees.blens[border[s->sub.trees.index++]] = (uInt)b & 7;
            DUMPBITS(3)
        }
        while (s->sub.trees.index < 19)
            s->sub.trees.blens[border[s->sub.trees.index++]] = 0;
        s->sub.trees.bb = 7;
        t = inflate_trees_bits(s->sub.trees.blens, &s->sub.trees.bb, &s->sub.trees.tb, s->hufts, z);
        if (t != Z_OK) {
            r = t;
            if (r == Z_DATA_ERROR) {
                ZFREE(z, s->sub.trees.blens);
                s->mode = BAD;
            }
            LEAVE
        }
        s->sub.trees.index = 0;
        s->mode = DTREE;
    case DTREE:
        while (t = s->sub.trees.table, s->sub.trees.index < 258 + (t & 0x1f) + ((t >> 5) & 0x1f)) {
            inflate_huft *h;
            uInt i, j, c;

            t = s->sub.trees.bb;
            NEEDBITS(t)
            h = s->sub.trees.tb + ((uInt)b & inflate_mask[t]);
            t = h->bits;
            c = h->base;
            if (c < 16) {
                DUMPBITS(t)
                s->sub.trees.blens[s->sub.trees.index++] = c;
            } else {
                i = c == 18 ? 7 : c - 14;
                j = c == 18 ? 11 : 3;
                NEEDBITS(t + i)
                DUMPBITS(t)
                j += (uInt)b & inflate_mask[i];
                DUMPBITS(i)
                i = s->sub.trees.index;
                t = s->sub.trees.table;
                if (i + j > 258 + (t & 0x1f) + ((t >> 5) & 0x1f) || (c == 16 && i < 1)) {
                    ZFREE(z, s->sub.trees.blens);
                    s->mode = BAD;
                    z->msg = (char *)"invalid bit length repeat";
                    r = Z_DATA_ERROR;
                    LEAVE
                }
                c = c == 16 ? s->sub.trees.blens[i - 1] : 0;
                do {
                    s->sub.trees.blens[i++] = c;
                } while (--j);
                s->sub.trees.index = i;
            }
        }
        s->sub.trees.tb = Z_NULL;
        {
            uInt bl, bd;
            inflate_huft *tl, *td;
            inflate_codes_statef *c;

            bl = 9;
            bd = 6;
            t = s->sub.trees.table;
            t = inflate_trees_dynamic(257 + (t & 0x1f), 1 + ((t >> 5) & 0x1f), s->sub.trees.blens, &bl, &bd, &tl, &td, s->hufts, z);
            if (t != Z_OK) {
                if (t == (uInt)Z_DATA_ERROR) {
                    ZFREE(z, s->sub.trees.blens);
                    s->mode = BAD;
                }
                r = t;
                LEAVE
            }
            if ((c = inflate_codes_new(bl, bd, tl, td, z)) == Z_NULL) {
                r = Z_MEM_ERROR;
                LEAVE
            }
            s->sub.decode.codes = c;
        }
        ZFREE(z, s->sub.trees.blens);
        s->mode = CODES;
    case CODES:
        UPDATE
        if ((r = inflate_codes(s, z, r)) != Z_STREAM_END)
            return inflate_flush(s, z, r);
        r = Z_OK;
        inflate_codes_free(s->sub.decode.codes, z);
        LOAD
        if (!s->last) {
            s->mode = TYPE;
            break;
        }
        s->mode = DRY;
    case DRY:
        FLUSH
        if (s->read != s->write)
            LEAVE
        s->mode = DONE;
    case DONE:
        r = Z_STREAM_END;
        LEAVE
    case BAD:
        r = Z_DATA_ERROR;
        LEAVE
    default:
        r = Z_STREAM_ERROR;
        LEAVE
    }
}

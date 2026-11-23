/* Static__ReleaseQueryGeometry @ 0x801D11AC (size: 0x1D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int sprintf(char *, void *, ...);
extern M2C_UNK lbl_8034146C __attribute__((section(".data")));
extern M2C_UNK lbl_803414AC __attribute__((section(".data")));
extern M2C_UNK lbl_803414C0 __attribute__((section(".data")));
extern M2C_UNK lbl_80341500 __attribute__((section(".data")));

typedef struct PVt { char pad[8]; s16 off; s16 pad2; void (*fn)(void *, s32); } PVt;
typedef struct PNode { struct PHost *host; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; PVt *vt; } PNode;
typedef struct PHost { char *base; s32 f4; s32 f8; s32 f0C; s32 f10; char pad[0xA0]; s32 fB4; char pad2[0x104]; s32 f1BC; } PHost;

s32 Static__ReleaseQueryGeometry(void *arg0) {
    char buf[256];
    s32 sz;
    s32 prev;
    PNode *n;
    PHost *h;
    s32 t;
    s32 t2;
    s32 t3;
    void *base;

    base = (char *)arg0 + 0x50;
    n = M2C_FIELD(base, PNode **, 8);
    if (n != NULL) {
        if (n->host != NULL) {
            n->vt->fn((char *) n + n->vt->off, 2);
            h = n->host;
            if (n->f18 == h->f0C) {
                t = n->f10;
                h->f10 = t;
                if (t == -1) {
                    h->f0C = 0;
                } else {
                    char *e = h->base + t;
                    t = M2C_FIELD(e, s32 *, 0x18);
                    h->f0C = t;
                    M2C_FIELD(e, s32 *, 0x14) = t;
                }
                if (h->f10 == -1) {
                    h->fB4 = 0;
                }
                if (h->f1BC & 0x20000000) {
                    sprintf(buf, &lbl_8034146C, n->f4, n->f18, n->f18 - n->f4);
                    sprintf(buf, &lbl_803414AC, h->f0C);
                }
            } else {
                M2C_FIELD(h->base + n->f14, s32 *, 0x10) = n->f10;
                t2 = n->f10;
                if (t2 != -1) {
                    M2C_FIELD(h->base + t2, s32 *, 0x14) = n->f14;
                } else {
                    h->fB4 = n->f14;
                }
                t3 = n->f10;
                prev = (t3 != -1) ? M2C_FIELD(h->base + t3, s32 *, 0x18) : 0;
                sz = n->f14 - prev;
                if (h->f1BC & 0x20000000) {
                    sprintf(buf, &lbl_803414C0, n->f4, n->f18, n->f18 - n->f4);
                    sprintf(buf, &lbl_80341500, sz, prev, n->f14);
                }
            }
        } else {
            n->vt->fn((char *) n + n->vt->off, 3);
        }
    }
    M2C_FIELD(base, void **, 8) = NULL;
    return 1;
}

/* SphereToTerrain__Destroy @ 0x801CDFEC (size: 0x58C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
int sprintf(char *, void *, ...);
extern M2C_UNK lbl_8034146C __attribute__((section(".data")));
extern M2C_UNK lbl_803414AC __attribute__((section(".data")));
extern M2C_UNK lbl_803414C0 __attribute__((section(".data")));
extern M2C_UNK lbl_80341500 __attribute__((section(".data")));
extern M2C_UNK lbl_803420D0 __attribute__((section(".data")));
extern M2C_UNK lbl_80342350 __attribute__((section(".data")));

typedef struct PVt { char pad[8]; s16 off; s16 pad2; void (*fn)(void *, s32); } PVt;
typedef struct PNode { struct PHost *host; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; PVt *vt; } PNode;
typedef struct PHost { char *base; s32 f4; s32 f8; s32 f0C; s32 f10; char pad[0xA0]; s32 fB4; char pad2[0x104]; s32 f1BC; } PHost;

void SphereToTerrain__Destroy(void *arg0, s32 arg1) {
    char buf[256];
    s32 sz;
    s32 prev;
    PNode *n;
    PHost *h;
    s32 t;
    s32 t2;
    s32 t3;
    s8 *sub;
    s32 *p74;
    s32 zero;
    s32 *tgt;
    s32 cur;

    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_803420D0;
    p74 = (s32 *) ((char *) arg0 + 0x74);
    tgt = M2C_FIELD(arg0, s32 **, 0x74);
    if (tgt != NULL) {
        cur = p74[3];
        if (cur != 0) {
            if (cur == tgt[6]) {
                cur = (cur & 0x7FFFFFFF) + 1;
                tgt[6] = cur;
                if (cur < 0) {
                    tgt[6] = 0;
                }
            }
        }
    }
    zero = 0;
    sub = (s8 *) arg0 + 0x34;
    p74[3] = zero;
    n = M2C_FIELD(sub, PNode **, 20);
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
    n = M2C_FIELD(sub, PNode **, 16);
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
    n = M2C_FIELD(sub, PNode **, 12);
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
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_80342350;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}

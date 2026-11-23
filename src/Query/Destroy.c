/* Query__Destroy @ 0x80158928 (size: 0x3E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
int sprintf(char *, void *, ...);
extern M2C_UNK lbl_8031D488 __attribute__((section(".data")));
extern M2C_UNK lbl_8031D4C8 __attribute__((section(".data")));
extern M2C_UNK lbl_8031D4DC __attribute__((section(".data")));
extern M2C_UNK lbl_8031D51C __attribute__((section(".data")));
extern M2C_UNK lbl_80341F20 __attribute__((section(".data")));
extern M2C_UNK lbl_80344DF0 __attribute__((section(".data")));

typedef struct PVt { char pad[8]; s16 off; s16 pad2; void (*fn)(void *, s32); } PVt;
typedef struct PNode { struct PHost *host; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; PVt *vt; } PNode;
typedef struct PHost { char *base; s32 f4; s32 f8; s32 f0C; s32 f10; char pad[0xA0]; s32 fB4; char pad2[0x104]; s32 f1BC; } PHost;

void Query__Destroy(void *arg0, s32 arg1) {
    char buf[256];
    s32 sz;
    s32 sz2;
    s32 prev;
    PNode *n1;
    PNode *n;
    PNode *n2;
    PHost *h;
    s32 t;
    s32 t2;
    s32 t3;
    PNode *head;
    char *slot;
    void *prv;

    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80341F20;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        n1 = M2C_FIELD(arg0, PNode **, 0x44);
        if (n1 != NULL) {
            if (n1->host != NULL) {
                n1->vt->fn((char *)n1 + n1->vt->off, 2);
                h = n1->host;
                if (n1->f18 == h->f0C) {
                    t = n1->f10;
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
                        sprintf(buf, &lbl_8031D488, n1->f4, n1->f18, n1->f18 - n1->f4);
                        sprintf(buf, &lbl_8031D4C8, h->f0C);
                    }
                } else {
                    M2C_FIELD(h->base + n1->f14, s32 *, 0x10) = n1->f10;
                    t2 = n1->f10;
                    if (t2 != -1) {
                        M2C_FIELD(h->base + t2, s32 *, 0x14) = n1->f14;
                    } else {
                        h->fB4 = n1->f14;
                    }
                    t3 = n1->f10;
                    prev = (t3 != -1) ? M2C_FIELD(h->base + t3, s32 *, 0x18) : 0;
                    sz = n1->f14 - prev;
                    if (h->f1BC & 0x20000000) {
                        sprintf(buf, &lbl_8031D4DC, n1->f4, n1->f18, n1->f18 - n1->f4);
                        sprintf(buf, &lbl_8031D51C, sz, prev, n1->f14);
                    }
                }
            } else {
                n1->vt->fn((char *)n1 + n1->vt->off, 3);
            }
        }
    }
    head = M2C_FIELD(arg0, PNode **, 0x4C);
    slot = (char *)arg0 + 0x4C;
    if (head != NULL) {
        n = (PNode *)head->host;
        if ((s32)slot == M2C_FIELD(n, s32 *, 0xB0)) {
            M2C_FIELD(n, s32 *, 0xB0) = M2C_FIELD(slot, s32 *, 4);
        }
        M2C_FIELD(M2C_FIELD(slot, s32 *, 4), s32 *, 8) = M2C_FIELD(slot, s32 *, 8);
        prv = (void *)M2C_FIELD(slot, s32 *, 8);
        if (prv != NULL) {
            M2C_FIELD(prv, s32 *, 4) = M2C_FIELD(slot, s32 *, 4);
        }
        {
            PNode *cn = M2C_FIELD(arg0, PNode **, 0x4C);
            cn->vt->fn((char *)cn + cn->vt->off, 2);
        }
        n2 = M2C_FIELD(arg0, PNode **, 0x4C);
        if (n2->f18 == ((PHost *)n)->f0C) {
            t = n2->f10;
            ((PHost *)n)->f10 = t;
            if (t == -1) {
                ((PHost *)n)->f0C = 0;
            } else {
                char *e2 = ((PHost *)n)->base + t;
                t = M2C_FIELD(e2, s32 *, 0x18);
                ((PHost *)n)->f0C = t;
                M2C_FIELD(e2, s32 *, 0x14) = t;
            }
            if (((PHost *)n)->f10 == -1) {
                ((PHost *)n)->fB4 = 0;
            }
            if (((PHost *)n)->f1BC & 0x20000000) {
                sprintf(buf, &lbl_8031D488, n2->f4, n2->f18, n2->f18 - n2->f4);
                sprintf(buf, &lbl_8031D4C8, ((PHost *)n)->f0C);
            }
        } else {
            M2C_FIELD(((PHost *)n)->base + n2->f14, s32 *, 0x10) = n2->f10;
            t2 = n2->f10;
            if (t2 != -1) {
                M2C_FIELD(((PHost *)n)->base + t2, s32 *, 0x14) = n2->f14;
            } else {
                ((PHost *)n)->fB4 = n2->f14;
            }
            t3 = n2->f10;
            prev = (t3 != -1) ? M2C_FIELD(((PHost *)n)->base + t3, s32 *, 0x18) : 0;
            sz2 = n2->f14 - prev;
            if (((PHost *)n)->f1BC & 0x20000000) {
                sprintf(buf, &lbl_8031D4DC, n2->f4, n2->f18, n2->f18 - n2->f4);
                sprintf(buf, &lbl_8031D51C, sz2, prev, n2->f14);
            }
        }
        {
            s32 zero = 0;
            M2C_FIELD(slot, s32 *, 0) = zero;
            M2C_FIELD(slot, s32 *, 4) = zero;
            M2C_FIELD(slot, s32 *, 8) = zero;
            M2C_FIELD(slot, s32 *, 12) = zero;
            M2C_FIELD(slot, s32 *, 16) = -1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344DF0;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}

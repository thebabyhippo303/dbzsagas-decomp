/* CollideStack__DumpStatus @ 0x801D0BF8 (size: 0x268, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16;
typedef struct VT { char pad0[16]; s16 a10; s16 p12; u32 (*f14)(void *); char pad1[0x18 - 0x18]; s16 a18; s16 p1A; void (*f1C)(void *, char *); } VT;
typedef struct Node { char pad0[8]; struct Node *next; char pad1[4]; u32 key; } Node;
typedef struct Ent { char pad0[8]; u32 f8; u32 fC; char pad1[4]; u32 f14; u32 f18; VT *vt; } Ent;
typedef struct CS {
    Ent *base; char pad0[4]; u32 f8; u32 fC; char pad1[4]; u32 f14; char pad2[12]; Node *list;
    char pad3[0xB4 - 0x28]; u32 fB4; u32 fB8; char fBC[0x100]; s32 f1BC;
} CS;
int sprintf(char *, char *, ...);
char *strcat(char *, char *);
extern char lbl_80341A18[] __attribute__((section(".data")));
extern char lbl_80341A44[] __attribute__((section(".data")));
extern char lbl_80341A68[] __attribute__((section(".data")));
extern char lbl_80341A84[] __attribute__((section(".data")));
extern char lbl_80341AAC[] __attribute__((section(".data")));
extern char lbl_80341AD4[] __attribute__((section(".data")));
extern char lbl_80341B00[] __attribute__((section(".data")));
extern char lbl_80341B24[] __attribute__((section(".data")));
extern char lbl_80341B38[] __attribute__((section(".data")));
extern char lbl_80341B3C[] __attribute__((section(".data")));

void CollideStack__DumpStatus(CS *self) {
    char buf[256];
    u32 pos;
    u32 next;
    s32 count;
    Node *n;
    Node *best;
    Ent *e;
    u32 a;
    u32 b;
    u32 c;
    char *name;

    sprintf(buf, lbl_80341A18, self->f8, self->f14, self->f8 - self->f14);
    if (self->f1BC < 0) {
        sprintf(buf, lbl_80341A44, self->fB8, self->fBC);
    } else {
        sprintf(buf, lbl_80341A68, self->fB8, self->fBC);
    }
    sprintf(buf, lbl_80341A84);
    sprintf(buf, lbl_80341AAC);
    sprintf(buf, lbl_80341AD4);
    if (self->fB4 != 0) {
        sprintf(buf, lbl_80341B00, self->fB4);
    }
    pos = self->fB4;
    while (pos < self->fC) {
        next = self->fC;
        count = 0;
        n = self->list;
        if (n != 0) {
            do {
                u32 k = n->key;
                count++;
                if (k >= pos && k < next) {
                    next = k;
                    best = n;
                }
                n = n->next;
            } while (n != 0);
        }
        if (pos < next) {
            do {
                e = (Ent *) ((char *) self->base + pos);
                a = e->f8;
                b = e->fC;
                c = e->f18 - pos;
                name = (char *) e->vt->f14((char *) e + e->vt->a10);
                sprintf(buf, lbl_80341B24, a, b, c, name);
                e->vt->f1C((char *) e + e->vt->a18, buf);
                strcat(buf, lbl_80341B38);
                if (e->f14 > e->f18) {
                    sprintf(buf, lbl_80341B00, e->f14 - e->f18);
                }
                pos = e->f14;
            } while (pos < next);
        }
        if (next < self->fC) {
            e = (Ent *) ((char *) self->base + pos);
            sprintf(buf, lbl_80341B3C, e->f8, e->fC, e->f18 - pos, count, (char *) best + 20);
            if (e->f14 > e->f18) {
                sprintf(buf, lbl_80341B00, e->f14 - e->f18);
            }
            pos = e->f14;
        }
    }
}

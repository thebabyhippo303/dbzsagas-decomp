/* UiAnimator__Update @ 0x8025FF94 (size: 0x228, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct Key { struct Key *prev; struct Key *next; f32 time; } Key;
typedef struct UaVt {
    char pad[0xD8];
    s16 adjD8; s16 padDA;
    void (*fnDC)(void *);
    char padE0[0xF0 - 0xE0];
    s16 adjF0; s16 padF2;
    s32 (*fnF4)(void *);
    char padF8[0x100 - 0xF8];
    s16 adj100; s16 pad102;
    s32 (*fn104)(void *);
    char pad108[0x110 - 0x108];
    s16 adj110; s16 pad112;
    void (*fn114)(void *);
} UaVt;
typedef struct UiAnimator {
    char pad[4];
    f32 f4;
    f32 f8;
    char pad2[8];
    Key *w20;
    Key *w24;
    char pad3[16];
    UaVt *vt;
} UiAnimator;

void UiAnimator__Update(UiAnimator *self, f32 dt) {
    Key *node;
    Key *k;
    f32 t;
    f32 f12;
    f32 st;
    f32 ttime;
    f32 tf4;

    if (self->vt->fnF4((char *)self + self->vt->adjF0) != 0) {
        t = self->f4;
        node = self->w24;
        self->f4 = t + dt;
        if (node != NULL && node->next == NULL && !(node->time > self->f4)) {
            if (self->vt->fn104((char *)self + self->vt->adj100) == 0) {
                self->f4 = self->w24->time;
            } else {
                Key *nd = self->w24;
                f12 = self->f4;
                if (!(f12 < nd->time)) {
                    do {
                        st = f12 - nd->time;
                        self->f4 = st;
                        f12 = st;
                    } while (f12 >= nd->time);
                }
                self->f4 = self->f4 + self->f8;
            }
        }
        if (self->vt->fnF4((char *)self + self->vt->adjF0) != 0) {
            k = self->w20;
            if (k != NULL) {
                if (k->prev != NULL) {
                    ttime = k->time;
                    tf4 = self->f4;
                    if (!(ttime <= tf4)) {
                    loopA:
                        k = k->prev;
                        self->w20 = k;
                        if (k->prev != NULL) {
                            if (k->time > tf4)
                                goto loopA;
                        }
                    }
                }
                {
                    Key *n2 = self->w20;
                    self->w24 = n2;
                    if (n2->next != NULL) {
                        f32 tf4b = self->f4;
                        if (!(n2->time > tf4b)) {
                        loopB:
                            {
                                Key *nx = self->w24->next;
                                self->w24 = nx;
                                if (nx->next != NULL) {
                                    if (nx->time <= tf4b)
                                        goto loopB;
                                }
                            }
                        }
                    }
                }
                {
                    Key *n3 = self->w24;
                    Key *pv = n3->prev;
                    self->w20 = pv;
                    if (pv == NULL)
                        self->w20 = n3;
                }
                self->vt->fn114((char *)self + self->vt->adj110);
            }
            node = self->w24;
            if (node->time == self->f4) {
                if (self->vt->fn104((char *)self + self->vt->adj100) == 0)
                    self->vt->fnDC((char *)self + self->vt->adjD8);
            }
        }
    }
}

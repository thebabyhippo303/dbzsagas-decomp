/* SimLoop__ClearPendulumModeActors @ 0x8001D0AC (size: 0x338, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Game__IsPendulumModeImpl(void *);
u32 Mem__NewArray(u32);
void Mem__Delete(void *);
void Actor__MarkForDeath(void *, f32);
void Environment__AppendEntitiesByName(char *, void *);
void * Instance__FindByName(void *, char *, void *, s32);
void Instance__HideImpl(void *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
extern f32 lbl_8030FCC4 __attribute__((section(".data")));
extern char lbl_8030FCA0[] __attribute__((section(".data")));
extern char lbl_8030FCB0[] __attribute__((section(".data")));
extern char lbl_8030FCB4[] __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern u32 lbl_803946B4[] __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DCCB8;

typedef struct { void *buf; s32 c1; s32 c2; s32 c3; s32 c4; s32 c5; } Vec;

void SimLoop__ClearPendulumModeActors(void) {
    Vec v1;
    Vec v2;
    void *slot;
    s32 v30;
    s32 v29;
    u32 v31;
    Vec *p28;
    Vec *p22;
    Vec *p25;
    void **slotp;
    void *p21;
    u32 *maskp;
    void *node;
    u32 newsize;
    void *g9;
    void *actor;
    u32 abit;
    u32 m0;
    s32 capv;
    s32 growv;
    void *oldbuf;
    s32 diffv;
    void *r3v;
    s32 tv;
    void *fb1;
    void *fb2;

    if (Game__IsPendulumModeImpl((char *)lbl_803DC368 + 380) != 0) {
        v30 = (s32)&v1;
        v1.buf = (void *)Mem__NewArray(32);
        p28 = (Vec *)v30;
        ((Vec *)v30)->c3 = 8;
        p22 = p28;
        ((Vec *)v30)->c5 = 0;
        p25 = &v2;
        ((Vec *)v30)->c1 = 0;
        g9 = lbl_803DCCB8;
        p21 = (char *)g9 + 44;
        ((Vec *)v30)->c2 = 8;
        ((Vec *)v30)->c4 = 0;
        node = M2C_FIELD(g9, void **, 44);
        if (node != NULL) {
            maskp = lbl_803946B4;
            do {
                actor = M2C_FIELD(node, void **, 0);
                abit = M2C_FIELD(actor, u32 *, 0) & maskp[1];
                m0 = lbl_803946B4[0];
                if (abit == m0) {
                    v29 = p28->c1;
                    slotp = &slot;
                    capv = p28->c2;
                    slot = actor;
                    if (v29 != capv) {
                        goto insert;
                    }
                    growv = p28->c3;
                    v31 = v29 * 4;
                    newsize = (v29 + growv) * 4;
                    v30 = (s32)Mem__NewArray(newsize);
                    if (v30 == 0) {
                        goto advance;
                    }
                    oldbuf = p28->buf;
                    if (oldbuf != NULL) {
                        memcpy((void *)v30, oldbuf, v31);
                        oldbuf = p28->buf;
                        if (oldbuf != NULL) {
                            Mem__Delete(oldbuf);
                        }
                    }
                    p28->buf = (void *)v30;
                    p28->c2 = p28->c2 + growv;
                    if (p28->c4 != 0) {
                        memset((char *)v30 + v31, 0, newsize - v31);
                    }
                insert:
                    v31 = (u32)p28->buf;
                    v30 = v29 * 4;
                    diffv = v29 - p28->c1;
                    if (diffv != 0) {
                        memmove((char *)v31 + v30 + 4, (char *)v31 + v30, diffv * 4);
                    }
                    *(void **)((char *)v31 + v30) = *slotp;
                    p28->c1 = p28->c1 + 1;
                }
            advance:
                if (node == NULL) {
                    node = *(void **)p21;
                } else {
                    node = M2C_FIELD(node, void **, 20);
                }
            } while (node != NULL);
        }
        v30 = 0;
        if (p22->c1 > v30) {
            v29 = 0;
            do {
                r3v = M2C_FIELD(v1.buf, void **, v29);
                tv = M2C_FIELD(r3v, s32 *, 1516);
                if (tv == 11 || tv == 1 || tv == 14 || tv == 13) {
                } else {
                    Actor__MarkForDeath(r3v, lbl_8030FCC4);
                }
                v30 += 1;
                v29 += 4;
            } while (v30 < p22->c1);
        }
        r3v = v1.buf;
        if (r3v != NULL) {
            Mem__Delete(r3v);
        }
        v30 = 0;
        p22->c2 = v30;
        v29 = 8;
        p22->c1 = v30;
        v1.buf = NULL;
        v2.buf = (void *)Mem__NewArray(32);
        v2.c3 = v29;
        v2.c5 = v30;
        v2.c1 = v30;
        v2.c2 = v29;
        v2.c4 = v30;
        if (p25->c4 != 0 && p25->buf != NULL) {
            memset(p25->buf, 0, 32);
        }
        v30 = 0;
        Environment__AppendEntitiesByName(lbl_8030FCA0, p25);
        if (p25->c1 > v30) {
            v29 = 0;
            do {
                v30 += 1;
                r3v = M2C_FIELD(v2.buf, void **, v29);
                v29 += 4;
                Actor__MarkForDeath(r3v, lbl_8030FCC4);
            } while (v30 < p25->c1);
        }
        r3v = v2.buf;
        if (r3v != NULL) {
            Mem__Delete(r3v);
        }
        p25->c2 = 0;
        p25->c1 = 0;
        v2.buf = NULL;
        fb1 = Instance__FindByName(&lbl_803B1E84, lbl_8030FCB0, NULL, 0);
        if (fb1 != NULL) {
            Instance__HideImpl(fb1);
        }
        fb2 = Instance__FindByName((void *)&lbl_803B1E84, lbl_8030FCB4, NULL, 0);
        if (fb2 != NULL) {
            Instance__HideImpl(fb2);
        }
        r3v = v2.buf;
        if (r3v != NULL) {
            Mem__Delete(r3v);
        }
        r3v = v1.buf;
        if (r3v != NULL) {
            Mem__Delete(r3v);
        }
    }
}

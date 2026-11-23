/* VoiceHandle__Allocate @ 0x8019EC98 (size: 0x380, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct {
    void **data;
    s32 count;
    s32 cap;
    s32 grow;
    s32 clear;
    s32 unk;
} Vec;
typedef struct {
    void *head;
    s32 bsize;
    Vec *vec;
} Pool;
void *Mem__New(u32);
u32 Mem__NewArray(u32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, u32);
void *memmove(void *, void *, u32);
void *memset(void *, int, u32);
extern Pool *lbl_803DCC40;
void *VoiceHandle__Allocate(void) {
    Pool *p = lbl_803DCC40;
    Vec *old;
    Vec *v;
    s32 n1;
    s32 n2;
    void *rr;
    old = p->vec;
    if (old == NULL) {
        n1 = p->bsize;
        if (n1 == 0) {
            register s32 one = 1;
            v = (Vec *)Mem__New(24);
            v->data = (void **)Mem__NewArray(4);
            v->cap = one;
            v->count = n1;
            v->grow = n1;
            v->clear = n1;
            v->unk = n1;
        } else {
            register s32 eight = 8;
            register s32 four;
            v = (Vec *)Mem__New(24);
            four = 4;
            v->data = (void **)Mem__NewArray(32);
            v->cap = eight;
            v->grow = four;
            v->unk = (s32)old;
            v->count = (s32)old;
            v->clear = (s32)old;
        }
        p->vec = v;
        {
            void *btmp = (void *)Mem__NewArray((u32)(n1 * 4));
            void **slot;
            s32 cnt;
            s32 ok;
            if (btmp == NULL)
                goto check2;
            v = p->vec;
            slot = &btmp;
            cnt = v->count;
            if (cnt == v->cap) {
                u32 oldbytes = (u32)(cnt * 4);
                u32 newbytes = (u32)((cnt + v->grow) * 4);
                void **nd = (void **)Mem__NewArray(newbytes);
                if (nd == NULL) {
                    ok = 0;
                    goto check1;
                }
                if (v->data != NULL) {
                    memcpy(nd, v->data, oldbytes);
                    if (v->data != NULL)
                        Mem__Delete(v->data);
                }
                v->data = nd;
                v->cap = v->cap + v->grow;
                if (v->clear != 0)
                    memset((char *)nd + oldbytes, 0, newbytes - oldbytes);
            }
            {
                void **d = v->data;
                s32 off = cnt * 4;
                char *dst = (char *)d + off;
                s32 diff = v->count - cnt;
                if (diff != 0)
                    memmove(dst + 4, dst, (u32)(diff * 4));
                ok = 1;
                *(void **)dst = *slot;
                v->count = v->count + 1;
            }
check1:
            if (ok != 0) {
                s32 i1 = 0;
                char *cur1 = (char *)btmp;
                void *first1;
                void *last1;
                if ((u32)i1 < (u32)n1) {
                    s32 lastidx1 = n1 - 1;
                    do {
                        if (i1 == 0)
                            first1 = cur1;
                        if (i1 == lastidx1)
                            last1 = cur1;
                        {
                            char *nxt1 = cur1 + 4;
                            i1++;
                            *(char **)cur1 = nxt1;
                            cur1 = nxt1;
                        }
                    } while ((u32)i1 < (u32)n1);
                }
                *(void **)last1 = p->head;
                p->head = first1;
            }
        }
    }
check2:
    if (p->head == NULL) {
        {
            void *btmp2;
            void **slot2;
            s32 cnt2;
            s32 ok2;
            n2 = p->bsize;
            if (n2 == 0)
                return NULL;
            btmp2 = (void *)Mem__NewArray((u32)(n2 * 4));
            if (btmp2 == NULL) {
                ok2 = 0;
                goto tail2;
            }
            v = p->vec;
            slot2 = &btmp2;
            cnt2 = v->count;
            if (cnt2 == v->cap) {
                u32 oldbytes2 = (u32)(cnt2 * 4);
                u32 newbytes2 = (u32)((cnt2 + v->grow) * 4);
                void **nd2 = (void **)Mem__NewArray(newbytes2);
                if (nd2 == NULL) {
                    ok2 = 0;
                    goto tail2;
                }
                if (v->data != NULL) {
                    memcpy(nd2, v->data, oldbytes2);
                    if (v->data != NULL)
                        Mem__Delete(v->data);
                }
                v->data = nd2;
                v->cap = v->cap + v->grow;
                if (v->clear != 0)
                    memset((char *)nd2 + oldbytes2, 0, newbytes2 - oldbytes2);
            }
            {
                void **d2 = v->data;
                s32 off2 = cnt2 * 4;
                char *dst2 = (char *)d2 + off2;
                s32 diff2 = v->count - cnt2;
                if (diff2 != 0)
                    memmove(dst2 + 4, dst2, (u32)(diff2 * 4));
                ok2 = 1;
                *(void **)dst2 = *slot2;
                v->count = v->count + 1;
            }
            {
                s32 i2 = 0;
                char *cur2 = (char *)btmp2;
                void *first2;
                void *last2;
                if ((u32)i2 < (u32)n2) {
                    s32 lastidx2 = n2 - 1;
                    do {
                        if (i2 == 0)
                            first2 = cur2;
                        if (i2 == lastidx2)
                            last2 = cur2;
                        {
                            char *nxt2 = cur2 + 4;
                            i2++;
                            *(char **)cur2 = nxt2;
                            cur2 = nxt2;
                        }
                    } while ((u32)i2 < (u32)n2);
                }
                *(void **)last2 = p->head;
                p->head = first2;
                ok2 = 1;
            }
tail2:
            if (ok2 == 0)
                return NULL;
        }
    }
    rr = p->head;
    p->head = *(void **)rr;
    return rr;
}

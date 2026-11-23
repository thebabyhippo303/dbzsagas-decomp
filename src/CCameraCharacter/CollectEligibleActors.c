/* CCameraCharacter__CollectEligibleActors @ 0x800BDA3C (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
typedef struct Ent { s32 flags; } Ent;
typedef struct Node { Ent *ent; char pad[0x10]; struct Node *next; } Node;
typedef struct Vec { Ent **data; s32 count; s32 cap; s32 grow; s32 zero; } Vec;
typedef struct World { char pad[0x14]; Node *head; } World;
typedef struct Mask { s32 value; s32 bits; } Mask;
void *Game__GetPlayerImpl(void *, int);
void *fn_80184348(int size);
void fn_801843CC(void *block);
void *memcpy(void *dst, const void *src, unsigned int n);
void *memmove(void *dst, void *src, unsigned int n);
void *memset(void *dst, int value, u32 n);
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern World *lbl_803DCCB8;
void CCameraCharacter__CollectEligibleActors(void *unused, Vec *vec) {
    Node **headp;
    Node *node;

    headp = &lbl_803DCCB8->head;
    node = *headp;
    if (node != 0) {
        do {
            Ent *ent;
            Ent *keep;
            Ent **saved;
            s32 index;

            ent = node->ent;
            if ((ent->flags & lbl_803945E4.bits) != lbl_803945E4.value) {
                goto next;
            }
            if (ent == Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
                goto next;
            }
            keep = ent;
            {
                    index = vec->count;
                    saved = &keep;
                    if (index == vec->cap) {
                        s32 bytes;
                        s32 nbytes;
                        Ent **fresh;

                        bytes = index * 4;
                        nbytes = (index + vec->grow) * 4;
                        fresh = fn_80184348(nbytes);
                        if (fresh != 0) {
                            if (vec->data != 0) {
                                memcpy(fresh, vec->data, (unsigned int) bytes);
                                if (vec->data != 0) {
                                    fn_801843CC(vec->data);
                                }
                            }
                            vec->data = fresh;
                            vec->cap = vec->cap + vec->grow;
                            if (vec->zero != 0) {
                                memset((char *) fresh + bytes, 0, (u32) (nbytes - bytes));
                            }
                        } else {
                            goto next;
                        }
                    }
                    {
                        Ent **data;
                        s32 off;
                        s32 tail;
                        Ent **slot;

                        data = vec->data;
                        off = index * 4;
                        tail = vec->count - index;
                        slot = (Ent **) ((char *) data + off);
                        if (tail != 0) {
                            memmove(slot + 1, slot, (unsigned int) tail * 4);
                        }
                        *(Ent **) ((char *) data + off) = *saved;
                        vec->count = vec->count + 1;
                    }
            }
next:
            if (node != 0) {
                node = node->next;
            } else {
                node = *headp;
            }
        } while (node != 0);
    }
}

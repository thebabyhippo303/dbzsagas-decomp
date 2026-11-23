/* Environment__AppendEntitiesByName @ 0x800EB180 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct Ent {
    s32 flags;
    char pad[444];
    char name;
} Ent;

typedef struct Node {
    Ent *ent;
    char pad[0x10];
    struct Node *next;
} Node;

typedef struct Vec {
    Ent **data;
    s32 count;
    s32 cap;
    s32 grow;
    s32 zero;
} Vec;

typedef struct World {
    char pad[0x14];
    Node *head;
} World;

typedef struct Mask {
    s32 value;
    s32 bits;
} Mask;

int String__CompareIgnoreCase(const char *a, const char *b);
void *fn_80184348(int size);
void fn_801843CC(void *block);
void *memcpy(void *dst, const void *src, unsigned int n);
void *memmove(void *dst, void *src, unsigned int n);
void *memset(void *dst, int value, u32 n);

extern Mask lbl_803945A4 __attribute__((section(".data")));
extern World *lbl_803DCCB8;

void Environment__AppendEntitiesByName(char *name, Vec *vec) {
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
            if ((ent->flags & lbl_803945A4.bits) != lbl_803945A4.value) {
                goto next;
            }
            keep = ent;
            if (String__CompareIgnoreCase(&ent->name, name) != 0) {
                goto next;
            }
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

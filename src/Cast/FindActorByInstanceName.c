/* Cast__FindActorByInstanceName @ 0x802ABF24 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct F84 { char pad[0x94]; char *str; } F84;
typedef struct Actor { int flags; char pad4[0x84 - 4]; F84 *f84; } Actor;
typedef struct Node { Actor *actor; char pad[0x14 - 4]; struct Node *next; } Node;
typedef struct World { char pad[0x20]; Node *head20; char pad24[8]; Node *head2C; } World;
typedef struct Mask { int value; int mask; } Mask;
extern World *lbl_803DCCB8;
extern Mask lbl_803945A4 __attribute__((section(".data")));
int String__CompareIgnoreCase(const char *, const char *);

void *Cast__FindActorByInstanceName(char *name) {
    Node *n = lbl_803DCCB8->head2C;
    if (n != 0) {
        do {
            Actor *a = n->actor;
            if ((a->flags & lbl_803945A4.mask) == lbl_803945A4.value && String__CompareIgnoreCase(a->f84->str + 0x20, name) == 0) {
                return a;
            }
            {
                World *w = lbl_803DCCB8;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = w->head2C;
                }
            }
        } while (n != 0);
    }
    n = lbl_803DCCB8->head20;
    if (n != 0) {
        do {
            Actor *a = n->actor;
            if ((a->flags & lbl_803945A4.mask) == lbl_803945A4.value && String__CompareIgnoreCase(a->f84->str + 0x20, name) == 0) {
                return a;
            }
            {
                World *w = lbl_803DCCB8;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = w->head20;
                }
            }
        } while (n != 0);
    }
    return NULL;
}

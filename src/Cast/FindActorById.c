/* Cast__FindActorById @ 0x80234A78 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct Actor { char pad[0x10C]; s32 id; } Actor;
typedef struct Node { Actor *actor; char pad[0x14 - 4]; struct Node *next; } Node;
typedef struct World { char pad[0x14]; Node *head14; } World;
extern World *lbl_803DCCB8;

void *Cast__FindActorById(s32 id) {
    Node *n = lbl_803DCCB8->head14;

    if (n != 0) {
        do {
            Actor *a = n->actor;
            if (a->id == id) {
                return a;
            }
            {
                World *w = lbl_803DCCB8;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = w->head14;
                }
            }
        } while (n != 0);
    }
    return NULL;
}

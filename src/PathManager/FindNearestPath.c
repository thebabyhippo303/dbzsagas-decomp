/* PathManager__FindNearestPath @ 0x801FD234 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct Vt { char pad[48]; s16 adjust; char pad2[2]; f32 (*fn)(void *, void *); } Vt;
typedef struct Node { s32 flag; char pad[16]; Vt *vt; } Node;
typedef struct NList { Node *node; struct NList *next; } NList;
typedef struct Group { s32 pad0; s32 mask; s32 pad8; NList *list; } Group;
typedef struct Mgr { char pad[8]; Group *groups[32]; } Mgr;
extern f32 lbl_803450CC __attribute__((section(".data")));
void *PathManager__FindNearestPath(Mgr *mgr, u32 *pt, s32 mask) {
    union { u32 b0; u32 a[3]; } u;
    u32 *arr;
    f32 bestVal;
    void *best;
    s32 i;
    Group *g;
    NList *list;
    Node *node;
    Vt *vt;
    f32 d;
    bestVal = lbl_803450CC;
    best = NULL;
    i = 0;
    do {
        g = mgr->groups[i];
        if ((g != NULL) && ((mask & g->mask) != 0)) {
            list = g->list;
            if (list != NULL) {
                arr = u.a;
                do {
                    if (list->node->flag == 0) {
                        u.b0 = pt[0];
                        arr[1] = pt[1];
                        arr[2] = pt[2];
                        node = list->node;
                        vt = node->vt;
                        d = vt->fn((char *)node + vt->adjust, arr);
                        if (!(d >= bestVal)) {
                            best = list->node;
                            bestVal = d;
                        }
                    }
                    list = list->next;
                } while (list != NULL);
            }
        }
        i++;
    } while (i <= 31);
    return best;
}

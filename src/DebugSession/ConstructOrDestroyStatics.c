/* DebugSession__ConstructOrDestroyStatics @ 0x802CD500 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct DNode { char pad[0x10]; struct DNode *prev; struct DNode *next; } DNode;
typedef struct DList { DNode *head; DNode *tail; s32 owns; s32 count; } DList;
void fn_802CC834(void *);
void DebugSession__Construct(void *);
void DebugWindowGroup__Destroy(void *, s32);
void DebugSession__Destroy(void *, s32);
extern char lbl_803BEFDC[];
extern char lbl_803BEFE8[];
extern DList lbl_803BEFF4 __attribute__((section(".data")));
void DebugSession__ConstructOrDestroyStatics(s32 arg0, u32 arg1) {
    DList *l;
    DList *l2;
    DNode *n;
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802CC834(lbl_803BEFDC);
            DebugSession__Construct(lbl_803BEFE8);
            l2 = &lbl_803BEFF4;
            l2->head = 0;
            l2->tail = 0;
            l2->owns = 0;
            l2->count = 0;
            return;
        }
        l = &lbl_803BEFF4;
        if (l->owns != 0 && lbl_803BEFF4.head != 0) {
            do {
                n = l->head;
                l->head = n->next;
                if (l->tail == n) {
                    l->tail = n->prev;
                } else {
                    n->next->prev = n->prev;
                }
                if (l->owns != 0) {
                    if (n != 0) {
                        DebugWindowGroup__Destroy(n, 3);
                    }
                } else {
                    n->prev = 0;
                    n->next = 0;
                }
                l->count--;
            } while (l->head != 0);
        }
        DebugSession__Destroy(lbl_803BEFE8, 2);
    }
}

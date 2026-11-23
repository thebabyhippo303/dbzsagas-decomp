/* Sound__ConstructOrDestroyStatics @ 0x8018952C (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct SNode { char pad[0x3C]; struct SNode *next; struct SNode *prev; } SNode;
typedef struct SList { SNode *head; SNode *tail; s32 owns; s32 count; } SList;
typedef struct SStat { char pad[0x34]; f32 lo; f32 span; char pad2[0x48 - 0x3C]; s32 v; } SStat;
void * SoundEffectParams__Construct(void *);
void SoundEffectParams__Destroy(void *, s32);
void Mem__Delete(void *);
void fn_80189660(s32);
extern f32 lbl_8033E348 __attribute__((section(".data")));
extern f32 lbl_8033E34C __attribute__((section(".data")));
extern SList lbl_803A2D84 __attribute__((section(".data")));
extern char lbl_803A2D94[] __attribute__((section(".data")));
extern SStat lbl_803A35A0 __attribute__((section(".data")));

void Sound__ConstructOrDestroyStatics(s32 arg0, u32 arg1) {
    SList *l;
    SList *l2;
    SNode *n;
    register s32 o;
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            l2 = &lbl_803A2D84;
            l2->tail = 0;
            lbl_803A2D84.head = 0;
            l2->owns = 1;
            l2->count = 0;
            SoundEffectParams__Construct(lbl_803A2D94);
            lbl_803A35A0.v = 100;
            lbl_803A35A0.lo = lbl_8033E348;
            lbl_803A35A0.span = lbl_8033E34C - lbl_8033E348;
            fn_80189660((s32)&lbl_803A35A0);
            return;
        }
        SoundEffectParams__Destroy(lbl_803A2D94, 2);
        l = &lbl_803A2D84;
        if (l->owns != 0 && lbl_803A2D84.head != 0) {
            while (l->head != 0) {
                n = l->head;
                l->head = n->next;
                if (l->tail == n) {
                    l->tail = n->prev;
                } else {
                    n->next->prev = n->prev;
                }
                o = l->owns;
                if (o != 0) {
                    Mem__Delete(n);
                } else {
                    n->prev = (SNode *)o;
                    n->next = (SNode *)o;
                }
                l->count = l->count - 1;
            }
        }
    }
}

/* ParticleMgr__ResetRenderState @ 0x8021D60C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct PNode {
    char pad[4];
    u32 flags;
    char pad2[188];
    struct PNode *next;
} PNode;
typedef struct PSlot {
    PNode *head;
    char pad[12];
} PSlot;
extern s32 lbl_803AD05C[];

void ParticleMgr__ResetRenderState(void) {
    s32 i;
    PNode *node;
    PSlot *slots;

    lbl_803AD05C[0x180] = 0;
    slots = (PSlot *)((char *)lbl_803AD05C + 32);
    lbl_803AD05C[0x181] = 0;
    i = 0;
    do {
        node = slots[i].head;
        while (node != NULL) {
            lbl_803AD05C[0x180]++;
            node->flags &= ~0x800;
            node = node->next;
        }
        i++;
    } while (i <= 19);
}

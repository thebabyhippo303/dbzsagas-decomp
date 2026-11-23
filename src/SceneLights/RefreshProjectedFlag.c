/* SceneLights__RefreshProjectedFlag @ 0x8021AE70 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct { char pad0[0x14]; void *head; char pad1[0x38]; s32 projected; } SceneLights;
typedef struct Node { struct Node *next; s32 flags; } Node;
extern SceneLights lbl_803ACFCC __attribute__((section(".data")));
void SceneLights__RefreshProjectedFlag(void) {
    Node *node;
    lbl_803ACFCC.projected = 0;
    node = (Node *)lbl_803ACFCC.head;
    if (node == 0) return;
    do {
        if ((node->flags & 9) == 9) {
            lbl_803ACFCC.projected = 1;
            return;
        }
        node = node->next;
    } while (node != 0);
}
/* SceneLights__RemoveAll @ 0x8021A9B8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct Node { void *next; s32 flags; char pad[48]; s32 f38; } Node;
void SceneLights__RemoveLight(s32);
extern void *lbl_803ACFE0 __attribute__((section(".data")));
void SceneLights__RemoveAll(s32 arg0) {
    Node *node = lbl_803ACFE0;
    if (node == NULL) {
        return;
    }
    do {
        Node *next = node->next;
        if (arg0 != 0 || !(node->flags & 8)) {
            SceneLights__RemoveLight(node->f38);
        }
        node = next;
    } while (node != NULL);
}

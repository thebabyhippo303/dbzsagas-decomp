/* SceneNode__Unlink @ 0x80212650 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct SceneNode { void *f0; void *first; void *next; void *parent; } SceneNode;
void SceneNode__Unlink(SceneNode *node) {
    SceneNode *parent = node->parent;
    if (node == parent->first) {
        parent->first = node->next;
    } else {
        SceneNode *cur = parent->first;
        SceneNode *next = node->next;
        while (cur->next != node) {
            cur = cur->next;
        }
        cur->next = next;
    }
    node->parent = 0;
}

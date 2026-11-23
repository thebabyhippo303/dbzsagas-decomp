/* ShadowMgr__ReplaceInstance @ 0x8022D22C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;

typedef struct ShadowNode {
    struct ShadowNode *next;
    void *inst;
} ShadowNode;

typedef struct ShadowMgrData {
    char pad[0x10];
    ShadowNode *head;
    char pad2[0x24 - 0x14];
    s32 active;
} ShadowMgrData;

extern ShadowMgrData lbl_803ADB20 __attribute__((section(".data")));

void ShadowMgr__ReplaceInstance(void *arg0, void *arg1) {
    ShadowNode *node;

    if (lbl_803ADB20.active == 0) {
        return;
    }
    node = lbl_803ADB20.head;
    if (node == NULL) {
        return;
    }
    do {
        if (node->inst == arg0) {
            node->inst = arg1;
        }
        node = node->next;
    } while (node != NULL);
}

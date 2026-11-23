/* EffectHandle__ClearFrontPriorityForGroup @ 0x8022F598 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct EffectHandleNode {
    struct EffectHandleNode *next;
    int pad4;
    int flags;
    char padC[6];
    unsigned short group;
} EffectHandleNode;

extern EffectHandleNode *lbl_803ADDA0 __attribute__((section(".data")));

void EffectHandle__ClearFrontPriorityForGroup(int group) {
    EffectHandleNode *node = lbl_803ADDA0;

    if (node == 0) {
        return;
    }
    do {
        if (node->group == group) {
            node->flags &= ~0x40;
        }
        node = node->next;
    } while (node != 0);
}

/* ShadowMgr__Shutdown @ 0x8022D0BC (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct LNode {
    struct LNode *next;
    char pad[20];
    s32 count;
} LNode;

extern void ShadowMgr__ReleaseLightSlot(void *, s32);
extern void memFree(void *ptr);
extern void memset(void *dst, int value, unsigned int n);
extern void *lbl_803ADB30 __attribute__((section(".data")));
extern void *lbl_803ADB20 __attribute__((section(".data")));

void ShadowMgr__Shutdown(void) {
    LNode *node;
    s32 i;

    node = lbl_803ADB30;
    if (node != 0) {
        do {
            for (i = 0; i < node->count; i++) {
                ShadowMgr__ReleaseLightSlot(node, i);
            }
            node = node->next;
        } while (node != 0);
    }
    if (lbl_803ADB20 != 0) {
        memFree(lbl_803ADB20);
    }
    memset(&lbl_803ADB20, 0, 60);
}

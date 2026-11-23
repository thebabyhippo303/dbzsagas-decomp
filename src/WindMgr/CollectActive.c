/* WindMgr__CollectActive @ 0x80219918 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WindMgr__CollectActive @ 0x80219918 (0x68). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct WNode {
    char pad[2];
    u16 flags;
    char pad2[128];
    struct WNode *next;
} WNode;

typedef struct {
    char pad0[12];
    WNode *head;
    char pad1[28];
    WNode **arr;
    s32 cnt;
} WSt2;

extern WSt2 lbl_803ADCB0 __attribute__((section(".data")));

s32 WindMgr__CollectActive(void *mgr, u32 mask) {
    WNode *n;

    lbl_803ADCB0.cnt = 0;
    n = lbl_803ADCB0.head;
    if (n != NULL) {
        do {
            WNode *cur;
            u16 f;
            cur = n;
            n = n->next;
            f = cur->flags;
            if ((f & 512) && (f & mask)) {
                lbl_803ADCB0.arr[lbl_803ADCB0.cnt++] = cur;
            }
        } while (n != NULL);
    }
    return lbl_803ADCB0.cnt;
}

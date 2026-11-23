/* PartitionMgr__Update @ 0x80253004 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct UpdateNode {
    char pad[4];
    struct UpdateNode *next;
    void (*func)(s32);
    s32 arg;
} UpdateNode;

typedef struct {
    char pad[0x154];
    s32 f154;
    char pad2[0x168 - 0x154 - 4];
    UpdateNode *head;
} PartitionMgr;

void PartitionMgr__UnloadPending(PartitionMgr *mgr, s32 flag);
void PartitionMgr__UpdateActiveSet(PartitionMgr *mgr);
void PartitionMgr__ServiceFileRead(PartitionMgr *mgr);
void PartitionMgr__LoadNextPartition(PartitionMgr *mgr, s32 flag);

void PartitionMgr__Update(PartitionMgr *mgr) {
    UpdateNode *node;

    PartitionMgr__UnloadPending(mgr, 0);
    PartitionMgr__UpdateActiveSet(mgr);
    PartitionMgr__ServiceFileRead(mgr);
    PartitionMgr__LoadNextPartition(mgr, 1);
    if (mgr->f154 != 0) {
        node = mgr->head;
        if (node != NULL) {
            do {
                node->func(node->arg);
                node = node->next;
            } while (node != NULL);
        }
        mgr->f154 = 0;
    }
}

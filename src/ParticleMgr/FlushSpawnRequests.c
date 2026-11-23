/* ParticleMgr__FlushSpawnRequests @ 0x8021D230 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct Node { struct Node *next; } Node;
void SList__Init(void *, s32);
void SList__LinkArray(void *, s32, s32, s32);
void ParticleMgr__ProcessSpawnRequest(void *);
extern Node *lbl_803AD4B8 __attribute__((section(".data")));
extern char lbl_803AD4AC[] __attribute__((section(".data")));
extern char lbl_803AD05C[] __attribute__((section(".data")));
void ParticleMgr__FlushSpawnRequests(void) {
    Node *n = lbl_803AD4B8;
    void *base;
    if (n != NULL) {
        do {
            ParticleMgr__ProcessSpawnRequest(n);
            n = n->next;
        } while (n != NULL);
    }
    SList__Init((void *)lbl_803AD4AC, 0);
    base = (void *)lbl_803AD05C;
    SList__LinkArray((void *)lbl_803AD4AC, *(s32 *)((char *)base + 0x44C), *(s32 *)((char *)base + 8), 112);
    SList__Init((char *)base + 0x45C, 0);
}

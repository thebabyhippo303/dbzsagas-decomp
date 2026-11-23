/* PartitionMgr__ListContains @ 0x80252FD0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 PartitionMgr__ListContains(void *arg0, void **arg1, u32 arg2) {
    void *n = *arg1;
    if (n != NULL) {
        do {
            if (M2C_FIELD(n, u32 *, 8) != arg2) {
                goto adv;
            }
            return 1;
adv:
            n = M2C_FIELD(n, void **, 4);
        } while (n != NULL);
    }
    return 0;
}

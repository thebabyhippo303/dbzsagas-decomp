/* EzNode__GetDescendantCount @ 0x80265CD0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef s32 (*CountFn)(void *);

s32 EzNode__GetDescendantCount(void *node) {
    s32 count = 0;
    void *child = M2C_FIELD(node, void **, 4);

    if (child != NULL) {
        do {
            void *iface = M2C_FIELD(child, void **, 16);
            CountFn fn = (CountFn)M2C_FIELD(iface, void **, 132);
            s32 adj = (s32)M2C_FIELD(iface, s16 *, 128);
            s32 ret = fn((char *)child + adj);
            s32 tmp = count + 1;

            count = tmp + ret;
            child = M2C_FIELD(child, void **, 8);
        } while (child != NULL);
    }
    return count;
}

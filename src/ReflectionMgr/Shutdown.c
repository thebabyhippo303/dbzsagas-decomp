/* ReflectionMgr__Shutdown @ 0x80227A5C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: ReflectionMgr__Shutdown @ 0x80227A5C (0x50). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { void *head; char pad[0x2C - 4]; } ReflectionMgrSys;
extern ReflectionMgrSys lbl_803ADD5C;
void ReflectionMgr__FreeAll(void);
void memFree(void *p);
void memset(void *, int, u32);

void ReflectionMgr__Shutdown(void) {
    ReflectionMgr__FreeAll();
    if (lbl_803ADD5C.head != NULL) {
        memFree(lbl_803ADD5C.head);
    }
    memset(&lbl_803ADD5C, 0, 0x2C);
}

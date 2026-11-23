/* ReflectionMgr__FreeAll @ 0x80227F9C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct REntry { char pad[0xA0]; void *item; } REntry;
typedef struct RSys { char pad[0x10]; REntry *head; } RSys;
extern RSys lbl_803ADD5C __attribute__((section(".data")));
void ReflectionMgr__FreeEntry(void *);
void ReflectionMgr__FreeAll(void) {
    RSys *sys;
    if (lbl_803ADD5C.head != NULL) {
        do {
            sys = &lbl_803ADD5C;
            ReflectionMgr__FreeEntry(sys->head->item);
        } while (sys->head != NULL);
    }
}

/* ReflectionMgr__FreeEntry @ 0x80227F34 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[0xA0]; void *item; } REntry;
void SList__Remove(void *, void *);
void SList__PushFront(void *, void *);
extern M2C_UNK lbl_803ADD5C __attribute__((section(".data")));

void ReflectionMgr__FreeEntry(void *arg0) {
    u32 idx;
    REntry *e;
    void *sys;
    idx = (u32)arg0 >> 16;
    e = (REntry *)((char *)M2C_FIELD(&lbl_803ADD5C, void **, 0) + idx * 164);
    sys = &lbl_803ADD5C;
    if (e->item == arg0) {
        e->item = NULL;
        SList__Remove((char *)sys + 16, e);
        SList__PushFront((char *)sys + 4, e);
    }
}

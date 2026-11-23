/* WindMgr__FreeGroup @ 0x8021781C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct WindEntry {
    char pad0[8];
    u16 group;
    char pad1[132 - 10];
    struct WindEntry *next;
} WindEntry;
extern WindEntry *lbl_803ADCBC __attribute__((section(".bss")));
void WindMgr__FreeEntry(void *);
void WindMgr__FreeGroup(s32 id) {
    WindEntry *e = lbl_803ADCBC;
    while (e != NULL) {
        WindEntry *cur = e;
        e = e->next;
        if (cur->group == id) {
            WindMgr__FreeEntry(cur);
        }
    }
}

/* VM__SelectVictimPage @ 0x802E9FB0 (size: 0x44, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
extern s32 lbl_803DD0C4 __attribute__((section(".sbss")));
void VM__SelectVictimPageNRU(void);
void VM__SelectVictimPageRandom(void);
void VM__SelectVictimPageRoundRobin(void);
void VM__SelectVictimPage(void) {
    volatile int pad;
    if (lbl_803DD0C4 == 0) {
        VM__SelectVictimPageNRU();
    } else if (lbl_803DD0C4 == 1) {
        VM__SelectVictimPageRandom();
    } else {
        VM__SelectVictimPageRoundRobin();
    }
}

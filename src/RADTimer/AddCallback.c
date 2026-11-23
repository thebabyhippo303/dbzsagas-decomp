/* RADTimer__AddCallback @ 0x802F7E5C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);

void RADTimer__AddCallback(void *timer, void *node, void *a2, void *a3) {
    s32 level;

    level = OSDisableInterrupts();
    M2C_FIELD(node, s32 *, 12) = 1;
    M2C_FIELD(node, void **, 20) = a2;
    M2C_FIELD(node, void **, 24) = a3;
    M2C_FIELD(node, s32 *, 16) = 0;
    M2C_FIELD(node, void **, 0) = M2C_FIELD(timer, void **, 48);
    M2C_FIELD(timer, void **, 48) = node;
    M2C_FIELD(timer, s32 *, 56) = M2C_FIELD(timer, s32 *, 56) + 1;
    OSRestoreInterrupts(level);
}

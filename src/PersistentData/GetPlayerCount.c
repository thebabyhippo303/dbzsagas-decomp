/* PersistentData__GetPlayerCount @ 0x80126BEC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: PersistentData__GetPlayerCount @ 0x80126BEC (0x48). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276D8[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetPlayerCount(void) {
    int v = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276D8);
    if ((unsigned int)(v - 1) > 1u) {
        return 1;
    }
    return v;
}

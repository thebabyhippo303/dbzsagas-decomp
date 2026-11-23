/* VM__AllocPageTable @ 0x802EA930 (size: 0x3C, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 OSGetArenaLo(void);
void OSSetArenaLo(u32);
void VM__ClearPageTable(void);
extern u32 lbl_803DD8E0;
void VM__AllocPageTable(void) {
    u32 lo = OSGetArenaLo();
    u32 high = lo + 0x10000;
    u32 low = lo & 0xFFFF;
    OSSetArenaLo((lbl_803DD8E0 = high - low) + 0x10000);
    VM__ClearPageTable();
}

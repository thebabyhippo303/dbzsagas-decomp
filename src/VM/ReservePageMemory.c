/* VM__ReservePageMemory @ 0x802E9D84 (size: 0x30, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define NULL 0
s32 OSGetArenaLo(void);
void OSSetArenaLo(s32);
extern s32 lbl_803DD8A8;
extern s32 lbl_803DD8AC;
void VM__ReservePageMemory(void) {
    volatile char pad[8];
    s32 temp_r3;
    temp_r3 = OSGetArenaLo();
    lbl_803DD8AC = temp_r3;
    OSSetArenaLo(temp_r3 + lbl_803DD8A8);
}

/* DebugMenu__AddBoolItem @ 0x802653A0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * BaseMenu__AddItem(void *, void *);
void *DebugMenu__AddBoolItem(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = BaseMenu__AddItem(arg0, arg1);
    if (temp_r3 != NULL) {
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x10);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, s32), 0x25C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x258), 1, arg2);
    }
    return temp_r3;
}

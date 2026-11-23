/* EventDispatcher__Broadcast @ 0x80251708 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void EventDispatcher__Broadcast(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r9;
    void *var_r31;

    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    var_r31 = M2C_FIELD(arg0, void **, 4);
    if (var_r31 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r31, void **, 0x18);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32, s32), 0x14)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x10), arg1, arg2, arg3);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        } while (var_r31 != NULL);
    }
}

/* LevelObjectList__PushFreeEntry @ 0x8028F894 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void LevelObjectList__PushFreeEntry(void *arg0, void *arg1) {
    s32 var_r0;
    u8 temp_r9;
    void *temp_r9_2;

    if (arg1 != NULL) {
        temp_r9 = M2C_FIELD(arg1, u8 *, 0x78);
        var_r0 = 1;
        if ((s32) temp_r9 == 0) {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            M2C_FIELD(arg1, u8 *, 0x78) = (u8) (temp_r9 - 1);
        }
        temp_r9_2 = M2C_FIELD(arg1, void **, 0);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg1 + M2C_FIELD(temp_r9_2, s16 *, 8), 2);
        M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    }
}

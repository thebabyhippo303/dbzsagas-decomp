/* LevelObjectList__FreeEntry @ 0x8028F568 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void LevelObjectList__PushFreeEntry(void *, void *);
void LevelObjectList__FreeEntry(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r30;
    void *temp_r9;

    if (arg1 != NULL) {
        temp_r30 = arg0 + 0x40;
        if ((void *) M2C_FIELD(arg0, void **, 0x40) == arg1) {
            M2C_FIELD(arg0, void **, 0x40) = (void *) M2C_FIELD(arg1, void **, 0x7C);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x80), void **, 0x7C) = (void *) M2C_FIELD(arg1, void **, 0x7C);
        }
        if ((void *) M2C_FIELD(temp_r30, void **, 4) == arg1) {
            M2C_FIELD(temp_r30, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x80);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x7C), void **, 0x80) = (void *) M2C_FIELD(arg1, void **, 0x80);
        }
        temp_r0 = M2C_FIELD(temp_r30, void **, 8);
        if (temp_r0 != NULL) {
            if (arg1 != NULL) {
                temp_r9 = M2C_FIELD(arg1, void **, 0);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg1 + M2C_FIELD(temp_r9, s16 *, 8), 3);
            }
        } else {
            M2C_FIELD(arg1, void **, 0x80) = temp_r0;
            M2C_FIELD(arg1, void **, 0x7C) = temp_r0;
        }
        M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) - 1);
        LevelObjectList__PushFreeEntry(M2C_FIELD(arg0, void **, 0), arg1);
    }
}

/* Avatar__TestFootprintImpl @ 0x800B0D80 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Avatar__PopScriptInt(void *, void *);
s32 fn_8023E7E8(s32);
void Script__TestFootprintImpl(void *arg0) {
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r28 = Avatar__PopScriptInt(M2C_FIELD(arg0, void **, 0), NULL);
    temp_r29 = Avatar__PopScriptInt(M2C_FIELD(arg0, void **, 0), NULL);
    temp_r30 = Avatar__PopScriptInt(M2C_FIELD(arg0, void **, 0), NULL);
    if (!(M2C_FIELD(arg0, s32 *, 0x6B8) & temp_r28)) {
        temp_r3 = fn_8023E7E8(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), s32 *, 0x114));
        temp_r3_2 = (temp_r29 + 3) % temp_r3;
        if (temp_r3_2 < temp_r29) {
            if ((temp_r30 < 0) || (temp_r30 >= temp_r3_2)) {
                if (temp_r30 >= temp_r29) {
                    if (temp_r30 < temp_r3) {
                        goto block_9;
                    } else {
                        goto block_10;
                    }
                }
                goto block_10;
            }
            goto block_9;
        }
        if ((temp_r30 >= temp_r29) && (temp_r30 < temp_r3_2)) {
block_9:
            M2C_FIELD(arg0, s32 *, 0x6B8) = temp_r28;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), void **, 0xF0), s32 *, 0x14) = 1;
            return;
        }
        goto block_10;
    }
block_10:
    M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), void **, 0xF0), s32 *, 0x14) = 0;
}

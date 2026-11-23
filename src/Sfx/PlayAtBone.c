/* Sfx__PlayAtBone @ 0x802B0A8C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
char * Script__PopString(void *, void *, int *);
void Sfx__PlayAtBone(void *arg0, void *arg1) {
    s32 spC;
    s32 sp8;
    s8 *temp_r30;
    s8 *temp_r31;
    void *temp_r28;
    void *temp_r3;
    void *temp_r9;

    temp_r28 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    temp_r30 = Script__PopString(arg0, arg1, &spC);
    if (temp_r31 != (s8 *)-1) {
        temp_r3 = M2C_FIELD(temp_r28, void **, 0xAC);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0xC);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s8 *, s8 *), 0x1C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x18), temp_r31, temp_r30);
    }
    if ((sp8 != 0) && (temp_r31 != NULL)) {
        Mem__DeleteArray(temp_r31);
    }
    if ((spC != 0) && (temp_r30 != NULL)) {
        Mem__DeleteArray(temp_r30);
    }
}

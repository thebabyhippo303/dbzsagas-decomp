/* MemoryCard__FormatSlot @ 0x801D7544 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 MemoryCard__TranslateCardResult(void *, s32);
M2C_UNK fn_802DC5BC(s32);
s32 MemoryCard__FormatSlot(void *arg0, s32 arg1) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r3;

    temp_r29 = arg1 * 4;
    temp_r30 = arg0 + 0x6C;
    var_r3 = 0xD;
    if ((s32) *(s32 *)(temp_r30 + temp_r29) != 0xD) {
        var_r3 = MemoryCard__TranslateCardResult(arg0, fn_802DC5BC(arg1));
        *(s32 *)(temp_r30 + temp_r29) = var_r3;
    }
    return var_r3;
}


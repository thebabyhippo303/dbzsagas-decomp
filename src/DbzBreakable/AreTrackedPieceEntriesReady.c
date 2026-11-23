/* DbzBreakable__AreTrackedPieceEntriesReady @ 0x800E8E1C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

s32 DbzBreakable__CheckPieceReferenceSequence(s32 arg0) {
    char *var_r3;
    s32 var_r11;
    s32 var_r9;

    var_r3 = (char *)arg0 + 0x878;
    var_r9 = 0;
    var_r11 = 1;
    if (*(s32 *)(var_r3 + var_r9) != 0) {
        do {
            if (*(s32 *)(var_r3 + 4) == 0) {
                var_r11 = 0;
            }
            var_r9 += 1;
            var_r3 += 8;
        } while ((var_r9 <= 5) && (*(s32 *)var_r3 != 0));
    }
    return var_r11;
}

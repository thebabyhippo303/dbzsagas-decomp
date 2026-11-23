/* DbzBreakable__SetTrackedPieceFlags @ 0x800E8DEC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void DbzBreakable__SetTrackedPieceFlags(s32 arg0) {
    s32 var_ctr;
    s32 var_r3;
    void *temp_r9;

    var_r3 = arg0 + 0x878;
    var_ctr = 6;
    do {
        temp_r9 = *(void **)var_r3;
        var_r3 += 8;
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, u16 *, 2) = (u16) (M2C_FIELD(temp_r9, u16 *, 2) | 1);
        }
        var_ctr -= 1;
    } while (var_ctr != 0);
}

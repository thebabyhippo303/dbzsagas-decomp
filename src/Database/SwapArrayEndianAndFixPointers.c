/* Database__SwapArrayEndianAndFixPointers @ 0x80206620 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Database__SwapArrayEndianAndFixPointers(void *arg0) {
    u8 sp14;
    void *sp10;
    u8 spA;
    u16 sp8;
    u16 temp_r11;
    u16 var_r6;
    void *temp_r10;

    sp8 = M2C_FIELD(arg0, u16 *, 0);
    spA = M2C_FIELD(&sp8, u8 *, 1);
    M2C_FIELD(&spA, u8 *, 1) = (u8) sp8;
    sp8 = M2C_FIELD(arg0, u16 *, 2);
    temp_r11 = (u16) spA;
    spA = M2C_FIELD(&sp8, u8 *, 1);
    M2C_FIELD(&spA, u8 *, 1) = (u8) sp8;
    M2C_FIELD(arg0, u16 *, 0) = temp_r11;
    M2C_FIELD(arg0, u16 *, 2) = (u16) spA;
    if ((u16) spA & 1) {
        var_r6 = 0;
        M2C_FIELD(arg0, u16 *, 2) = (u16) ((u16) spA | 4);
        if (temp_r11 > 0U) {
            do {
                temp_r10 = arg0 + (var_r6 * 4);
                var_r6 += 1;
                sp10 = M2C_FIELD(temp_r10, void **, 4);
                sp14 = M2C_FIELD(&sp10, u8 *, 3);
                M2C_FIELD(&sp14, u8 *, 1) = (u8) M2C_FIELD(&sp10, u8 *, 2);
                M2C_FIELD(&sp14, u8 *, 2) = (u8) M2C_FIELD(&sp10, u8 *, 1);
                M2C_FIELD(&sp14, u8 *, 3) = (u8) sp10;
                M2C_FIELD(temp_r10, void **, 4) = (void *) (arg0 + (s32) sp14);
            } while (var_r6 < (u16) M2C_FIELD(arg0, u16 *, 0));
        }
    }
}

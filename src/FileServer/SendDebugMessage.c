/* FileServer__SendDebugMessage @ 0x8015B848 (size: 0x64, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8015AB00(s32, u8 *, s32);                /* extern */

void FileServer__SendDebugMessage(u8 *arg0) {
    u8 *var_r5;
    u8 temp_r0;

    var_r5 = arg0;
    if ((s32) *var_r5 != 0) {
        do {
            temp_r0 = M2C_FIELD(var_r5, u8 *, 1);
            var_r5 += 1;
        } while ((s32) temp_r0 != 0);
    }
    fn_8015AB00(saved_reg_r31 + 0x708, arg0, var_r5 - arg0);
    M2C_FIELD(saved_reg_r31, s8 *, 0x700) = 0xD;
    M2C_FIELD(saved_reg_r31, M2C_UNK (**)(s32, s32), 0x6A4)(saved_reg_r31 + 0x700, M2C_ERROR(/* unknown instruction: sthbrx $r4, $r6, $r3 */) + 8);
}

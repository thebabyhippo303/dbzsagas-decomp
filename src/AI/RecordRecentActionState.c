/* AI__RecordRecentActionState @ 0x800728F4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void AI__RecordRecentActionState(void *arg0, s32 arg1) {
    s32 var_ctr;
    void *var_r9;

    if ((arg1 > 0x19) && (arg1 != 0x35) && (arg1 != 0x86) && (arg1 != 0x2D) && (arg1 != 0x87) && ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7)) {
        var_r9 = arg0 + 0x6C;
        var_ctr = 9;
        do {
            M2C_FIELD(var_r9, s32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 0);
            var_r9 -= 4;
            var_ctr -= 1;
        } while (var_ctr != 0);
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

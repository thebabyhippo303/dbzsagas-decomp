/* Avatar__GetAccumulatedStatByIndex @ 0x800994A0 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Avatar__GetAccumulatedStatByIndex(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A80);
        break;
    case 1:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A84);
        break;
    case 2:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A88);
        break;
    case 3:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A8C);
        break;
    case 4:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A90);
        break;
    case 5:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A94);
        break;
    case 6:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A98);
        break;
    case 7:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1A9C);
        break;
    case 8:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AA0);
        break;
    case 9:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AA4);
        break;
    case 10:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AA8);
        break;
    case 11:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AAC);
        break;
    case 12:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AB0);
        break;
    case 14:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AB8);
        break;
    case 13:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1AB4);
        break;
    case 15:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1B08);
        break;
    case 16:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1B0C);
        break;
    case 17:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1B10);
        break;
    case 18:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1B14);
        break;
    case 19:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1B18);
        break;
    case 23:
        var_r0 = M2C_FIELD(arg0, s32 *, 0x1ABC);
        break;
    }
    return var_r0;
}

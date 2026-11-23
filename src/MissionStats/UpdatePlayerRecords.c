/* MissionStats__UpdatePlayerRecords @ 0x80125B98 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK MissionStats__UpdatePlayerRecord(s32);
extern s32 lbl_803DC6C8;

void MissionStats__UpdatePlayerRecords(void) {
    s32 var_r31;
    u32 var_r30;

    var_r30 = 0U;
    var_r31 = 0;
    do {
        var_r30 += 1;
        MissionStats__UpdatePlayerRecord(lbl_803DC6C8 + var_r31);
        var_r31 += 0x14C;
    } while (var_r30 <= 1U);
}


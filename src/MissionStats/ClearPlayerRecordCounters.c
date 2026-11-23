/* MissionStats__ClearPlayerRecordCounters @ 0x8012621C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void MissionStats__ClearPlayerRecordCounters(s32 arg0) {
    s32 var_r3;
    s32 var_ctr;

    var_r3 = arg0 + 0x130;
    var_ctr = 0x13;
    do {
        *(s32 *)var_r3 = 0;
        var_r3 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
}

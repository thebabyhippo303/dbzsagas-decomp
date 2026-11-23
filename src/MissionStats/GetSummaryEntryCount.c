/* MissionStats__GetSummaryEntryCount @ 0x801259DC (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803941F8 __attribute__((section(".data")));

s32 MissionStats__GetSummaryEntryCount(void) {
    return lbl_803941F8;
}

/* Avatar__AccumulateStats @ 0x80099838 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Avatar__AccumulateStats(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x1A80) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A80) + M2C_FIELD(arg0, s32 *, 0x1AC4));
    M2C_FIELD(arg0, s32 *, 0x1A84) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A84) + M2C_FIELD(arg0, s32 *, 0x1AC8));
    M2C_FIELD(arg0, s32 *, 0x1A88) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A88) + M2C_FIELD(arg0, s32 *, 0x1ACC));
    M2C_FIELD(arg0, s32 *, 0x1A8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A8C) + M2C_FIELD(arg0, s32 *, 0x1AD0));
    M2C_FIELD(arg0, s32 *, 0x1A90) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A90) + M2C_FIELD(arg0, s32 *, 0x1AD4));
    M2C_FIELD(arg0, s32 *, 0x1A94) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A94) + M2C_FIELD(arg0, s32 *, 0x1AD8));
    M2C_FIELD(arg0, u32 *, 0x1A98) = (s32) (M2C_FIELD(arg0, u32 *, 0x1A98) + M2C_FIELD(arg0, s32 *, 0x1ADC));
    M2C_FIELD(arg0, s32 *, 0x1A9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A9C) + M2C_FIELD(arg0, s32 *, 0x1AE0));
    M2C_FIELD(arg0, s32 *, 0x1AA0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AA0) + M2C_FIELD(arg0, s32 *, 0x1AE4));
    M2C_FIELD(arg0, s32 *, 0x1AA4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AA4) + M2C_FIELD(arg0, u32 *, 0x1AE8));
    M2C_FIELD(arg0, s32 *, 0x1AA8) = (M2C_FIELD(arg0, s32 *, 0x1AA8) + M2C_FIELD(arg0, s32 *, 0x1AEC));
    M2C_FIELD(arg0, s32 *, 0x1AAC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AAC) + M2C_FIELD(arg0, s32 *, 0x1AF0));
    M2C_FIELD(arg0, s32 *, 0x1AB4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AB4) + M2C_FIELD(arg0, s32 *, 0x1AF8));
    M2C_FIELD(arg0, s32 *, 0x1AB0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AB0) + M2C_FIELD(arg0, s32 *, 0x1AF4));
    M2C_FIELD(arg0, s32 *, 0x1AB8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AB8) + M2C_FIELD(arg0, s32 *, 0x1AFC));
    M2C_FIELD(arg0, s32 *, 0x1B18) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B18) + M2C_FIELD(arg0, s32 *, 0x1B38));
    M2C_FIELD(arg0, s32 *, 0x1B10) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B10) + M2C_FIELD(arg0, s32 *, 0x1B30));
    M2C_FIELD(arg0, s32 *, 0x1B08) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B08) + M2C_FIELD(arg0, s32 *, 0x1B28));
    M2C_FIELD(arg0, s32 *, 0x1B0C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B0C) + M2C_FIELD(arg0, s32 *, 0x1B2C));
    M2C_FIELD(arg0, s32 *, 0x1B14) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B14) + M2C_FIELD(arg0, s32 *, 0x1B34));
}

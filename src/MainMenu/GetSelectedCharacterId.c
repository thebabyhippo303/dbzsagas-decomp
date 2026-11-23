/* MainMenu__GetSelectedCharacterId @ 0x800126FC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 MainMenu__GetSelectedCharacterId(void *arg0) {
    s32 temp_r10;
    s32 temp_r11;

    temp_r10 = M2C_FIELD(arg0, s32 *, 0x22B4);
    temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x19C8), s32 *, 0x1A0) << 5;
    if ((s32) M2C_FIELD((temp_r10 + temp_r11), s32 *, 8) != 0) {
        return *(s32 *)(temp_r10 + temp_r11);
    }
    return -1;
}

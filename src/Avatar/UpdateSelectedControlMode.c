/* Avatar__UpdateSelectedControlMode @ 0x8008E33C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Avatar__UpdateSelectedControlMode(void *arg0) {
    void *temp_r11;
    void *temp_r9;
    s32 index;
    void **entries;

    index = M2C_FIELD(arg0, s32 *, 0x71C);
    entries = (void **)((char *)arg0 + 0x7E8);
    temp_r11 = entries[index];
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x34)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x30));
}

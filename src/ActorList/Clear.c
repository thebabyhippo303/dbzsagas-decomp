/* ActorList__Clear @ 0x801DF2C0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ActorList__Clear(void *arg0) {
    s32 var_r9;
    void **temp_r11;
    void **temp_r4;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    while ((void **) M2C_FIELD(arg0, void ***, 0) != NULL) {
        temp_r11 = M2C_FIELD(arg0, void ***, 4);
        temp_r4 = M2C_FIELD(arg0, void ***, 0);
        temp_r9 = *temp_r11;
        temp_r31 = *temp_r4;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void **), 0x14)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), temp_r4);
        var_r9 = 0;
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0x8C) != 0) {
            var_r9 = (M2C_FIELD(temp_r31, s32 *, 0x88) == 0);
        }
        if ((var_r9 != 0) && (temp_r31 != NULL)) {
            temp_r9_2 = M2C_FIELD(temp_r31, void **, 0x34);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(temp_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x38), 3);
        }
    }
}

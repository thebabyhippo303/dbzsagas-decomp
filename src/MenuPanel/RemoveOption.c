/* MenuPanel__RemoveOption @ 0x80267FC0 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void * Mem__New(u32);
void *MenuOption__Construct(void *, void *);
void MenuPanel__RemoveOption(s32 arg0, void *arg1) {
    s32 var_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    var_r31 = (s32) MenuOption__Construct(Mem__New(1356), arg1);
    goto check;
advance:
    temp_r9 = M2C_FIELD(var_r31, void **, 0x10);
    var_r31 = (s32) M2C_FIELD(temp_r9, void *(**)(void *), 0x54)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x50));
check:
    if (var_r31 == 0) {
        return;
    }
    temp_r9_2 = M2C_FIELD(var_r31, void **, 0x10);
    if (M2C_FIELD(temp_r9_2, void *(**)(void *), 0xA4)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 0xA0)) == arg1) {
        temp_r9_3 = M2C_FIELD(var_r31, void **, 0x10);
        M2C_FIELD(temp_r9_3, s32 (**)(s32, s32), 0x1C)(var_r31 + M2C_FIELD(temp_r9_3, s16 *, 0x18), 3);
        return;
    }
    goto advance;
}

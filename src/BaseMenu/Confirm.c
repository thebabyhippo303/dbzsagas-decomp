/* BaseMenu__Confirm @ 0x8026371C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void BaseMenu__Confirm(void *arg0) {
    void *temp_r9;
    void *temp_r11;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r9 = M2C_FIELD(arg0, void **, 0x10);
    temp_r11 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1BC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1B8));
    if (temp_r11 == NULL) {
        goto Lskip;
    }
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x10);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x19C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x198));
Lskip:
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x174)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x170));
}

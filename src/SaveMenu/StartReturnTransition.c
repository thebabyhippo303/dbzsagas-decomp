/* SaveMenu__StartReturnTransition @ 0x800503F4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801945FC(void *, float);
void fn_801947C8(void *);
void fn_80267318(void *, int, float);
extern f32 lbl_80319CD0 __attribute__((section(".data")));
extern s32 lbl_803DC40C;
extern s32 lbl_803DCC20;

void SaveMenu__StartReturnTransition(void *arg0) {
    void *temp_r9;

    if ((s32) lbl_803DC40C == 0) {
        fn_80267318(arg0 + 0x18834, 0, lbl_80319CD0);
        fn_801945FC(lbl_803DCC20 + 0xCC, lbl_80319CD0);
        fn_801947C8(lbl_803DCC20 + 0xCC);
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x414)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x410));
    }
}

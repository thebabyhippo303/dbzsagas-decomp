/* Avatar__ReleaseThrownVictimImpl @ 0x800A06B4 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80251510(void *, int, void *, void *, int);
M2C_UNK fn_801F1AC0(void *, M2C_UNK);               /* extern */
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void Avatar__ReleaseThrownVictimImpl(void *arg0) {
    s32 sp8;
    void *temp_r10;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r7;

    temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4);
    if (temp_r9 != NULL) {
        var_r7 = NULL;
        M2C_FIELD(temp_r9, s32 *, 0x2CC) = 0;
        temp_r9_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4);
        if (temp_r9_2 != NULL) {
            var_r7 = temp_r9_2 + 0x19C;
        }
        fn_80251510(&lbl_803B1DDC, 0x20014, NULL, arg0, (s32) var_r7);
        temp_r8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D8);
        temp_r10 = M2C_FIELD(temp_r8, void **, 4);
        {
            s32 val = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4), s32 *, 0x9C);
            void (*fn)(void *, s32 *) = M2C_FIELD(temp_r10, void (**)(void *, s32 *), 0xC);
            s16 adj = M2C_FIELD(temp_r10, s16 *, 8);
            sp8 = val;
            fn(temp_r8 + adj, &sp8);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4) = NULL;
        fn_801F1AC0(M2C_FIELD(arg0, void **, 0), 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x28) = 0;
    }
}


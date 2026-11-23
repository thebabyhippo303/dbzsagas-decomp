/* GlobalWind__InitializeFromProperties @ 0x800EBC90 (size: 0x254, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Instance__FindByName(void *, char *, int, int);
float fn_802B2FE8(void *, char *, int);
void * fn_802B30E0(void *);
M2C_UNK fn_80218540(f32 *, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern M2C_UNK lbl_80323898 __attribute__((section(".data")));
extern s8 lbl_80323930 __attribute__((section(".data")));
extern s8 lbl_8032393C __attribute__((section(".data")));
extern s8 lbl_80323944 __attribute__((section(".data")));
extern s8 lbl_80323950 __attribute__((section(".data")));
extern s8 lbl_80323960 __attribute__((section(".data")));
extern s8 lbl_8032396C __attribute__((section(".data")));
extern s8 lbl_80323978 __attribute__((section(".data")));
extern f32 lbl_80323984 __attribute__((section(".data")));
extern f32 lbl_80323988 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));

void GlobalWind__InitializeFromProperties(void) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp8;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f1;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    s8 *temp_r3;
    void *temp_r3_2;
    void *temp_r9;

    temp_r3 = fn_802B30E0(&lbl_803BEFC0);
    if (temp_r3 != NULL) {
        temp_r3_2 = Instance__FindByName(&lbl_803B1E84, temp_r3, 0, 0);
        if (temp_r3_2 != NULL) {
            temp_f25 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323930, (s32) &lbl_80323898);
            temp_f31 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323930, (s32) &lbl_80323898);
            temp_f26 = fn_802B2FE8(&lbl_803BEFC0, &lbl_8032393C, (s32) &lbl_80323898);
            temp_f27 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323944, (s32) &lbl_80323898);
            temp_f28 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323950, (s32) &lbl_80323898);
            temp_f29 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323960, (s32) &lbl_80323898);
            temp_f30 = fn_802B2FE8(&lbl_803BEFC0, &lbl_8032396C, (s32) &lbl_80323898);
            temp_f1 = fn_802B2FE8(&lbl_803BEFC0, &lbl_80323978, (s32) &lbl_80323898);
            sp18 = lbl_80323984;
            temp_r9 = temp_r3_2 + 0x10;
            M2C_FIELD(&sp18, f32 *, 8) = (f32) lbl_80323988;
            M2C_FIELD(&sp18, f32 *, 4) = (f32) lbl_80323984;
            sp8 = lbl_80323984;
            M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80323984;
            M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_80323984;
            M2C_FIELD(temp_r9, f32 *, 0x30) = (f32) lbl_80323984;
            M2C_FIELD(temp_r9, f32 *, 0x34) = (f32) M2C_FIELD(&sp8, f32 *, 4);
            M2C_FIELD(temp_r9, f32 *, 0x38) = (f32) M2C_FIELD(&sp8, f32 *, 8);
            temp_f9 = sp18 * temp_f31;
            temp_f13 = sp1C * temp_f31;
            sp38 = temp_f9;
            temp_f12 = sp20 * temp_f31;
            sp3C = temp_f13;
            sp40 = temp_f12;
            temp_f13_2 = temp_f13 * M2C_FIELD(temp_r9, f32 *, 0x18);
            temp_f8 = (temp_f9 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f13 * M2C_FIELD(temp_r9, f32 *, 0x14));
            temp_f11 = M2C_FIELD(temp_r9, f32 *, 0x28);
            temp_f9_2 = (temp_f9 * M2C_FIELD(temp_r9, f32 *, 8)) + temp_f13_2;
            temp_f10 = M2C_FIELD(temp_r9, f32 *, 0x38);
            sp28 = (temp_f12 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((temp_f9 * M2C_FIELD(temp_r3_2, f32 *, 0x10)) + (temp_f13 * M2C_FIELD(temp_r9, f32 *, 0x10))) + M2C_FIELD(temp_r9, f32 *, 0x30);
            temp_f12_2 = (temp_f12 * temp_f11) + temp_f9_2 + temp_f10;
            sp2C = (temp_f12 * M2C_FIELD(temp_r9, f32 *, 0x24)) + temp_f8 + M2C_FIELD(temp_r9, f32 *, 0x34);
            sp30 = temp_f12_2;
            fn_80218540(&sp28, 0, 0, 0, temp_f25, temp_f28, temp_f29, temp_f30, temp_f1, temp_f26, temp_f27, temp_f8, temp_f9_2, temp_f10, temp_f11, temp_f12_2, temp_f13_2);
        }
    }
}

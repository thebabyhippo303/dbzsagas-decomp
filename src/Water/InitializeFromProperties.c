/* Water__InitializeFromProperties @ 0x800EB64C (size: 0x1D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetCurrentLevelDescriptor(void *);
void * Instance__FindByName(void *, char *, int, int);
float fn_802B2FE8(void *, char *, int);
char * fn_802B3010(void *, char *, int);
void * fn_802B30E0(void *);
char * strcat(char *, const char *);
int strcmp(const char *, const char *);
M2C_UNK fn_80293E00(M2C_UNK *);                     /* extern */
s32 fn_80293E20(s32 *, s8 *, M2C_UNK *);            /* extern */
M2C_UNK fn_80293E40(s32, M2C_UNK *, s32);           /* extern */
extern s8 lbl_8031FCB0 __attribute__((section(".data")));
extern M2C_UNK lbl_803219E8 __attribute__((section(".data")));
extern s8 lbl_80323890 __attribute__((section(".data")));
extern M2C_UNK lbl_80323898 __attribute__((section(".data")));
extern s8 lbl_803238A8 __attribute__((section(".data")));
extern s8 lbl_803238B0 __attribute__((section(".data")));
extern f32 lbl_803238B8 __attribute__((section(".data")));
extern f32 lbl_803238BC __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0;
extern void *lbl_803DC3C0;
extern s32 lbl_803DD650;

void Water__InitializeFromProperties(void) {
    f32 tmp_68;
    f32 ld_68;
    f32 tmp_60;
    void *sp868;
    f32 sp424;
    f32 sp420;
    f32 sp41C;
    f32 sp418;
    M2C_UNK sp110;
    s8 spE9;
    f32 sp10;
    f32 spC;
    M2C_UNK sp8;
    M2C_UNK *var_r30;
    f32 temp_f0;
    f32 temp_f13;
    f32 temp_f31;
    s32 temp_r26;
    s32 var_ctr;
    s32 var_r28;
    s8 *temp_r27;
    s8 *temp_r3;
    s8 *var_r31;
    void *temp_r3_2;

    temp_r3 = fn_802B30E0(&lbl_803BEFC0);
    if (temp_r3 != NULL) {
        temp_r3_2 = Instance__FindByName(&lbl_803B1E84, temp_r3, 0, 0);
        if (temp_r3_2 != NULL) {
            temp_r26 = M2C_FIELD(temp_r3_2, s32 *, 0x94) + 0x20;
            temp_r27 = fn_802B3010(&lbl_803BEFC0, &lbl_80323890, (s32) &lbl_80323898);
            temp_f31 = fn_802B2FE8(&lbl_803BEFC0, &lbl_803238A8, (s32) &lbl_80323898);
            var_ctr = 5;
            do {
                var_ctr -= 1;
            } while (var_ctr != 0);
            fn_80293E00(&sp8);
            sp868 = M2C_FIELD(&lbl_803219E8, s32 *, 0);
            M2C_FIELD(&sp868, s32 *, 4) = (s32) M2C_FIELD(&lbl_803219E8, s32 *, 4);
            strcat((s8 *) &sp868, Game__GetCurrentLevelDescriptor(lbl_803DC3C0));
            strcat((s8 *) &sp868, &lbl_8031FCB0);
            if (fn_80293E20(&sp868, temp_r27, &sp8) != 0) {
                tmp_60 = M2C_FIELD(temp_r3_2, f32 *, 0x60);
                var_r31 = &spE9;
                sp418 = tmp_60;
                var_r30 = &sp110;
                sp41C = (M2C_FIELD(temp_r3_2, f32 *, 0x70) + M2C_FIELD(temp_r3_2, f32 *, 0x64)) * lbl_803238B8;
                tmp_68 = M2C_FIELD(temp_r3_2, f32 *, 0x68);
                sp420 = tmp_68;
                temp_f0 = M2C_FIELD(temp_r3_2, f32 *, 0x6c) - tmp_60;
                spC = temp_f0;
                sp424 = lbl_803238BC;
                ld_68 = tmp_68;
                temp_f13 = M2C_FIELD(temp_r3_2, f32 *, 0x74) - ld_68;
                sp10 = temp_f13;
                for (var_r28 = 0; var_r28 < 5; var_r28 += 1) {
                    if (strcmp(var_r31, &lbl_803238B0) != 0) {
                        M2C_FIELD(var_r30, f32 *, -4) = (f32) (M2C_FIELD(var_r30, f32 *, -4) * (temp_f0 / temp_f31));
                        M2C_FIELD(var_r30, f32 *, 0) = (M2C_FIELD(var_r30, f32 *, 0) * (temp_f13 / temp_f31));
                    }
                    var_r31 += 0xB0;
                    var_r30 += 0xB0;
                }
                fn_80293E40(lbl_803DD650, &sp8, temp_r26);
            }
        }
    }
}

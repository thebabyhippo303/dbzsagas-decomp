/* VolumeTrigger__Initialize @ 0x800FE204 (size: 0x32C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__ToNonProtagonistCastImpl(void *);
void * Emitter__CreateFromAsset(void *, void *, void *, int, int, int, int, int, int);
int String__CompareIgnoreCase(const char *, const char *);
void VolumeTrigger__InitializePathAction(void *);
void fn_80251360(void *, void *, unsigned int);
void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
int fn_802B2FBC(void *, char *, int);
char * fn_802B3010(void *, char *, int);
s32 fn_802C27F4();                                  /* extern */
extern s8 lbl_80324660 __attribute__((section(".data")));
extern M2C_UNK lbl_80324670 __attribute__((section(".data")));
extern s8 lbl_80324848 __attribute__((section(".data")));
extern s8 lbl_80324858 __attribute__((section(".data")));
extern s8 lbl_80324864 __attribute__((section(".data")));
extern s8 lbl_80324874 __attribute__((section(".data")));
extern s8 lbl_80324880 __attribute__((section(".data")));
extern s8 lbl_80324888 __attribute__((section(".data")));
extern s8 lbl_80324890 __attribute__((section(".data")));
extern f32 lbl_803248A0 __attribute__((section(".data")));
extern M2C_UNK lbl_8036B63C __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));

s32 VolumeTrigger__Initialize(void *arg0) {
    s16 ld_60;
    s32 sp8;
    M2C_UNK *var_r31;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 var_f13;
    s8 *temp_r31;
    s32 temp_r3_4;
    s32 temp_r3_3;
    s8 *temp_r3;
    void *temp_r9_3;
    void *temp_r4;
    void *temp_r9;
    s8 *temp_r3_2;
    void *temp_r9_4;
    void *var_r27;
    void *var_r28;

    if (fn_802C27F4() == 0) {
        return 0;
    }
    temp_f31 = lbl_803248A0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    var_r28 = arg0 + 0x198;
    M2C_FIELD(arg0, void **, 0x42C) = NULL;
    var_r27 = arg0 + 0x19C;
    M2C_FIELD(arg0, void **, 0x428) = NULL;
    M2C_FIELD(arg0, f32 *, 0x44C) = temp_f31;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x26C) != 0) {
        fn_802B2FB4(&lbl_803BEFC0);
        fn_802B2FB8(&lbl_803BEFC0, &lbl_80324848);
        temp_r3 = fn_802B3010(&lbl_803BEFC0, &lbl_80324858, (s32) &lbl_80324858);
        if ((temp_r3 != NULL) && ((s32) (u8) *temp_r3 != 0)) {
            M2C_FIELD(arg0, f32 *, 0x434) = temp_f31;
            temp_r4 = arg0 + 0x434;
            M2C_FIELD(temp_r4, f32 *, 8) = temp_f31;
            M2C_FIELD(temp_r4, f32 *, 4) = temp_f31;
            sp8 = -1;
            M2C_FIELD(arg0, void **, 0x42C) = Emitter__CreateFromAsset(temp_r3, temp_r4, NULL, 0, 0, 0, 0, 0, M2C_ERROR(/* Unable to find stack arg 0x0 in block */));
        }
        temp_r3_2 = fn_802B3010(&lbl_803BEFC0, &lbl_80324864, (s32) &lbl_80324864);
        if ((temp_r3_2 != NULL) && ((s32) (u8) *temp_r3_2 != 0)) {
            temp_r9 = arg0 + 0x440;
            M2C_FIELD(arg0, s32 *, 0x440) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
            M2C_FIELD(temp_r9, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
            M2C_FIELD(temp_r9, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x3c);
            sp8 = -1;
            M2C_FIELD(arg0, void **, 0x428) = Emitter__CreateFromAsset(temp_r3_2, temp_r9, NULL, 0, 0, 0, 0, 0, M2C_ERROR(/* Unable to find stack arg 0x0 in block */));
        }
        temp_r31 = fn_802B3010(&lbl_803BEFC0, &lbl_80324874, (s32) &lbl_80324874);
        M2C_FIELD(arg0, s32 *, 0x418) = 0;
        if ((temp_r31 == NULL) == 0) {
            temp_r3_3 = String__CompareIgnoreCase(temp_r31, &lbl_80324880);
            if (temp_r3_3 == 0) {
                M2C_FIELD(arg0, s32 *, 0x418) = temp_r3_3;
            } else if (String__CompareIgnoreCase(temp_r31, &lbl_80324888) == 0) {
                M2C_FIELD(arg0, s32 *, 0x418) = 3;
            }
        }
        var_r28 = arg0 + 0x198;
        var_r27 = arg0 + 0x19C;
        temp_r31 = fn_802B3010(&lbl_803BEFC0, &lbl_80324890, (s32) &lbl_80324890);
        M2C_FIELD(arg0, s32 *, 0x41C) = 8;
        if ((temp_r31 == NULL) == 0) {
            if ((s32) M2C_FIELD(&lbl_8036B63C, s32 *, 4) != 0) {
                var_r31 = &lbl_8036B63C;
                do {
                    if (String__CompareIgnoreCase(temp_r31, M2C_FIELD(var_r31, s8 **, 0)) == 0) {
                        M2C_FIELD(arg0, s32 *, 0x41C) = (s32) M2C_FIELD(var_r31, s32 *, 4);
                    }
                    var_r31 += 8;
                } while ((s32) M2C_FIELD(var_r31, s32 *, 4) != 0);
            }
            VolumeTrigger__InitializePathAction(arg0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x424) = 1;
    temp_r4 = M2C_FIELD(arg0, void **, 0x198);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x198);
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    temp_f31_2 = M2C_FIELD(M2C_FIELD(temp_r4, void *(**)(void *), 0x7C)(var_r28 + M2C_FIELD(temp_r4, s16 *, 0x78)), f32 *, 0x10);
    var_f13 = M2C_FIELD(M2C_FIELD(temp_r9_3, void *(**)(void *), 0x7C)(var_r28 + M2C_FIELD(temp_r9_3, s16 *, 0x78)), f32 *, 0x18);
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
    if (0 == 0) {
        var_f13 = temp_f31_2;
    }
    M2C_FIELD(arg0, f32 *, 0x454) = (var_f13 * var_f13);
    Actor__ToNonProtagonistCastImpl(arg0);
    temp_r3_4 = fn_802B2FBC(&lbl_803BEFC0, &lbl_80324660, (s32) &lbl_80324670);
    if ((temp_r3_4 != 0x7FFFFFFF) && (temp_r3_4 != 0)) {
        temp_r9_4 = M2C_FIELD(arg0, void **, 0x34);
        ld_60 = M2C_FIELD(temp_r9_4, s16 *, 0x60);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x64)(arg0 + ld_60, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x3F8) = 5;
    fn_80251360(&lbl_803B1DDC, var_r27, 0x20000U);
    return 1;
}

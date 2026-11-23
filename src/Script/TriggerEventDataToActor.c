/* Script__TriggerEventDataToActor @ 0x8002ADF0 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Script__PopInt(void *, s32);
void Debug__FormatMessage(char *, ...);
void fn_80251650(void *, int, int, void *, void *);
extern s8 lbl_8031159C __attribute__((section(".data")));
extern s8 lbl_803115CC __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DCCB8;

void Script__TriggerEventDataToActor(void *arg0, s32 arg1) {
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r31;
    void *var_r30;
    void *temp_r9;
    void *g2;
    void *var_r30_2;

    temp_r28 = Script__PopInt(arg0, arg1);
    temp_r27 = Script__PopInt(arg0, arg1);
    temp_r31 = Script__PopInt(arg0, arg1);
    if ((s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x2128) != 0) {
        Debug__FormatMessage(&lbl_8031159C, (s32) (arg0 + 0xD0), (s32) arg0, temp_r28, (s32) (u16) temp_r28);
        Debug__FormatMessage(&lbl_803115CC, temp_r27);
    }
    var_r30 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r30 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r30, s32 *, 0) == temp_r31) {
                fn_80251650(&lbl_803B1DDC, temp_r28, temp_r27, M2C_FIELD(arg0, void **, 0xC8), (void *) temp_r31);
            }
            temp_r9 = lbl_803DCCB8;
            if (var_r30 != NULL) {
                var_r30 = M2C_FIELD(var_r30, void **, 0x14);
            } else {
                var_r30 = M2C_FIELD(temp_r9, void **, 0x2C);
            }
        } while (var_r30 != NULL);
    }
    var_r30_2 = M2C_FIELD(lbl_803DCCB8, void **, 0x20);
    if (var_r30_2 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r30_2, s32 *, 0) == temp_r31) {
                fn_80251650(&lbl_803B1DDC, temp_r28, temp_r27, M2C_FIELD(arg0, void **, 0xC8), (void *) temp_r31);
            }
            g2 = lbl_803DCCB8;
            if (var_r30_2 != NULL) {
                var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x14);
            } else {
                var_r30_2 = M2C_FIELD(g2, void **, 0x20);
            }
        } while (var_r30_2 != NULL);
    }
}

/* UIList__AddEntry @ 0x8013611C (size: 0x2A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * fn_801842C4(unsigned int);
void * fn_80184348(int);
void fn_801843CC(void *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
s32 memset(void *, int, u32);
extern f32 lbl_8032AC0C __attribute__((section(".data")));

void UIList__AddEntry(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void **sp28;
    union { f32 value; unsigned char bytes[16]; } sp8;
    f32 sp14;
    f32 sp10;
    f64 spC;
    union { s32 value; unsigned char bytes[16]; } sp18;
    s32 temp_r0;
    s32 temp_r27;
    s32 temp_r29;
    s32 temp_r30;
    u32 temp_r28;
    void **temp_r11;
    void **temp_r3;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r10_4;
    void *temp_r11_2;
    register void *temp_r11_3;
    void *temp_r28_2;
    void *temp_r31;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_8;

    if (arg1 != NULL) {
        temp_r3 = fn_801842C4(0x1CU);
        *temp_r3 = arg1;
        sp28 = temp_r3;
        temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
        sp8.value = M2C_FIELD(temp_r9, f32 (**)(void *), 0x2AC)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x2A8));
        temp_r9_2 = M2C_FIELD(arg1, void **, 0x19C);
        spC = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x2B4)(arg1 + M2C_FIELD(temp_r9_2, s16 *, 0x2B0));
        temp_r9_3 = M2C_FIELD(arg1, void **, 0x19C);
        sp10 = M2C_FIELD(temp_r9_3, f32 (**)(void *), 0x2BC)(arg1 + M2C_FIELD(temp_r9_3, s16 *, 0x2B8));
        temp_r9_4 = M2C_FIELD(arg1, void **, 0x19C);
        sp14 = M2C_FIELD(temp_r9_4, f32 (**)(void *), 0x28C)(arg1 + M2C_FIELD(temp_r9_4, s16 *, 0x288));
        temp_r11 = sp28 + 0xC;
        M2C_FIELD(sp28, u32 *, 0xC) = sp8.value;
        M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) M2C_FIELD(((f32 *)sp8.bytes), s32 *, 0xC);
        M2C_FIELD(temp_r11, s32 *, 4) = (s32) M2C_FIELD(((f32 *)sp8.bytes), s32 *, 4);
        M2C_FIELD(temp_r11, s32 *, 8) = (s32) M2C_FIELD(((f32 *)sp8.bytes), s32 *, 8);
        temp_r10 = M2C_FIELD(sp28, void **, 0);
        if ((s32) M2C_FIELD(temp_r10, s32 *, 0x1DC) != 0) {
            temp_r9_5 = M2C_FIELD(temp_r10, void **, 0x19C);
            temp_r3_2 = M2C_FIELD(temp_r9_5, void *(**)(void *), 0x38C)(temp_r10 + M2C_FIELD(temp_r9_5, s16 *, 0x388));
            temp_r9_6 = M2C_FIELD(temp_r3_2, void **, 8);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9_6, s16 *, 0x18));
            sp18.value = M2C_FIELD(arg0, s32 *, 0x36C);
            M2C_FIELD(((s32 *)sp18.bytes), s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
            M2C_FIELD(((s32 *)sp18.bytes), s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x370);
            M2C_FIELD(((s32 *)sp18.bytes), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x374);
            temp_r10_2 = M2C_FIELD(sp28, void **, 0);
            temp_r11_2 = M2C_FIELD(temp_r10_2, void **, 0x19C);
            M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, s32 *), 0x124)(temp_r10_2 + M2C_FIELD(temp_r11_2, s16 *, 0x120), ((s32 *)sp18.bytes));
            temp_r10_3 = M2C_FIELD(sp28, void **, 0);
            temp_r9_8 = M2C_FIELD(temp_r10_3, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32), 0x134)(temp_r10_3 + M2C_FIELD(temp_r9_8, s16 *, 0x130), lbl_8032AC0C);
            temp_r10_4 = M2C_FIELD(sp28, void **, 0);
            temp_r11_3 = M2C_FIELD(temp_r10_4, void **, 0x19C);
            M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *), 0x3C)(temp_r10_4 + M2C_FIELD(temp_r11_3, s16 *, 0x38));
        }
        temp_r31 = arg0 + 0x340;
        M2C_FIELD(sp28, s32 *, 8) = arg3;
        M2C_FIELD(sp28, s32 *, 4) = arg2;
        temp_r30 = M2C_FIELD(temp_r31, s32 *, 4);
        if (temp_r30 == (s32) M2C_FIELD(temp_r31, s32 *, 8)) {
            temp_r28 = temp_r30 * 4;
            temp_r27 = (temp_r30 + M2C_FIELD(temp_r31, s32 *, 0xC)) * 4;
            temp_r3_3 = fn_80184348(temp_r27);
            if (temp_r3_3 != NULL) {
                temp_r4 = M2C_FIELD(arg0, void **, 0x340);
                if (temp_r4 != NULL) {
                    memcpy(temp_r3_3, temp_r4, temp_r28);
                    temp_r3_4 = M2C_FIELD(arg0, void **, 0x340);
                    if (temp_r3_4 != NULL) {
                        fn_801843CC(temp_r3_4);
                    }
                }
                M2C_FIELD(arg0, void **, 0x340) = temp_r3_3;
                M2C_FIELD(temp_r31, s32 *, 8) = (s32) (M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, s32 *, 0xC));
                if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                    memset(temp_r3_3 + temp_r28, 0, temp_r27 - temp_r28);
                }
                goto block_10;
            }
        } else {
block_10:
            temp_r28_2 = M2C_FIELD(arg0, void **, 0x340);
            temp_r29 = temp_r30 * 4;
            temp_r3_5 = temp_r28_2 + temp_r29;
            temp_r0 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r30;
            if (temp_r0 != 0) {
                memmove(temp_r3_5 + 4, temp_r3_5, temp_r0 * 4);
            }
            *(void ** *)(temp_r28_2 + temp_r29) = sp28;
            M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) + 1);
        }
    }
}

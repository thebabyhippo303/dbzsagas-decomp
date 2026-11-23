/* Database__ParseFileHeader @ 0x80205FB8 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Database__ConsumeBufferBytes(int);
void Database__DiscardBufferBytes(int);
int atoi(const char *);
void * memcpy(void *, const void *, unsigned int);
int strcmp(const char *, const char *);
extern s8 lbl_80345CD8 __attribute__((section(".data")));
extern s8 lbl_80345CDC __attribute__((section(".data")));
extern M2C_UNK lbl_803ADBE4 __attribute__((section(".data")));
extern s8 lbl_803ADC10 __attribute__((section(".data")));
extern s8 lbl_803ADC18 __attribute__((section(".data")));
extern s32 lbl_803ADC78 __attribute__((section(".data")));
extern s32 lbl_803DD5D4;

s32 Database__ParseFileHeader(void) {
    u8 sp24;
    s32 sp20;
    u8 sp1C;
    s32 sp18;
    u8 sp14;
    s32 sp10;
    u8 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r10;
    s8 *var_r9;
    void *var_r11;

    var_r10 = 0x18;
    var_r9 = &lbl_803ADC10;
    var_r11 = M2C_FIELD(&lbl_803ADC10, void **, -0x14);
    do {
        var_r10 -= 0x18;
        M2C_FIELD(var_r9, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
        M2C_FIELD(var_r9, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
        M2C_FIELD(var_r9, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
        M2C_FIELD(var_r9, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
        M2C_FIELD(var_r9, s32 *, 0x10) = (s32) M2C_FIELD(var_r11, s32 *, 0x10);
        temp_r0 = M2C_FIELD(var_r11, s32 *, 0x14);
        var_r11 += 0x18;
        M2C_FIELD(var_r9, s32 *, 0x14) = temp_r0;
        var_r9 += 0x18;
    } while (var_r10 != 0);
    M2C_FIELD(var_r9, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
    M2C_FIELD(var_r9, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
    temp_r3 = atoi(&lbl_803ADC10);
    if (temp_r3 != 0) {
        memcpy(&lbl_803ADBE4 + 0x2C, M2C_FIELD(&lbl_803ADBE4, s32 *, 0x18) + temp_r3, 0x20U);
    }
    if (!(M2C_FIELD(&lbl_803ADBE4, s32 *, 0) & 4)) {
        Database__DiscardBufferBytes(temp_r3 + 0x20);
    } else {
        temp_r3_2 = temp_r3 + 0x20;
        if (temp_r3_2 & 0x1F) {
            Database__DiscardBufferBytes(temp_r3_2);
        } else {
            Database__ConsumeBufferBytes(temp_r3_2);
        }
    }
    if ((strcmp(&lbl_803ADC18, &lbl_80345CD8) != 0) && (strcmp(&lbl_803ADC18, &lbl_80345CDC) != 0)) {
        lbl_803ADC78 = 3;
        return 0;
    }
    if ((s32) M2C_FIELD(&lbl_803ADBE4, s32 *, 0x3C) != 0x100) {
        sp8 = M2C_FIELD(&lbl_803ADBE4, s32 *, 0x3C);
        spC = M2C_FIELD(&sp8, u8 *, 3);
        M2C_FIELD(&spC, u8 *, 1) = (u8) M2C_FIELD(&sp8, u8 *, 2);
        M2C_FIELD(&spC, u8 *, 2) = (u8) M2C_FIELD(&sp8, u8 *, 1);
        M2C_FIELD(&spC, u8 *, 3) = (u8) sp8;
        sp10 = M2C_FIELD(&lbl_803ADBE4, s32 *, 0x40);
        M2C_FIELD(&lbl_803ADBE4, s32 *, 0x3C) = (s32) spC;
        sp14 = M2C_FIELD(&sp10, u8 *, 3);
        M2C_FIELD(&sp14, u8 *, 1) = (u8) M2C_FIELD(&sp10, u8 *, 2);
        M2C_FIELD(&sp14, u8 *, 2) = (u8) M2C_FIELD(&sp10, u8 *, 1);
        M2C_FIELD(&sp14, u8 *, 3) = (u8) sp10;
        sp18 = M2C_FIELD(&lbl_803ADBE4, s32 *, 0x44);
        M2C_FIELD(&lbl_803ADBE4, s32 *, 0x40) = (s32) sp14;
        sp1C = M2C_FIELD(&sp18, u8 *, 3);
        M2C_FIELD(&sp1C, u8 *, 1) = (u8) M2C_FIELD(&sp18, u8 *, 2);
        M2C_FIELD(&sp1C, u8 *, 2) = (u8) M2C_FIELD(&sp18, u8 *, 1);
        M2C_FIELD(&sp1C, u8 *, 3) = (u8) sp18;
        M2C_FIELD(&lbl_803ADBE4, s32 *, 0x44) = (s32) sp1C;
        sp20 = M2C_FIELD(&lbl_803ADBE4, s32 *, 0x48);
        sp24 = M2C_FIELD(&sp20, u8 *, 3);
        M2C_FIELD(&sp24, u8 *, 1) = (u8) M2C_FIELD(&sp20, u8 *, 2);
        M2C_FIELD(&sp24, u8 *, 2) = (u8) M2C_FIELD(&sp20, u8 *, 1);
        M2C_FIELD(&sp24, u8 *, 3) = (u8) sp20;
        M2C_FIELD(&lbl_803ADBE4, s32 *, 0x48) = (s32) sp24;
        if ((s32) spC != 0x100) {
            M2C_FIELD(&lbl_803ADBE4, s32 *, 0x94) = 3;
            return 0;
        }
        lbl_803DD5D4 = 1;
        goto block_16;
    }
block_16:
    return 1;
}

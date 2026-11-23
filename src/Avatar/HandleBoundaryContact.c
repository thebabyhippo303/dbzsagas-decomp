/* Avatar__HandleBoundaryContact @ 0x80091624 (size: 0x26C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Rand__RangeInt(void *, s32, s32);
void * Game__GetPlayerImpl(void *, s32);
void DisplayInfo__ShowEntry(void *, int, int, int, float);
s32 fn_8021CDC8(void *, void *, void *, void *, s32, s32, s32, s32, f32, f32, f32, f32, s32, s32);
s32 fn_8023A97C(void *, int);
int fn_80254BB8(void *, const char *, int);
int fn_8025C17C(void *, void *, void *);
f32 fn_8025DB0C(void *, void *, void *, unsigned char *, unsigned char *);
M2C_UNK fn_801C2FD0(s32, s32);
void Distort__CreateImpl(void *, void *, void *, f32, f32, f32);
M2C_UNK fn_80188DEC(s32, s32, s32);
extern s8 lbl_8031F860 __attribute__((section(".data")));
extern M2C_UNK lbl_8031F86C __attribute__((section(".data")));
extern f32 lbl_8031F87C __attribute__((section(".data")));
extern f32 lbl_8031F880 __attribute__((section(".data")));
extern f32 lbl_8031F884 __attribute__((section(".data")));
extern f32 lbl_8031F888 __attribute__((section(".data")));
extern f32 lbl_8031F88C __attribute__((section(".data")));
extern f32 lbl_8031F890 __attribute__((section(".data")));
extern void *lbl_803DC3A0;
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;
extern void *lbl_803DCCC0;
extern s32 lbl_803DD1E4;
extern M2C_UNK lbl_803DD634;

typedef struct { f32 x, y, z; } Vec3;
void Avatar__HandleBoundaryContact(void *arg0, void *arg1, void *arg2) {
    u8 sp30;
    s32 flag;
    s32 hit;
    s16 ld_98;
    Vec3 sp10;
    Vec3 sp20;
    Vec3 sp38;
    Vec3 sp48;
    u8 temp_r3_2;
    void *temp_r9;
    u8 *temp_r3;
    register char *temp_r11;
    u8 sp31;
    f64 sp58;

    temp_r11 = M2C_FIELD(arg0, void **, 0x7E0);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    ld_98 = M2C_FIELD(temp_r9, s16 *, 0x98);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x9C)(ld_98 + temp_r11);
    flag = 1;
    if (!(M2C_FIELD(arg1, u32 *, 0x10) & lbl_803DD1E4)) {
        flag = 0;
    }
    if (flag != 0) {
        M2C_FIELD(arg0, s32 *, 0x1598) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x7E4) != 0) {
        fn_8025C17C(arg2, &sp10, &sp20);
        temp_r3 = M2C_FIELD(M2C_FIELD(arg2, void **, 0x28), void **, 0x28);
        if (M2C_FIELD(temp_r3, s32 *, 0x20) == 3) {
            fn_801C2FD0((s32) temp_r3, (s32) &sp20);
        }
        fn_8025DB0C(arg2, &sp10, &sp20, &sp30, &sp31);
        temp_r3_2 = fn_80254BB8(lbl_803DCCC0, &lbl_8031F860, -1);
        if (sp31 == temp_r3_2 || sp30 == temp_r3_2) {
            temp_r3 = (char *) arg0 + 0x1B90;
            hit = 1;
            flag = M2C_FIELD(temp_r3, s32 *, 4);
            if (flag <= 0) {
                hit = 0;
            }
            if (hit == 0) {
                sp38 = sp10;
                sp48 = sp20;
                Distort__CreateImpl(temp_r3, &sp38, &sp48, lbl_8031F87C, lbl_8031F880, lbl_8031F884);
                sp58 = lbl_8031F888;
                fn_8021CDC8(&lbl_8031F86C, &sp10, &sp20, &sp58, 0, 0, 0, -1, lbl_8031F88C, lbl_8031F890, lbl_8031F890, lbl_8031F890, hit, hit);
                fn_80188DEC((s32) &lbl_8031F86C, (s32) &sp10, 0);
                if (M2C_FIELD(arg0, f32 *, 0x288) > lbl_8031F88C) {
                    if ((s32) (fn_8023A97C(M2C_FIELD(arg0, void **, 0x84), 0) & 0xFF00) != 0x300) {
                        DisplayInfo__ShowEntry(lbl_803DC3A0, 0, 2 + Rand__RangeInt(&lbl_803DD634, 0, 2), 0, lbl_8031F890);
                        if (arg0 == Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
                            M2C_FIELD(lbl_803DC3B4, s32 *, 0x8258) = hit;
                            return;
                        }
                        Game__GetPlayerImpl(lbl_803DC3C0, 1);
                        M2C_FIELD(lbl_803DC3B4, s32 *, 0x8258) = 1;
                    }
                }
            }
        }
    }
}

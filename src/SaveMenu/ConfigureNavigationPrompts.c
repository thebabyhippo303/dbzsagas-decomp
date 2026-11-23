/* SaveMenu__ConfigureNavigationPrompts @ 0x8004E894 (size: 0x214, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;

void fn_8026C6F8(void *, int);
void fn_80261FD8(void *, s32, char *, s32, s32);
void fn_80262198(void *, f32, f32, f32);
void fn_80262284(void *, f32, f32, f32, f32);
void fn_802623E4(void *, s32, f32, f32);
void fn_80262428(void *, s32, f32, f32);
extern char lbl_80319A64[] __attribute__((section(".data")));
extern char lbl_80319A6C[] __attribute__((section(".data")));
extern char lbl_80319A74[] __attribute__((section(".data")));
extern f32 lbl_80319A7C __attribute__((section(".data")));
extern f32 lbl_80319A80 __attribute__((section(".data")));
extern f32 lbl_80319A84 __attribute__((section(".data")));
extern f32 lbl_80319A88 __attribute__((section(".data")));
extern f32 lbl_80319A8C __attribute__((section(".data")));
extern f32 lbl_80319A90 __attribute__((section(".data")));
extern f32 lbl_80319A94 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;

void SaveMenu__ConfigureNavigationPrompts(char *arg0, s32 arg1) {
    char *temp_r31;

    temp_r31 = arg0 + 0x5F60;
    fn_80262284(temp_r31, lbl_80319A7C, lbl_80319A80, lbl_80319A7C, lbl_80319A84);
    if ((s32) lbl_803DC3C0 != 0) {
        fn_80261FD8(temp_r31, 0, lbl_80319A64, arg1, 0xA);
        fn_80261FD8(temp_r31, 2, lbl_80319A6C, arg1, 0);
        fn_80262198(temp_r31, lbl_80319A88, lbl_80319A8C, lbl_80319A90);
        fn_80261FD8(temp_r31, 1, lbl_80319A74, arg1, 7);
        fn_80262428(temp_r31, 0, lbl_80319A84, lbl_80319A84);
        fn_80262428(temp_r31, 1, lbl_80319A84, lbl_80319A84);
        fn_80262428(temp_r31, 2, lbl_80319A84, lbl_80319A84);
        fn_802623E4(temp_r31, 0, lbl_80319A8C, lbl_80319A94);
        fn_802623E4(temp_r31, 1, lbl_80319A8C, lbl_80319A94);
        fn_802623E4(temp_r31, 2, lbl_80319A8C, lbl_80319A94);
        fn_8026C6F8(temp_r31, 0x1F4);
        return;
    }
    fn_80262198(temp_r31, lbl_80319A88, lbl_80319A8C, lbl_80319A90);
    fn_80261FD8(temp_r31, 0, lbl_80319A64, arg1, 0xA);
    fn_80261FD8(temp_r31, 1, lbl_80319A6C, arg1, 0);
    fn_80262428(temp_r31, 0, lbl_80319A84, lbl_80319A84);
    fn_80262428(temp_r31, 1, lbl_80319A84, lbl_80319A84);
    fn_802623E4(temp_r31, 0, lbl_80319A8C, lbl_80319A94);
    fn_802623E4(temp_r31, 1, lbl_80319A8C, lbl_80319A94);
    fn_8026C6F8(temp_r31, 0x1F4);
}

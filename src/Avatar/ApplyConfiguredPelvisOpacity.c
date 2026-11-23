/* Avatar__ApplyConfiguredPelvisOpacity @ 0x80096DF4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801DCE10(void *, void *);
M2C_UNK fn_8023E268(void *, s8);                    /* extern */
extern M2C_UNK lbl_8031E188 __attribute__((section(".data")));
extern f32 lbl_8031F9B8 __attribute__((section(".data")));

void Avatar__ApplyConfiguredPelvisOpacity(void *arg0) {
    void *result = fn_801DCE10(arg0, &lbl_8031E188);
    fn_8023E268(result,
        (s8) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x19D8), f32 *, 0x1C) * lbl_8031F9B8));
}

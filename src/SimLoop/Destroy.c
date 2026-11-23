/* SimLoop__Destroy @ 0x80023464 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
extern M2C_UNK lbl_80310F70 __attribute__((section(".data")));

void SimLoop__Destroy(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &lbl_80310F70;
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}

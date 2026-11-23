/* Platform__ConstructBase @ 0x801D6AE0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Mem__New(s32);
s32 fn_8024C260();                                  /* extern */
extern M2C_UNK lbl_803432E0 __attribute__((section(".data")));
extern s32 lbl_803DCDF4;

void *Platform__ConstructBase(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x384) = &lbl_803432E0;
    Mem__New(0x74);
    lbl_803DCDF4 = fn_8024C260();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

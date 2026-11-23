/* FluffLoop__DestroyControlInfoWidgets @ 0x80056EE0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_80267A1C(void *, s32);                   /* extern */
M2C_UNK fn_80267B90(void *);                     /* extern */
extern M2C_UNK lbl_8031C868 __attribute__((section(".data")));

void FluffLoop__DestroyControlInfoWidgets(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8031C868;
    fn_80267B90(arg0);
    fn_80267A1C(arg0 + 0xAE90, 2);
    fn_80267A1C(arg0, arg1);
}

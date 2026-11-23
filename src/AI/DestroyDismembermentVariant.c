/* AI__DestroyDismembermentVariant @ 0x80076634 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__DestroyDismembermentTrails(s32);
M2C_UNK fn_80075BB0(void *, s32);                   /* extern */
extern M2C_UNK lbl_80331640 __attribute__((section(".data")));
extern s32 lbl_803DC478;

void AI__DestroyDismembermentVariant(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r9;

    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_80331640;
    AI__DestroyDismembermentTrails((s32) arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    if (temp_r0 == 1) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x40);
        if (temp_r9 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r9, void **, 0xB8C), s32 *, 0x44) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x514) != 0) {
        lbl_803DC478 = 0;
    }
    fn_80075BB0(arg0, arg1);
}

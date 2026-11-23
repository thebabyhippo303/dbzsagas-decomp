/* Simple__SetOBBZSize @ 0x802AEA04 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
M2C_UNK fn_802C5A28(s32);                           /* extern */

void Simple__SetOBBZSize(void *arg0, void *arg1) {
    Script__PopFloat(arg0, arg1);
    fn_802C5A28(M2C_FIELD(arg0, s32 *, 0xC8));
}


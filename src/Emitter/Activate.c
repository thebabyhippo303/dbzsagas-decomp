/* Emitter__Activate @ 0x80222D1C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 fn_80222E58(u32);
void fn_80222F24(void *);
extern s32 lbl_803AD48C __attribute__((section(".data")));

s32 Emitter__Activate(u32 arg0) {
    s32 temp_r0;
    s32 temp_r9;
    void *temp_r31;

    temp_r9 = (arg0 >> 0x10U) * 0x110;
    temp_r0 = *(s32 *)(lbl_803AD48C + temp_r9);
    temp_r31 = lbl_803AD48C + temp_r9;
    if (temp_r0 != (s32) arg0) {
        return 0;
    } else {
        if (fn_80222E58((u32) temp_r0) != 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return 0;
        } else {
            M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) | 0x40);
            fn_80222F24(temp_r31);
            return 1;
        }
    }
}


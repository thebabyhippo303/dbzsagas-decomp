/* ButtonPromptBar__SetSlotOffset @ 0x802623E4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ButtonPromptBar__SetSlotOffset(s32 arg0, s32 arg1) {
    M2C_UNK (*fn)(s32);
    void *vt;
    s32 obj;
    s16 adjust;

    arg1 = arg1 * 0x550;
    vt = M2C_FIELD((arg1 + arg0), void **, 0x33C);
    arg1 += 0x1A0;
    obj = arg0 + arg1;
    adjust = M2C_FIELD(vt, s16 *, 0xF0);
    fn = M2C_FIELD(vt, M2C_UNK (**)(s32), 0xF4);
    obj += adjust;
    fn(obj);
}

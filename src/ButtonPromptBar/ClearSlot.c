/* ButtonPromptBar__ClearSlot @ 0x80262038 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void ButtonPromptBar__ClearSlot(void *arg0, u32 arg1) {
    char *off;
    s32 off2;
    void *obj;
    void *vt;
    void *fn;
    s32 adj;
    if (arg1 > 11) {
        return;
    }
    off = (char *)(arg1 * 1360);
    obj = (void *)(off + (s32)arg0);
    vt = M2C_FIELD(obj, void **, 828);
    off2 = (s32)off + 416;
    adj = M2C_FIELD(vt, s16 *, 32);
    fn = M2C_FIELD(vt, void **, 36);
    ((void (*)(void *))fn)((char *)(arg0 + off2) + adj);
}

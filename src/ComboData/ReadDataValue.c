/* ComboData__ReadDataValue @ 0x801510A0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
s32 fn_8025533C(s32 handle, char *buf, s32 size);
int sscanf(const char *str, const char *fmt, ...);
extern char lbl_80321478[] __attribute__((section(".data")));
extern char lbl_8032C2D4[] __attribute__((section(".data")));

s32 ComboData__ReadDataValue(void *arg0, s8 *arg1, s32 arg2) {
    char buf[32];
    s32 value;

    if ((String__CompareIgnoreCase(arg1, lbl_8032C2D4) == 0) && (fn_8025533C(M2C_FIELD(arg0, s32 *, 0), buf, 0x20) > 0) && (sscanf(buf, lbl_80321478, &value) == 1)) {
        *(s32 *)((char *)M2C_FIELD(arg0, void **, 0x2C) + arg2 * 4) = value;
        return 1;
    }
    return 0;
}

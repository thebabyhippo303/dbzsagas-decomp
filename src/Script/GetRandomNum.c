/* Script__GetRandomNum @ 0x802B1EE0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_803DD634[8] __attribute__((section(".sdata")));

f32 Script__PopFloat(void *, s32);
f32 Rand__RangeFloat(void *, f32, f32);
void Script__PushFloat(void *, s32, f32);

void Script__GetRandomNum(void *arg0, s32 arg1) {
    f32 first;

    first = Script__PopFloat(arg0, arg1);
    Script__PushFloat(arg0, arg1, Rand__RangeFloat(lbl_803DD634, Script__PopFloat(arg0, arg1), first));
}

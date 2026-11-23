/* VM__DSIExceptionDispatch @ 0x802EB040 (size: 0x64, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern void (*lbl_803DD8EC)(void *);
void OSClearContext(void *);
void OSSetCurrentContext(void *);
void OSLoadContext(void *);
void VM__DSIExceptionDispatch(void *arg0, void *arg1) {
    u8 ctx[720];
    OSClearContext(ctx);
    OSSetCurrentContext(ctx);
    lbl_803DD8EC(arg1);
    OSSetCurrentContext(arg0);
    OSLoadContext(arg0);
}

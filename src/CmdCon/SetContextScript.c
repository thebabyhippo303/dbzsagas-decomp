/* CmdCon__SetContextScript @ 0x8018A12C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 CmdCon__GetOrCreateContext();                   /* extern */
s32 VariableContext__SetScriptPath(s32, s32);       /* extern */

s32 CmdCon__SetContextScript(void *arg0, s32 arg1, s32 arg2) {
    s32 context = CmdCon__GetOrCreateContext();
    if (context == 0) {
        return 0;
    }
    return VariableContext__SetScriptPath(context, arg2);
}

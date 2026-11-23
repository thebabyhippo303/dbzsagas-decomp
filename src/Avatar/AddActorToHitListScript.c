/* Avatar__AddActorToHitListScript @ 0x8009E56C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Avatar__PopScriptInt(void *, void *);
M2C_UNK Avatar__AppendScriptValue(void *, s32);     /* extern */

void Avatar__AppendPoppedScriptValue(void *arg0, void *arg1) {
    Avatar__AppendScriptValue(arg0, Avatar__PopScriptInt(M2C_FIELD(arg0, void **, 0x364), arg1));
}

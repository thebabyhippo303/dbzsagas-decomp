/* Actor__ActorSetAnimScriptVarFloat @ 0x802AFBE4 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Script__PopActor(s32, s32, M2C_UNK);          /* extern */
f32 Script__PopFloat(s32, s32);                     /* extern */
s32 Script__PopInt();                               /* extern */
s32 Script__PopString(s32, s32, s32 *);             /* extern */
M2C_UNK Script__SetFloatVariable(s32, s32, s32, f32); /* extern */
M2C_UNK fn_80184430(s32);                           /* extern */

void Actor__ActorSetAnimScriptVarFloat(s32 arg0, s32 arg1) {
    s32 sp8;
    f32 temp_f31;
    s32 temp_r28;
    s32 temp_r31;

    temp_r28 = Script__PopInt();
    temp_f31 = Script__PopFloat(arg0, arg1);
    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    Script__SetFloatVariable(M2C_FIELD(Script__PopActor(arg0, arg1, 0), s32 *, 0x84), temp_r28, temp_r31, temp_f31);
    if ((sp8 != 0) && (temp_r31 != 0)) {
        fn_80184430(temp_r31);
    }
}

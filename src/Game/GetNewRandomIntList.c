/* Game__GetNewRandomIntList @ 0x8002F6F4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Script__PopInt(void *script, void *context);
void Script__PushInt(void *script, void *context, s32 value);
s32 Game__GetNewRandomIntListImpl(s32 a, s32 b, s32 c, s32 d);

void Game__GetNewRandomIntList(void *arg0, void *arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    Script__PopInt(arg0, arg1);
    a = Script__PopInt(arg0, arg1);
    b = Script__PopInt(arg0, arg1);
    c = Script__PopInt(arg0, arg1);
    d = Script__PopInt(arg0, arg1);
    Script__PushInt(arg0, arg1, Game__GetNewRandomIntListImpl(a, b, c, d));
}

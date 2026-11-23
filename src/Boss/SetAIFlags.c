/* Boss__SetAIFlags @ 0x8003AE28 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Script__PopInt(void *script, void *context);

void Boss__SetAIFlags(void *arg0, void *arg1) {
    void *owner;
    void *boss;
    void *vtbl;
    s32 flagsA;
    s32 valueB;

    owner = (void *)Script__PopInt(arg0, arg1);
    flagsA = Script__PopInt(arg0, arg1);
    valueB = Script__PopInt(arg0, arg1);
    boss = M2C_FIELD(owner, void **, 0xB8C);
    vtbl = M2C_FIELD(boss, void **, 0x57C);
    M2C_FIELD(vtbl, void (**)(void *, s32), 0x6C)((char *)boss + M2C_FIELD(vtbl, s16 *, 0x68), flagsA);
    vtbl = M2C_FIELD(boss, void **, 0x57C);
    M2C_FIELD(vtbl, void (**)(void *, s32), 0x5C)((char *)boss + M2C_FIELD(vtbl, s16 *, 0x58), valueB);
}

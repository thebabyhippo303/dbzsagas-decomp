/* Actor__LoadAnimScript @ 0x802AC660 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * Script__PopString(void *, s32, void *);
void * Script__PopInt(void *, void *);
void fn_802CE66C(void *);
void * fn_80234054(s32, s32, s32, s32, s32);
f32 fn_80234640(s32, s32, s32, s32);
M2C_UNK fn_80234740(s32, s32, s32);
void Actor__LoadAnimScript(void *arg0, u8 *arg1) {
    s32 sp8;
    s32 temp_r3;
    void *temp_r28;
    void *temp_r29;

    temp_r29 = Script__PopInt(arg0, arg1);
    temp_r28 = Script__PopInt(arg0, arg1);
    temp_r3 = Script__PopString(arg0, (s32) arg1, &sp8);
    fn_80234054((s32) arg0, (s32) temp_r29, temp_r3, 0x26, 1);
    if (temp_r28 != (void *)0xFFFF) {
        fn_80234640((s32) arg0, (s32) temp_r29, (s32) (u16) temp_r28, 1);
        fn_80234740((s32) arg0, (s32) temp_r29, 1);
    }
    if (sp8 != 0) {
        fn_802CE66C((void *) temp_r3);
    }
}


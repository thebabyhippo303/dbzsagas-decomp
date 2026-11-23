/* Simple__AIScriptGetFloat @ 0x802AF890 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__GetFloatVariable(void *, int, char *);
void * Script__PopActor(void *, void *, int);
char * Script__PopString(void *, void *, int *);
void Script__PushFloat(void *, void *, float);
void fn_80184430(char *);
void Simple__AIScriptGetFloat(void *arg0, void *arg1) {
    s32 sp8;
    f32 temp_f31;
    s8 *temp_r3;
    void *temp_r30;

    temp_r30 = Script__PopActor(arg0, arg1, 0);
    temp_r3 = Script__PopString(arg0, arg1, &sp8);
    temp_f31 = Script__GetFloatVariable(M2C_FIELD(temp_r30, void **, 0x84), 3, temp_r3);
    if ((sp8 != 0) && (temp_r3 != NULL)) {
        fn_80184430(temp_r3);
    }
    Script__PushFloat(arg0, arg1, temp_f31);
}


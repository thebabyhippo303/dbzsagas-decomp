/* Enemy__Create @ 0x800317DC (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MissionProgress__DisplayAll(int, void *);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
char * Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);
void *Enemy__CreateImpl(s8 *, f32 *, void *, void *, s8 *, void *); /* extern */

void Enemy__Create(void *arg0, void *arg1) {
    s32 sp1C;
    s32 sp18;
    f32 sp8[4];
    f32 *temp_r29;
    s8 *temp_r24;
    s8 *temp_r25;
    void *temp_r27;
    void *temp_r28;
    void *temp_r30;
    void *temp_r30_2;

    temp_r24 = Script__PopString(arg0, arg1, &sp18);
    temp_r29 = sp8;
    temp_r29[0] = Script__PopFloat(arg0, arg1);
    temp_r29[1] = Script__PopFloat(arg0, arg1);
    temp_r29[2] = Script__PopFloat(arg0, arg1);
    temp_r27 = Script__PopInt(arg0, arg1);
    temp_r28 = Script__PopInt(arg0, arg1);
    temp_r25 = Script__PopString(arg0, arg1, &sp1C);
    temp_r30 = Script__PopInt(arg0, arg1);
    Script__PopFloat(arg0, arg1);
    temp_r30_2 = Enemy__CreateImpl(temp_r24, temp_r29, temp_r27, temp_r28, temp_r25, temp_r30);
    if (temp_r27 == (void *)7) {
        MissionProgress__DisplayAll(0x1F5, M2C_FIELD(M2C_FIELD(temp_r30_2, void **, 0x19D8), void **, 0xC));
    }
    Script__PushInt(arg0, arg1, (s32) temp_r30_2);
    if ((sp18 != 0) && (temp_r24 != NULL)) {
        fn_80184430(temp_r24);
    }
    if ((sp1C != 0) && (temp_r25 != NULL)) {
        fn_80184430(temp_r25);
    }
}

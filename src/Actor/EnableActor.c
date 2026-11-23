/* Actor__EnableActor @ 0x802ACADC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__ToProtagonistCastImpl(void *);
void * Script__PopActor(void *, void *, int);
void Actor__EnableActor(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = Script__PopActor(arg0, arg1, 0);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
    Actor__ToProtagonistCastImpl(temp_r3);
}

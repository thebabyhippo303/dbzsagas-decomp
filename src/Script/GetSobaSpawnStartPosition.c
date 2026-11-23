/* Script__GetSobaSpawnStartPosition @ 0x80041390 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
void Script__PushFloat(void *, void *, float);
void Script__GetSobaSpawnStartPosition(void *arg0, void *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f9;
    void *temp_r10;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = Script__PopInt(arg0, arg1);
    temp_r9 = temp_r3 + 0x44;
    temp_r10 = temp_r3 + 0x770;
    temp_f12 = M2C_FIELD(temp_r9, f32 *, 0x20);
    temp_f0 = M2C_FIELD(temp_r9, f32 *, 0x18);
    temp_f13 = M2C_FIELD(temp_r9, f32 *, 0x1C);
    temp_f9 = 2.0f * temp_f12;
    temp_f11 = 2.0f * temp_f0;
    sp38 = temp_f0;
    temp_f10 = 2.0f * temp_f13;
    sp3C = temp_f13;
    sp40 = temp_f12;
    sp28 = temp_f11;
    sp2C = temp_f10;
    sp30 = temp_f9;
    sp18 = M2C_FIELD(temp_r3, f32 *, 0x770) + temp_f11;
    sp20 = M2C_FIELD(temp_r10, f32 *, 8) + temp_f9;
    sp1C = M2C_FIELD(temp_r10, f32 *, 4) + temp_f10;
    sp8 = sp18;
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
    Script__PushFloat(arg0, arg1, sp8);
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 4));
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 8));
}

/* CActor__SetVelocityRelative @ 0x8002E690 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
void CActor__SetVelocityRelative(void *arg0, void *arg1) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f9;
    void *temp_r11;
    void *temp_r27;
    void *temp_r9;

    temp_r27 = Script__PopInt(arg0, arg1);
    sp8 = Script__PopFloat(arg0, arg1);
    M2C_FIELD(&sp8, f32 *, 4) = Script__PopFloat(arg0, arg1);
    temp_f1 = Script__PopFloat(arg0, arg1);
    M2C_FIELD(&sp8, f32 *, 8) = temp_f1;
    temp_r9 = temp_r27 + 0x44;
    temp_f13 = M2C_FIELD(&sp8, f32 *, 4);
    temp_r11 = temp_r27 + 0x68;
    temp_f9 = (temp_f1 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((sp8 * M2C_FIELD(temp_r9, f32 *, 8)) + (temp_f13 * M2C_FIELD(temp_r9, f32 *, 0x14)));
    temp_f11 = (temp_f1 * M2C_FIELD(temp_r9, f32 *, 0x18)) + ((sp8 * M2C_FIELD(temp_r27, f32 *, 0x44)) + (temp_f13 * M2C_FIELD(temp_r9, f32 *, 0xC)));
    sp20 = temp_f9;
    temp_f1_2 = (temp_f1 * M2C_FIELD(temp_r9, f32 *, 0x1C)) + ((sp8 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f13 * M2C_FIELD(temp_r9, f32 *, 0x10)));
    sp18 = temp_f11;
    sp1C = temp_f1_2;
    M2C_FIELD(temp_r27, f32 *, 0x68) = temp_f11;
    M2C_FIELD(temp_r11, f32 *, 8) = temp_f9;
    M2C_FIELD(temp_r11, f32 *, 4) = temp_f1_2;
}

/* Fighter__FireWeaponSpread @ 0x8002B8BC (size: 0x2FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 Script__PopInt(void *, s32);
f32 Script__PopFloat(void *, s32);
void Fighter__QueueWeaponFire(void *, void *, s32, f32);
float sqrtf(float);
extern f32 lbl_8031160C __attribute__((section(".data")));
extern f32 lbl_80311610 __attribute__((section(".data")));
extern f32 lbl_80311620 __attribute__((section(".data")));

typedef struct { f32 x, y, z, w; } Vec4;

void Fighter__FireWeaponSpread(void *arg0, s32 arg1) {
    Vec4 sp8;
    Vec4 sp18;
    Vec4 sp28;
    Vec4 sp38;
    Vec4 sp48;
    Vec4 sp58;
    Vec4 sp68;
    f32 sp78;
    f32 sp7C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    s32 temp_r26;
    s32 var_r0;
    u32 e1;
    register void *temp_r31;
    void *temp_r8;
    void *temp_r9;
    Vec4 *sp28p;
    Vec4 *sp8p;

    temp_r31 = *(void **)((char *)arg0 + 0xC8);
    temp_r26 = Script__PopInt(arg0, arg1);
    temp_f30 = Script__PopFloat(arg0, arg1);
    temp_f1 = Script__PopFloat(arg0, arg1);
    temp_r8 = (char *)temp_r31 + 0x38;
    temp_f31 = lbl_80311610;
    sp8.x = lbl_8031160C;
    temp_r9 = (char *)temp_r31 + 0x44;
    sp8.y = temp_f31;
    sp8.z = lbl_8031160C;
    *(s32 *)&sp18 = *(s32 *)((char *)temp_r31 + 0x38);
    *(s32 *)((char *)&sp18 + 8) = *(s32 *)((char *)temp_r8 + 8);
    *(s32 *)((char *)&sp18 + 4) = *(s32 *)((char *)temp_r8 + 4);
    sp28.x = *(f32 *)((char *)temp_r9 + 0x18);
    sp28.y = *(f32 *)((char *)temp_r9 + 0x1C);
    sp28.z = *(f32 *)((char *)temp_r9 + 0x20);
    sp28p = &sp28;
    sp28p->y = lbl_8031160C;
    temp_f1_2 = sp28.x * sp28.x;
    sp38.x = temp_f1_2;
    sp38.y = sp28.y * sp28.y;
    sp38.z = sp28.z * sp28.z;
    temp_f1_3 = sqrtf(temp_f1_2 + sp38.y + sp38.z);
    sp78 = temp_f1_3;
    sp7C = temp_f31;
    e1 = ((*(u32 *)&sp78 >> 23) & 0xFF);
    if (e1 != 0) {
        var_r0 = (((*(u32 *)&sp7C >> 23) & 0xFF) >= e1 + 127);
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        temp_f13 = lbl_80311610 / temp_f1_3;
        sp48.x = sp28.x * temp_f13;
        sp48.z = sp28.z * temp_f13;
        sp48.y = sp28.y * temp_f13;
        sp38 = sp48;
        sp28 = sp48;
    }
    sp8p = &sp8;
    temp_f9 = sp8p->y;
    temp_f10 = sp8p->z;
    sp48.x = (sp28.y * temp_f10) - (temp_f9 * sp28.z);
    sp48.z = (sp28.x * temp_f9) - (sp8.x * sp28.y);
    sp48.y = (sp8.x * sp28.z) - (sp28.x * temp_f10);
    sp38 = sp48;
    temp_f0 = (f32)(f64)(temp_r26 ^ 0x80000000);
    temp_f11 = sp38.x * temp_f30;
    temp_f12 = sp38.y * temp_f30;
    temp_f7 = temp_f11 * temp_f0;
    sp68.y = temp_f12;
    temp_f13_2 = sp38.z * temp_f30;
    temp_f6 = temp_f13_2 * temp_f0;
    temp_f12_2 = temp_f12 * temp_f0;
    sp68.x = temp_f11;
    sp68.z = temp_f13_2;
    sp48.x = sp28.x + temp_f7;
    sp48.y = sp28.y + temp_f12_2;
    sp48.z = sp28.z + temp_f6;
    sp58.y = temp_f12_2;
    sp58.x = temp_f7;
    sp58.z = temp_f6;
    sp28 = sp48;
    temp_f11 = sp28.x * lbl_80311620;
    temp_f9_2 = sp28.y * lbl_80311620;
    temp_f8 = sp28.z * lbl_80311620;
    sp48.x = sp18.x + temp_f11;
    sp48.y = sp18.y + temp_f9_2;
    sp48.z = sp18.z + temp_f8;
    sp58.x = temp_f11;
    sp58.y = temp_f9_2;
    sp58.z = temp_f8;
    Fighter__QueueWeaponFire(temp_r31, &sp48, 0, temp_f1);
}

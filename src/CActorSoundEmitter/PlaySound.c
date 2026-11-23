/* CActorSoundEmitter__PlaySound @ 0x801DEC0C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK SfxPlayer__StartVoice(void *, s32);         /* extern */
M2C_UNK fn_801987B8(void *, s32, s32);              /* extern */
M2C_UNK fn_80198C3C(void *, s32);                   /* extern */

void CActorSoundEmitter__PlaySound(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x3C);
    temp_r3 = M2C_FIELD(temp_r9, s32 (**)(void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10));
    fn_801987B8(M2C_FIELD(arg0, void **, 4), temp_r3, arg2);
    SfxPlayer__StartVoice(M2C_FIELD(arg0, void **, 4), temp_r3);
    fn_80198C3C(M2C_FIELD(arg0, void **, 4), temp_r3);
}

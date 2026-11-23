/* AmbientMixer__StartTrack @ 0x80199784 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
s32 SfxPlayer__StartVoice(s32, void *);
char * strcat(char *, char *);
void SfxPlayer__StopVoice(s32, void *);
char * strcpy(char *, const char *);
M2C_UNK AmbientTrack__IsEmpty(s32);
M2C_UNK fn_80199D3C(s32);
M2C_UNK fn_80199D38(s32);
f32 fn_80199D44(s32);
M2C_UNK fn_80198688(s32, s32, f32);
extern s8 lbl_8033FA84 __attribute__((section(".data")));
extern s8 lbl_8033FA88 __attribute__((section(".data")));
extern f32 lbl_8033FA8C __attribute__((section(".data")));
extern f32 lbl_8033FA90 __attribute__((section(".data")));

void AmbientMixer__StartTrack(void *arg0, f32 farg0) {
    union { s8 value; unsigned char bytes[40]; } sp8;
    union { s8 value; unsigned char bytes[40]; } sp30;
    s32 temp_r11;
    s32 temp_r11_2;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r29_4;
    s32 temp_r29_5;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    void *temp_r27;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;

    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && (temp_r27 = arg0 + 0x38, ((AmbientTrack__IsEmpty((s32) temp_r27) == 0) != 0))) {
        SfxPlayer__StopVoice(M2C_FIELD(arg0, s32 *, 0), arg0 + 4);
        SfxPlayer__StopVoice(M2C_FIELD(arg0, s32 *, 0), arg0 + 8);
        if (fn_80199D3C((s32) temp_r27) == 0) {
            temp_r29 = M2C_FIELD(arg0, s32 *, 0);
            temp_r30 = M2C_FIELD(temp_r29, void **, 0x3C);
            temp_r30_2 = temp_r30 + 0x10;
            temp_r29_2 = temp_r29 + M2C_FIELD(temp_r30, s16 *, 0x10);
            temp_r3 = M2C_FIELD(temp_r30_2, s32 (**)(s32, s32), 4)(temp_r29_2, fn_80199D38((s32) temp_r27));
            temp_r29_3 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg0, s32 *, 4) = temp_r3;
            SfxPlayer__SetVoiceVolume(temp_r29_3, temp_r3, fn_80199D44((s32) temp_r27) * farg0);
            SfxPlayer__StartVoice(M2C_FIELD(arg0, s32 *, 0), (void *) M2C_FIELD(arg0, s32 *, 4));
            return;
        }
        strcpy(((s8 *)sp8.bytes), fn_80199D38((s32) temp_r27));
        strcat(((s8 *)sp8.bytes), &lbl_8033FA84);
        strcpy(((s8 *)sp30.bytes), fn_80199D38((s32) temp_r27));
        strcat(((s8 *)sp30.bytes), &lbl_8033FA88);
        temp_r11 = M2C_FIELD(arg0, s32 *, 0);
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x3C);
        temp_r3_2 = M2C_FIELD(temp_r9, s32 (**)(s32, s8 *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), ((s8 *)sp8.bytes));
        temp_r29_4 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 4) = temp_r3_2;
        SfxPlayer__SetVoiceVolume(temp_r29_4, temp_r3_2, fn_80199D44((s32) temp_r27) * farg0);
        fn_80198688(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), lbl_8033FA8C);
        SfxPlayer__StartVoice(M2C_FIELD(arg0, s32 *, 0), (void *) M2C_FIELD(arg0, s32 *, 4));
        temp_r11_2 = M2C_FIELD(arg0, s32 *, 0);
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x3C);
        temp_r3_3 = M2C_FIELD(temp_r9_2, s32 (**)(s32, s8 *), 0x14)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x10), ((s8 *)sp30.bytes));
        temp_r29_5 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 8) = temp_r3_3;
        SfxPlayer__SetVoiceVolume(temp_r29_5, temp_r3_3, fn_80199D44((s32) temp_r27) * farg0);
        fn_80198688(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), lbl_8033FA90);
        SfxPlayer__StartVoice(M2C_FIELD(arg0, s32 *, 0), (void *) M2C_FIELD(arg0, s32 *, 8));
    }
}

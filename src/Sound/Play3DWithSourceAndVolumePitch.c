/* Sound__Play3DWithSourceAndVolumePitch @ 0x80188E1C (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__SetVoicePitch(s32, void *, f32);
s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
s32 SfxPlayer__StartVoice(s32, void *);
void Sound__ClearHandle(s32 *);
void Sound__StoreHandle(void *, s32);
M2C_UNK Sfx3DPlayer__SetVoiceStaticPosition(void *, s32, s32); /* extern */
extern void *lbl_803DCC04;

s32 Sound__Play3DWithSourceAndVolumePitch(u8 *arg0, s32 arg1, s32 *arg2, f32 farg0, f32 farg1) {
    s32 temp_r3;
    void *temp_r9;

    Sound__ClearHandle(arg2);
    if (((void *) lbl_803DCC04 != NULL) && (arg0 != NULL) && ((s32) *arg0 != 0)) {
        temp_r9 = M2C_FIELD(lbl_803DCC04, void **, 0x3C);
        temp_r3 = M2C_FIELD(temp_r9, s32 (**)(void *, u8 *), 0x14)(lbl_803DCC04 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0);
        if (temp_r3 != 0) {
            SfxPlayer__SetVoiceVolume((s32) lbl_803DCC04, temp_r3, farg0);
            SfxPlayer__SetVoicePitch((s32) lbl_803DCC04, (void *) temp_r3, farg1);
            Sfx3DPlayer__SetVoiceStaticPosition(lbl_803DCC04, temp_r3, arg1);
            SfxPlayer__StartVoice((s32) lbl_803DCC04, (void *) temp_r3);
            Sound__StoreHandle(arg2, temp_r3);
            return 1;
        }
    }
    return 0;
}

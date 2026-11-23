/* Sound__Play2DWithVolumePitch @ 0x80188B94 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__ClearHandle(void *);
s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
s32 SfxPlayer__SetVoicePitch(s32, void *, f32);
s32 SfxPlayer__StartVoice(s32, void *);
void Sound__StoreHandle(void *, s32);
extern void *lbl_803DCC00;

s32 Sound__Play2DWithVolumePitch(u8 *arg0, void *arg1, f32 farg0, f32 farg1) {
    s32 temp_r3;
    void *temp_r9;

    Sound__ClearHandle(arg1);
    if (((void *) lbl_803DCC00 != NULL) && (arg0 != NULL) && ((s32) *arg0 != 0)) {
        temp_r9 = M2C_FIELD(lbl_803DCC00, void **, 0x3C);
        temp_r3 = M2C_FIELD(temp_r9, s32 (**)(void *, u8 *), 0x14)(lbl_803DCC00 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0);
        if (temp_r3 != 0) {
            SfxPlayer__SetVoiceVolume((s32) lbl_803DCC00, temp_r3, farg0);
            SfxPlayer__SetVoicePitch((s32) lbl_803DCC00, (void *) temp_r3, farg1);
            SfxPlayer__StartVoice((s32) lbl_803DCC00, (void *) temp_r3);
            Sound__StoreHandle(arg1, temp_r3);
            return 1;
        }
    }
    return 0;
}

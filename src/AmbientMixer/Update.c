/* AmbientMixer__Update @ 0x801994E8 (size: 0x244, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
void AmbientMixer__StartTrack(void *, f32);
void AmbientMixer__StopVoices(void *);
M2C_UNK AmbientTrack__IsEmpty(s32);
M2C_UNK fn_80199D10(s32);
M2C_UNK fn_80199A0C(void *, u32);
M2C_UNK fn_80199A90(void *, u32);
s32 fn_80199B2C(void *, u32);
extern f32 lbl_8033FA78 __attribute__((section(".data")));
extern f32 lbl_8033FA7C __attribute__((section(".data")));
extern f32 lbl_8033FA80 __attribute__((section(".data")));

void AmbientMixer__Update(s32 arg0, u32 arg1) {
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 == 0) {
        if (AmbientTrack__IsEmpty((s32) (arg0 + 0x70)) != 1) {
            fn_80199A90(arg0, arg1);
        }
    } else if (temp_r0 == 1) {
        temp_r30 = 0x10 + arg0;
        temp_r10 = M2C_FIELD(temp_r30, void **, 8);
        temp_f30 = (f32) (f64) arg1 * lbl_8033FA78;
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        temp_f31 = M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(temp_r10, f32 (**)(void *, f32 *), 0x1C)(temp_r30 + M2C_FIELD(temp_r10, s16 *, 0x18), &lbl_8033FA78);
        if (temp_r3 != 0) {
            SfxPlayer__SetVoiceVolume(temp_r3, M2C_FIELD(arg0, s32 *, 4), temp_f31);
            SfxPlayer__SetVoiceVolume(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), temp_f31);
        }
        if (!(((temp_f30 - M2C_FIELD(temp_r30, f32 *, 4)) - M2C_FIELD(temp_r30, f32 *, 0x10)) <= lbl_8033FA7C)) {
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
        }
    } else if (temp_r0 == 3) {
        temp_r10 = arg0 + 0x24;
        temp_r10_2 = M2C_FIELD(temp_r10, void **, 8);
        temp_f30_2 = (f32) (f64) arg1 * lbl_8033FA78;
        temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x24) * M2C_FIELD(temp_r10_2, f32 (**)(void *, f32 *, void *, f32, f32), 0x1C)(temp_r10 + M2C_FIELD(temp_r10_2, s16 *, 0x18), &lbl_8033FA78, temp_r10_2, temp_f30_2 - M2C_FIELD(temp_r10, f32 *, 4), lbl_8033FA78);
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_r3_2 != 0) {
            SfxPlayer__SetVoiceVolume(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), temp_f31_2);
            SfxPlayer__SetVoiceVolume(temp_r3_2, M2C_FIELD(arg0, s32 *, 4), temp_f31_2);
        }
        if (!(((temp_f30_2 - M2C_FIELD(temp_r10, f32 *, 4)) - M2C_FIELD(temp_r10, f32 *, 0x10)) <= lbl_8033FA7C)) {
            goto block_19;
        }
    } else if (temp_r0 == 2) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xA8);
        if (temp_r0_2 != 0) {
            if (arg1 > (u32) temp_r0_2) {
                AmbientMixer__StartTrack(arg0, lbl_8033FA80);
                M2C_FIELD(arg0, s32 *, 0xA8) = fn_80199B2C(arg0, arg1);
            }
        }
        if (AmbientTrack__IsEmpty((s32) (arg0 + 0x70)) != 1) {
            if (fn_80199D10((s32) (arg0 + 0x38)) != 0) {
block_19:
                AmbientMixer__StopVoices(arg0);
                return;
            }
            fn_80199A0C(arg0, arg1);
        }
    }
}

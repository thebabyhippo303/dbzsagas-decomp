/* AmbientMixer__SwitchToPendingTrack @ 0x80199A90 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 AmbientMixer__ComputeNextTriggerTime(s32, s32);
void AmbientMixer__StartTrack(void *, f32);
s8 * AmbientTrack__Copy(s8 *, s8 *);
f32 AmbientTrack__GetVolume(void *);
s32 AmbientTrack__HasRepeatDelay(void *);
M2C_UNK AmbientMixer__BeginFadeIn(s32, s32);        /* extern */
M2C_UNK AmbientTrack__Reset(s8 *);                  /* extern */
extern f32 lbl_8033FAB4 __attribute__((section(".data")));

void AmbientMixer__SwitchToPendingTrack(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s8 *temp_r29;
    s8 *temp_r30;

    temp_r30 = arg0 + 0x70;
    temp_r29 = arg0 + 0x38;
    AmbientTrack__Copy(temp_r29, temp_r30);
    AmbientTrack__Reset(temp_r30);
    temp_r3 = AmbientTrack__HasRepeatDelay(temp_r29);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = AmbientMixer__ComputeNextTriggerTime(arg0, arg1);
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
        return;
    }
    AmbientMixer__StartTrack((void *) arg0, lbl_8033FAB4);
    AmbientTrack__GetVolume(temp_r29);
    AmbientMixer__BeginFadeIn(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_r3;
}

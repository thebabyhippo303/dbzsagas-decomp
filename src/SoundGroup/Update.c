/* SoundGroup__Update @ 0x8019D8F8 (size: 0x178, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoundGroup__ReleaseVoice(void *, s32);
s32 SoundGroup__StartVoice(void *, void *);
s32 Voice__GetRetriggerTime(void *);
s32 Voice__GetStartTime(void *);
s32 Voice__HasChannel(void *);
s32 Voice__IsPaused(void *);
s32 Voice__IsRetriggering(void *);
s32 Voice__IsStopped(void *);
void Voice__ScheduleRetrigger(void *, s32);
void SoundGroup__Update(void *arg0) {
    s32 var_r27;
    u32 (*temp_r9_2)(void *);
    u32 temp_r30;
    void *temp_r29;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;
    void *var_r31;
    void *var_r31_2;

    var_r27 = 0;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x60);
    temp_r9_2 = M2C_FIELD(temp_r9, u32 (**)(void *, M2C_UNK), 0x4C);
    temp_r30 = temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x48));
    var_r31 = M2C_FIELD(arg0, void **, 0x48);
    if (var_r31 != NULL) {
        do {
            temp_r29 = M2C_FIELD(var_r31, void **, 0x50);
            if ((Voice__GetStartTime(var_r31) != 0) && (temp_r30 >= Voice__GetStartTime(var_r31))) {
                temp_r9_3 = M2C_FIELD(var_r31, void **, 0x54);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, u32), 0x24)(var_r31 + M2C_FIELD(temp_r9_3, s16 *, 0x20), temp_r30);
            }
            if (Voice__HasChannel(var_r31) != 0) {
                var_r27 += 1;
            }
            if (Voice__IsStopped(var_r31) != 0) {
                SoundGroup__ReleaseVoice(arg0, (s32) var_r31);
            }
            var_r31 = temp_r29;
        } while (var_r31 != NULL);
    }
    if (var_r27 > (s32) M2C_FIELD(arg0, s32 *, 0x5C)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = var_r27;
    }
    var_r31_2 = M2C_FIELD(arg0, void **, 0x48);
    if (var_r31_2 != NULL) {
        do {
            if ((Voice__IsRetriggering(var_r31_2) != 0) && (Voice__IsPaused(var_r31_2) == 0) && (Voice__HasChannel(var_r31_2) == 0) && (temp_r30 >= Voice__GetRetriggerTime(var_r31_2))) {
                if (SoundGroup__StartVoice(arg0, var_r31_2) != 0) {
                    temp_r9_4 = M2C_FIELD(var_r31_2, void **, 0x54);
                    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, u32), 0x2C)(var_r31_2 + M2C_FIELD(temp_r9_4, s16 *, 0x28), temp_r30);
                } else {
                    Voice__ScheduleRetrigger(var_r31_2, (s32) temp_r30);
                }
            }
            var_r31_2 = M2C_FIELD(var_r31_2, void **, 0x50);
        } while (var_r31_2 != NULL);
    }
}

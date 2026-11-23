/* SfxPlayer__Update @ 0x80199264 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Voice__IsStopped(void *);
s32 Voice__IsLooping(void *);
s32 SoundGroup__FirstVoiceForPlayer(s32, void *);
s32 SoundGroup__NextVoiceForPlayer(s32, void *, s32);
void SfxPlayer__Update(void *arg0) {
    s32 var_r29;
    s32 var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
        var_r29 = 1;
        var_r31 = SoundGroup__FirstVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0);
        if (var_r31 != 0) {
loop_2:
            if ((Voice__IsStopped((void *) var_r31) == 0) && (Voice__IsLooping((void *) var_r31) == 0)) {
                var_r29 = 0;
            }
            var_r31 = SoundGroup__NextVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0, var_r31);
            if ((var_r31 != 0) && (var_r29 != 0)) {
                goto loop_2;
            }
        }
        if (var_r29 != 0) {
            M2C_FIELD(arg0, s32 *, 0x28) = 2;
        }
    }
}

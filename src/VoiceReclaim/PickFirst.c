/* VoiceReclaim__PickFirst @ 0x8019B964 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundGroup__NextReclaimCandidate(s32, s32);
void *VoiceReclaim__PickFirst(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = SoundGroup__NextReclaimCandidate(arg0, arg2);
    var_r3 = arg2;
    if (var_r3 != 0) {
loop_1:
        if (var_r3 != arg3) {
            if (var_r3 != temp_r0) {
                var_r3 = M2C_FIELD(var_r3, s32 *, 0x50);
                if (var_r3 == 0) {
                    goto block_4;
                }
                goto loop_1;
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        var_r3 = 0;
    }
    return (void *) var_r3;
}


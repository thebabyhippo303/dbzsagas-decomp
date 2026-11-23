/* AnimPose__ResetChannels @ 0x8023E678 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32; typedef unsigned short u16; typedef int s32;
typedef struct { s32 value; char pad4[0x1C]; u16 active; char pad22[2]; s32 state; u16 option; } Channel;
typedef struct { u32 count; char pad4[4]; Channel *channels; } AnimPose;
void AnimPose__ResetChannels(AnimPose *pose, u32 flags, u16 option) {
    Channel *channel;
    u32 mask;
    u32 i;
    channel = pose->channels;
    mask = 1;
    i = 0;
    if (i < pose->count) {
        do {
            if (mask & flags) {
                channel->value = 0;
                channel->active = 1;
                channel->option = option;
                channel->state = -1;
                *(s32 *)((char *)channel + 0x14) = 0;
            }
            i++;
            channel++;
            mask <<= 1;
        } while (i < pose->count);
    }
}
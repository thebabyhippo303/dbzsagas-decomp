/* AvatarVoice__Say @ 0x80250D80 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 AvatarVoice__ScaleVolume(f32);

s32 AvatarVoice__Say(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 a2 = arg2;
    s32 a1 = arg1;
    f32 vol = farg0;
    void *vt1;
    void *vt2;
    void *vt3;
    void *ptr;
    s32 f0;
    s32 ret;

    vt1 = M2C_FIELD(arg0, void **, 0x18);
    if (M2C_FIELD(vt1, s32 (**)(void *, s32, s32), 0x14)((char *)arg0 + M2C_FIELD(vt1, s16 *, 0x10), a2, 0) != 0) {
        vt2 = M2C_FIELD(arg0, void **, 0x18);
        f0 = M2C_FIELD(arg0, s32 *, 0);
        ptr = (char *)arg0 + M2C_FIELD(vt2, s16 *, 0x20);
        vt2 = (char *)vt2 + 0x20;
        vol = AvatarVoice__ScaleVolume(vol);
        ret = M2C_FIELD(vt2, s32 (**)(void *, s32, s32, f32, f32), 4)(ptr, a1, f0, vol, M2C_FIELD(arg0, f32 *, 4));
        if (ret != 0) {
            vt3 = M2C_FIELD(arg0, void **, 0x18);
            M2C_FIELD(vt3, void (**)(void *, s32), 0x1C)((char *)arg0 + M2C_FIELD(vt3, s16 *, 0x18), a2);
            M2C_FIELD(arg0, s32 *, 8) = ret;
            return 1;
        }
    }
    return 0;
}

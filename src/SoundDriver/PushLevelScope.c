/* SoundDriver__PushLevelScope @ 0x80193830 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 SoundDriver__PushLevelScope(void *arg0, void *arg1) {
    s32 idx;
    s32 *slots;
    s32 res;
    void *vt;

    if ((arg1 != NULL) && (M2C_FIELD(arg0, s32 *, 0xC) != 4)) {
        vt = M2C_FIELD(arg0, void **, 0x60);
        res = M2C_FIELD(vt, s32 (**)(void *, void *), 0x15C)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x158), arg1);
        slots = (s32 *) ((char *) arg0 + 0x10);
        slots[M2C_FIELD(arg0, s32 *, 0xC)] = res;
        idx = M2C_FIELD(arg0, s32 *, 0xC);
        if (slots[idx] != 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = idx + 1;
            return 1;
        }
    }
    return 0;
}

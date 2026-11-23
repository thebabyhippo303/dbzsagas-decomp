/* GameApp__PlaybackRecordedFrameTime @ 0x801D5474 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

void *File__LoadToBuffer(s32, void *, void *);
s32 GameApp__ApplyRecordedControllerState(void *, void *);
void memFree(void *);
extern s32 lbl_803A35A4 __attribute__((section(".data")));
extern s32 lbl_803DCBB8;
extern s32 lbl_803DCBBC;

void GameApp__PlaybackRecordedFrameTime(void *arg0) {
    s32 sp8[2];
    void *res;
    s32 ret;
    s32 f32;
    void *f24;
    s32 nf32;
    void *nf24;
    s32 f28;
    s32 val;

    if (*(s32 *)((char *)arg0 + 16) == 2) {
        if (*(s32 *)((char *)arg0 + 28) == 0) {
            res = File__LoadToBuffer((s32)((char *)arg0 + 36), (void *)((char *)arg0 + 28), (void *)sp8);
            *(void **)((char *)arg0 + 20) = res;
            *(void **)((char *)arg0 + 24) = res;
            lbl_803DCBB8 = 1;
        }
        ret = GameApp__ApplyRecordedControllerState(arg0, *(void **)((char *)arg0 + 24));
        f32 = *(s32 *)((char *)arg0 + 32);
        f24 = *(void **)((char *)arg0 + 24);
        nf32 = f32 + ret;
        f28 = *(s32 *)((char *)arg0 + 28);
        *(s32 *)((char *)arg0 + 32) = nf32;
        nf24 = (void *)((char *)f24 + ret);
        *(void **)((char *)arg0 + 24) = nf24;
        val = *(s32 *)((char *)f24 + ret);
        lbl_803DCBBC = val;
        *(void **)((char *)arg0 + 24) = (void *)((char *)nf24 + 4);
        *(s32 *)((char *)arg0 + 32) = nf32 + 4;
        if ((nf32 + 4 >= f28) || (val == -1)) {
            *(s32 *)((char *)arg0 + 16) = 3;
            memFree(*(void **)((char *)arg0 + 20));
            lbl_803DCBB8 = 0;
            lbl_803DCBBC = lbl_803A35A4;
        }
    }
}

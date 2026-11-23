/* DebugOverlay__SetVisible @ 0x801388E8 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
void fn_8026D498(void *);
void fn_8026D514(void *);

void DebugOverlay__SetVisible(char *self, s32 vis) {
    s32 i;
    s32 j;
    void *vt;

    *(s32 *)(self + 0x6BA4) = vis;
    if (vis != 0) {
        for (i = 0; i < 6; i++) {
            vt = *(void **)(self + 0x51E4 + i * 500);
            (*(void (**)(void *))((char *)vt + 0x1CC))(self + 0x5048 + i * 500 + *(s16 *)((char *)vt + 0x1C8));
        }
        j = 0;
        while (j < 8) {
            vt = *(void **)(self + 0x5D9C + j * 500);
            (*(void (**)(void *))((char *)vt + 0x1CC))(self + 0x5C00 + j * 500 + *(s16 *)((char *)vt + 0x1C8));
            j++;
        }
        fn_8026D498(self + 0x41DC);
        fn_8026D498(self + 0x43D0);
        fn_8026D498(self + 0x45C4);
        fn_8026D498(self + 0x4E54);
    } else {
        for (i = 0; i < 6; i++) {
            vt = *(void **)(self + 0x51E4 + i * 500);
            (*(void (**)(void *))((char *)vt + 0x1DC))(self + 0x5048 + i * 500 + *(s16 *)((char *)vt + 0x1D8));
        }
        j = 0;
        while (j < 8) {
            vt = *(void **)(self + 0x5D9C + j * 500);
            (*(void (**)(void *))((char *)vt + 0x1DC))(self + 0x5C00 + j * 500 + *(s16 *)((char *)vt + 0x1D8));
            j++;
        }
        fn_8026D514(self + 0x41DC);
        fn_8026D514(self + 0x43D0);
        fn_8026D514(self + 0x45C4);
        fn_8026D514(self + 0x4E54);
    }
}

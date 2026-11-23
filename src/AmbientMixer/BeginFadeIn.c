/* AmbientMixer__BeginFadeIn @ 0x80199978 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 AmbientTrack__GetFadeInTime(void *);
extern f32 lbl_8033FAA0 __attribute__((section(".data")));
static const char pool_pad[0xFA98] = {1};

void AmbientMixer__BeginFadeIn(u8 *arg0, u32 arg1, f32 farg0) {
    void *temp_r11;
    void *temp_r29;

    temp_r29 = arg0 + 0x10;
    temp_r11 = M2C_FIELD(temp_r29, void **, 8);
    M2C_FIELD(temp_r11, void (**)(void *, f32), 0x14)((char *) temp_r29 + M2C_FIELD(temp_r11, s16 *, 0x10), (f32) arg1 * lbl_8033FAA0);
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(temp_r29, f32 *, 0x10) = AmbientTrack__GetFadeInTime(arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
}

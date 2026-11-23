/* MessagePanel__SetMessageTextMetrics @ 0x80269EF8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Candidate: MessagePanel__SetMessageTextMetrics @ 0x80269EF8 (0x48). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
#define NULL 0

void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);

void MessagePanel__SetMessageTextMetrics(void *arg0, f32 farg0, f32 farg1) {
    SphereText__SetSize(arg0 + 0x5D6C, farg0);
    SphereText__SetSpacing(arg0 + 0x5D6C, farg1);
}

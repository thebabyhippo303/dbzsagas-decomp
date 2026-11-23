/* UiByteAnimator__Apply @ 0x80260BB4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void UiAnimator__Evaluate(void *);

void UiByteAnimator__Apply(void *arg0) {
    void *t;

    UiAnimator__Evaluate(arg0);
    t = M2C_FIELD(arg0, void **, 48);
    if (t == NULL) {
        return;
    }
    M2C_FIELD(t, u8 *, 0) = (u8)M2C_FIELD(arg0, f32 *, 0);
}

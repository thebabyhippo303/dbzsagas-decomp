/* SphereTextBox__MeasureWord @ 0x80273304 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * SphereTextBox__FindNextSpace(void *, char *);
void SphereText__Construct(void *);
void * Font__GetDefault(void);
void SphereText__SetFont(void *, void *, f32, f32);
void SphereText__SetText(void *, void *);
f32 SphereText__GetTextWidth(void *);
void SphereText__Destroy(void *, s32);
extern f32 lbl_8034A09C __attribute__((section(".data")));
extern f32 lbl_8034A0A0 __attribute__((section(".data")));

f32 SphereTextBox__MeasureWord(void *arg0, s8 *arg1) {
    u8 obj[504];
    f32 width;
    s8 *end;
    s8 saved;

    end = (s8 *) SphereTextBox__FindNextSpace(arg0, (char *) arg1);
    SphereText__Construct(obj);
    SphereText__SetFont(obj, Font__GetDefault(), lbl_8034A09C, lbl_8034A0A0);
    if (end != NULL) {
        saved = *end;
        *end = 0;
    }
    SphereText__SetText(obj, arg1);
    width = SphereText__GetTextWidth(obj);
    if (end != NULL) {
        *end = saved;
    }
    SphereText__Destroy(obj, 2);
    return width;
}

/* ButtonPromptBar__ClearAllSlots @ 0x80262088 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ButtonPromptBar__ClearAllSlots(void *arg0) {
u32 i;
char *b;
char *a;
void *v;
char *self;
i = 0;
b = (char *)arg0 + 416;
a = (char *)arg0 + 828;
do {
v = *(void **)a;
i++;
a += 1360;
self = b + M2C_FIELD(v, s16 *, 32);
b += 1360;
M2C_FIELD(v, void (**)(void *), 36)(self);
} while (i <= 11);
}

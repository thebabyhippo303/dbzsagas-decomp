/* CollPart__WriteRow @ 0x80281054 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int sprintf(char *buf, const char *fmt, ...);
extern int strlen(const char *s);
extern void TableFile__WriteToken(void *file, const char *buf, int len);
void CollPart__WriteRow(void *self, int index) {
    char buf[80];
    int off = index * 2;
    sprintf(buf, "effectID %u", *(u16 *)(off + (int)M2C_FIELD(self, char **, 44)));
    TableFile__WriteToken(M2C_FIELD(self, void **, 0), buf, strlen(buf));
}

/* CollideArray76__AppendDescription @ 0x801D4A3C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

int sprintf(char *, const char *, ...);
char *strcat(char *, const char *);
extern const char lbl_80341E7C[] __attribute__((section(".data")));

void CollideArray76__AppendDescription(void *arg0, char *arg1) {
    char buffer[256];

    sprintf(buffer, lbl_80341E7C, M2C_FIELD(arg0, s32 *, 0x24), 76, M2C_FIELD(arg0, s32 *, 0x28));
    strcat(arg1, buffer);
}

/* Avatar__SetReferenceBoneName @ 0x80098F88 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * strcpy(char *, const char *);
void Avatar__SetReferenceBoneName(s32 arg0, s8 *arg1) {
    strcpy(arg0 + 0x1A40, arg1);
}

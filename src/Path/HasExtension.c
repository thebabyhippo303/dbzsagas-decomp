/* Path__HasExtension @ 0x801885FC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int strlen(const char *);
s32 Path__HasExtension(s8 *path) {
    s32 length = strlen(path);
    u8 c;

    goto loop;
test_dot:
    if (c == '.') {
        return 1;
    }
loop:
    length -= 1;
    if (length <= 0) {
        return 0;
    }
    c = path[length];
    if (c == '\\') {
        return 0;
    }
    goto test_dot;
}

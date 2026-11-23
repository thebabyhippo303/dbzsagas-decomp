/* Open @ 0x801804D0 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int printf(char *, ...);
int strlen(const char *);
int FileHandle__Write(void *, char *, int, int);
extern void *lbl_803DCB88;
extern char lbl_8033C9D9[] __attribute__((section(".data")));
extern char lbl_8033D3B0[] __attribute__((section(".data")));
extern char lbl_8033D3A4[] __attribute__((section(".data")));

void Open(char *path) {
    char buf[256];
    int n;
    int i;
    printf(lbl_8033D3A4, path);
    if (lbl_803DCB88 != 0) {
        if (*path == 92) {
            path = path + 1;
        } else if (*path == 46 && path[1] == 92) {
            path = path + 2;
        }
        n = strlen(path);
        for (i = 0; i < n; i++) {
            signed char ch = path[i];
            if (ch == 47) {
                buf[i] = 92;
            } else {
                int c = ch;
                if (c[lbl_8033C9D9] & 1) {
                    c += 32;
                }
                buf[i] = c;
            }
        }
        buf[i] = 0;
        FileHandle__Write(lbl_803DCB88, buf, n, 0);
        FileHandle__Write(lbl_803DCB88, lbl_8033D3B0, 2, 0);
    }
}

/* EnumTable__FindByName @ 0x80254BB8 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
int String__CompareNIgnoreCase(const char *, const char *, int);
int EnumTable__FindByName(void *arg0, char *arg1, int arg2) {
    int i;
    void *p;
    char *s;
    int ret;
    if (arg1 == 0) {
        return -1;
    }
    if (*arg1 == 0) {
        return -1;
    }
    if (arg2 >= 0) {
        for (i = 0; i < *(int *)arg0; i++) {
            p = *(void **)((char *)arg0 + 4);
            s = ((char *(*)(void *, int))*(void **)((char *)p + 12))((char *)arg0 + *(short *)((char *)p + 8), i);
            if (s == 0) {
                continue;
            }
            if (String__CompareNIgnoreCase(arg1, s, arg2) == 0) {
                break;
            }
        }
    } else {
        for (i = 0; i < *(int *)arg0; i++) {
            p = *(void **)((char *)arg0 + 4);
            s = ((char *(*)(void *, int))*(void **)((char *)p + 12))((char *)arg0 + *(short *)((char *)p + 8), i);
            if (s == 0) {
                continue;
            }
            if (String__CompareIgnoreCase(arg1, s) == 0) {
                break;
            }
        }
    }
    ret = -1;
    if (i < *(int *)arg0) {
        ret = i;
    }
    return ret;
}

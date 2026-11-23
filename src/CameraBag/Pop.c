/* CameraBag__Pop @ 0x800BBF58 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef short s16; typedef unsigned int u32;
typedef struct W3 { s32 a, b, c; } W3;
char *CameraBag__GetCurrentName(void *);
void Debug__FormatMessage(char *, ...);
void *CameraBag__GetCurrent(void *);
void memset(void *, int, s32);
extern char lbl_80321664[] __attribute__((section(".data")));

void *CameraBag__Pop(char *self) {
    W3 sp8;
    W3 sp18;
    char *cur;
    char *list;
    char *top;
    char *vt;
    s32 cnt, n, tmp;
    Debug__FormatMessage(lbl_80321664, CameraBag__GetCurrentName(self));
    cur = CameraBag__GetCurrent(self);
    if (cur != 0) {
        vt = *(char **)(cur + 0x3C);
        (*(void (**)(void *))(vt + 0x1C))(cur + *(s16 *)(vt + 0x18));
    }
    list = self + 8;
    cnt = *(s32 *)(list + 4);
    top = **(char ***)list;
    if (cnt > 1) {
        cnt -= 2;
        cnt <<= 2;
        top = *(char **)(*(char **)list + cnt);
    }
    if (top != 0) {
        sp8 = *(W3 *)(self + 0xA0);
        sp18 = *(W3 *)(self + 0xAC);
        vt = *(char **)(top + 0x3C);
        (*(void (**)(void *, void *, void *))(vt + 0x14))(top + *(s16 *)(vt + 0x10), &sp8, &sp18);
    }
    if (cur != 0 && ((tmp = *(s32 *)(list + 4)) - 1 < 0 || tmp - 1 < tmp)) {
        n = *(volatile s32 *)(list + 4) - 1;
        *(s32 *)(list + 4) = n;
        if (*(s32 *)(list + 0x10) != 0) {
            memset(*(char **)(self + 8) + n * 4, 0, 4);
        }
    }
    return cur;
}

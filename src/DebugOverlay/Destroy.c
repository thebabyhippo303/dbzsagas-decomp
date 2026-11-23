/* DebugOverlay__Destroy @ 0x8013665C (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
#define NULL 0
void fn_802704BC(void *, int);
void fn_8026F7EC(void *, int);
void fn_80264EB0(void *, int);
void fn_80260DE8(void *, int);
void fn_80262928(void *, int);
extern char lbl_8032C490[];

void DebugOverlay__Destroy(char *arg0, s32 arg1) {
    char *p;
    void *vt;

    *(char **)(arg0 + 0x19C) = lbl_8032C490;
    fn_8026F7EC(arg0 + 0x6BB4, 2);
    if (arg0 + 0x5C00 != NULL) {
        p = arg0 + 0x6BA0;
        if (arg0 + 0x5C00 != p) {
            do {
                p -= 0x1F4;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x5C00 != p);
        }
    }
    if (arg0 + 0x5048 != NULL) {
        p = arg0 + 0x5C00;
        if (arg0 + 0x5048 != p) {
            do {
                p -= 0x1F4;
                vt = *(void **)(p + 0x19C);
                (*(void (**)(void *, int))((char *)vt + 0xC))(p + *(s16 *)((char *)vt + 8), 0);
            } while (arg0 + 0x5048 != p);
        }
    }
    fn_802704BC(arg0 + 0x4E54, 2);
    fn_802704BC(arg0 + 0x4C60, 2);
    fn_80264EB0(arg0 + 0x47B8, 2);
    fn_802704BC(arg0 + 0x45C4, 2);
    fn_802704BC(arg0 + 0x43D0, 2);
    fn_802704BC(arg0 + 0x41DC, 2);
    fn_80260DE8(arg0 + 0x1A0, 2);
    fn_80262928(arg0, arg1);
}

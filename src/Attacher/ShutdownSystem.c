/* Attacher__ShutdownSystem @ 0x80214B4C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { char pad[0x18]; void *head; } AttacherShutdown;
extern AttacherShutdown lbl_803ACF90;
void Attacher__FreeAll(void);
void memFree(void *p);
void memset(void *, int, u32);
void Attacher__ShutdownSystem(void) {
    Attacher__FreeAll();
    if (lbl_803ACF90.head != NULL) {
        memFree(lbl_803ACF90.head);
    }
    memset(&lbl_803ACF90, 0, 0x3C);
}

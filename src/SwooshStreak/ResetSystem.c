/* SwooshStreak__ResetSystem @ 0x8022FE24 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SwooshStreak__KillLibraryStreaks(s32);
void SwooshStreak__FreeLibraryAssets(s32);
void memset(void *, int, u32);
void AABB__SetEmpty(void *);
extern char lbl_803ADEA8[] __attribute__((section(".data")));
extern void *lbl_803ADE7C __attribute__((section(".data")));

void SwooshStreak__ResetSystem(void) {
    void *p;
    SwooshStreak__KillLibraryStreaks(0);
    SwooshStreak__FreeLibraryAssets(0);
    memset(lbl_803ADEA8, 0, 40);
    p = lbl_803ADE7C;
    AABB__SetEmpty((char *)p + 0x4C);
    if (p != NULL) {
        do {
            *(s32 *)p = 0;
            p = *(void **)((char *)p + 4);
        } while (p != NULL);
    }
}

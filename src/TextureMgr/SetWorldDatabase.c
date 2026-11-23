/* TextureMgr__SetWorldDatabase @ 0x80247970 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 TextureMgr__GetActiveDatabase(void);
typedef struct {
    char pad[0x40];
    int x40;
    int x44;
    int x48;
} TMDB;
extern TMDB lbl_803B1C6C __attribute__((section(".data")));

void TextureMgr__SetWorldDatabase(void) {
    s32 r = TextureMgr__GetActiveDatabase();
    s32 v = lbl_803B1C6C.x40;
    lbl_803B1C6C.x48 = r;
    lbl_803B1C6C.x44 = v;
}

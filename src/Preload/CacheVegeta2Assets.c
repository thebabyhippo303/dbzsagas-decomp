/* Preload__CacheVegeta2Assets @ 0x8012DD10 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Preload__LoadDblAsset(const char *path);
void Preload__RegisterBank(char *name);
void * Preload__ResolveFile(const char *path);
s32 Preload__CacheVegetaParticles(void);
extern char lbl_80329C94[];
extern char lbl_80329CAC[];
extern char lbl_80329CC8[];
extern char lbl_80329CD0[];

void Preload__CacheVegeta2Assets(void) {
    Preload__LoadDblAsset(lbl_80329C94);
    Preload__LoadDblAsset(lbl_80329CAC);
    Preload__RegisterBank(lbl_80329CC8);
    Preload__ResolveFile(lbl_80329CD0);
    Preload__CacheVegetaParticles();
}

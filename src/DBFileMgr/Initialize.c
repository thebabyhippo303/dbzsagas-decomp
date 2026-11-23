/* DBFileMgr__Initialize @ 0x802043C0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0
void memset(void *, int, unsigned int);
void *MemHeap__Alloc(unsigned int, unsigned int);
typedef struct { s32 f0; char pad4[16]; s32 f20; char pad24[8]; s32 f32; char pad36[4]; s32 f40; char pad44[96]; void *ptr140; s32 f144; s32 f148; s32 f152; s32 f156; s32 f160; s32 f164; } DBMgr;
extern DBMgr lbl_803ADBE4;
void DBFileMgr__Initialize(s32 arg0) {
    s32 n = arg0;
    memset((void *)&lbl_803ADBE4, 0, 168U);
    lbl_803ADBE4.f0 = 2;
    lbl_803ADBE4.f148 = 0;
    lbl_803ADBE4.f20 = 0;
    lbl_803ADBE4.f32 = 0;
    lbl_803ADBE4.f40 = 0;
    lbl_803ADBE4.f152 = 0;
    lbl_803ADBE4.f156 = 0;
    lbl_803ADBE4.f164 = 0;
    lbl_803ADBE4.f160 = 1;
    lbl_803ADBE4.f144 = n;
    lbl_803ADBE4.ptr140 = MemHeap__Alloc(n * 12, 8);
    memset(lbl_803ADBE4.ptr140, 0, lbl_803ADBE4.f144 * 12);
}

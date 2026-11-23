/* TextureMgr__BindRenderTarget @ 0x8024824C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16; typedef int s32;
typedef struct { s32 f0; u16 f4; char pad[18]; } RTEnt;
typedef struct { char pad[160]; RTEnt *ptrs[1]; } TexTables;
extern TexTables lbl_803B1C6C __attribute__((section(".data")));
void TexBind__SetRenderTarget(u16, s32);
void TextureMgr__BindRenderTarget(s32 a, s32 b, s32 c) {
    TexBind__SetRenderTarget(lbl_803B1C6C.ptrs[a][b & 0x7FFF].f4, c);
}
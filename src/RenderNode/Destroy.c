/* RenderNode__Destroy @ 0x8029F8F4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__Delete(void *);
void memFree(void *);
void SceneMgr__DetachInstance(void *, s32);
extern M2C_UNK lbl_80347118 __attribute__((section(".data")));
extern M2C_UNK lbl_80350618 __attribute__((section(".data")));

void RenderNode__Destroy(void *arg0, u32 flags) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80350618;
    SceneMgr__DetachInstance(M2C_FIELD(arg0, void **, 0x40), 0);
    memFree(M2C_FIELD(arg0, void **, 0x40));
    memFree(M2C_FIELD(arg0, void **, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80347118;
    if (flags & 1) {
        Mem__Delete(arg0);
    }
}

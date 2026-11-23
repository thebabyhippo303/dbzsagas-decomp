/* ParticleMgr__FlushVertexBuffers @ 0x802274BC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x474];
    void *buf0;
    s32 gap;
    void *buf1;
} PMgrBufs;
extern PMgrBufs lbl_803AD05C;
void DCFlushRangeNoSync(void *, u32);

void ParticleMgr__FlushVertexBuffers(void) {
    if (lbl_803AD05C.buf0 != NULL) {
        DCFlushRangeNoSync((void *)((u32)lbl_803AD05C.buf0 & ~31u), 0x25A0);
        DCFlushRangeNoSync((void *)((u32)lbl_803AD05C.buf1 & ~31u), 0x340);
    }
}

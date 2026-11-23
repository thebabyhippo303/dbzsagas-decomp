/* LeafSystem__UpdateSpawners @ 0x80288BD4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
void LeafSystem__SpawnLeaves(void *, void *, void *);

void LeafSystem__UpdateSpawners(void *arg0, void *arg1) {
    s32 i = 0;
    s32 off;

    if (i >= M2C_FIELD(arg1, s32 *, 92)) {
        return;
    }
    off = 0;
    do {
        i++;
        LeafSystem__SpawnLeaves(arg0, arg1, (void *)(M2C_FIELD(arg1, s32 *, 88) + off));
        off += 448;
    } while (i < M2C_FIELD(arg1, s32 *, 92));
}

/* Camera__SmoothFollowPositions @ 0x800C5398 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Camera__SmoothFollowPosition(void *, void *, void *);

void Camera__SmoothFollowPositions(void *arg0, void *arg1, void *arg2) {
    void *node = M2C_FIELD(arg1, void **, 40);
    void *r4;

    if (node == NULL) {
        return;
    }
    do {
        r4 = M2C_FIELD(node, void **, 40);
        if (M2C_FIELD(r4, s32 *, 32) == 10) {
            Camera__SmoothFollowPosition(arg0, (char *)r4 + 60, arg2);
        }
        node = M2C_FIELD(node, void **, 52);
    } while (node != NULL);
}

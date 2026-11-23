/* CameraLOD__ComputeLevel @ 0x80253FE4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int CameraLOD__GetLevelForCamera(void *, int, int);
int CameraLOD__ComputeLevel(void *arg0, int arg1) {
    int i = 0;
    int best = 5;
    if (i < *(int *)((char *)arg0 + 0x3C)) {
        int *p = (int *)((char *)arg0 + 0x40);
        do {
            int v = *p++;
            if (v != 0) {
                int lv = CameraLOD__GetLevelForCamera(arg0, arg1, v);
                if (lv < best) {
                    best = lv;
                }
            }
            i++;
        } while (i < *(int *)((char *)arg0 + 0x3C));
    }
    return best;
}

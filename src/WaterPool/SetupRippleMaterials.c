/* WaterPool__SetupRippleMaterials @ 0x8029B538 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ProcModel__FreeGeometry(void *);
void ProcModel__SetLayerMaterial(void *, s32, s32, s32, s32, s32, s32, s32);
void WaterPool__SetupRippleMaterials(void *arg0, s32 arg1) {
    s32 i;
    void *p1;
    void *p2;
    void *arr;
    s32 n;
    s32 idx;
    void *slot;
    void *g;
    i = 0;
    if (i < M2C_FIELD(arg0, s32 *, 0x1DC)) {
        p1 = (char *)arg0 + 0x204;
        do {
            i++;
            ProcModel__FreeGeometry(p1);
            p1 = (char *)p1 + 0x1C;
        } while (i < M2C_FIELD(arg0, s32 *, 0x1DC));
    }
    if (M2C_FIELD(arg0, s16 *, 0x43C) != 0) {
        ProcModel__FreeGeometry((char *)arg0 + 0x41C);
    }
    i = 0;
    if (i < arg1) {
        p2 = (char *)arg0 + 0x294;
        do {
            idx = i;
            arr = M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), void **, 0x10);
            if (i < 0) {
                idx = M2C_FIELD(arr, s32 *, 4) - 1;
            }
            n = M2C_FIELD(arr, s32 *, 4);
            if (idx >= n || n == 0) {
                slot = NULL;
            } else {
                slot = (void *)(M2C_FIELD(arr, s32 *, 0) + idx * 4);
            }
            g = *(void **)slot;
            ProcModel__FreeGeometry(p2);
            i++;
            ProcModel__SetLayerMaterial(p2, 0, M2C_FIELD(g, s16 *, 0x44), 3, 0, 0, 1, M2C_FIELD(g, u8 *, 0x9B));
            p2 = (char *)p2 + 0x1C;
        } while (i < arg1);
    }
}

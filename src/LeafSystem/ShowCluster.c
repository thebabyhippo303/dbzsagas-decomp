/* LeafSystem__ShowCluster @ 0x80289684 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void LeafSystem__AttachInstances(void *, void *, void *);

void LeafSystem__ShowCluster(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 28) == 0) {
        LeafSystem__AttachInstances(arg0, M2C_FIELD(arg1, void **, 32), M2C_FIELD(arg1, void **, 36));
        M2C_FIELD(arg1, s32 *, 28) = 1;
    }
}

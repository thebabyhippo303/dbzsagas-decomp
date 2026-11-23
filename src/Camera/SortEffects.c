/* Camera__SortEffects @ 0x800B9ACC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK qsort(s32, s32, M2C_UNK, M2C_UNK *);        /* extern */
extern M2C_UNK CameraEffect__CompareSortKeys __attribute__((section(".data")));

void Camera__SortEffects(void *arg0) {
    qsort(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28), 4, &CameraEffect__CompareSortKeys);
}

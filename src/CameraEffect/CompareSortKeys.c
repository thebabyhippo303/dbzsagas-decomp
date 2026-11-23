/* CameraEffect__CompareSortKeys @ 0x800CDBE0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


typedef struct SortKeyVTable {
    char pad[8];
    s16 offset;
    char pad2[2];
    s32 (*compare)(void *);
} SortKeyVTable;

s32 CameraEffect__CompareSortKeys(void **arg0, void **arg1) {
    void *obj0 = *arg0;
    void *obj1 = *arg1;
    SortKeyVTable *vt0 = *(SortKeyVTable **)obj0;
    s32 result = vt0->compare((char *)obj0 + vt0->offset);
    SortKeyVTable *vt1 = *(SortKeyVTable **)obj1;

    return result - vt1->compare((char *)obj1 + vt1->offset);
}

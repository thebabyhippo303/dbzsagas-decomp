/* InstancePool__FreeAll @ 0x8021B458 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern char lbl_803ADD28[] __attribute__((section(".bss")));
void InstancePool__Free(void *);
void InstancePool__FreeAll(void) {
    char *db1 = lbl_803ADD28;
    char *db2;
    if (M2C_FIELD(db1, void **, 20) == NULL) {
        return;
    }
    do {
        db2 = lbl_803ADD28;
        InstancePool__Free(M2C_FIELD(db2, void **, 20));
    } while (M2C_FIELD(db2, void **, 20) != NULL);
}

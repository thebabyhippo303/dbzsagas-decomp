/* Database__FreeObjectData @ 0x802037F4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 memFree(void *ptr);

s32 Database__FreeObjectData(void *arg0) {
    void *p;
    s32 ret;
    if (arg0 != NULL && M2C_FIELD(arg0, u8 *, 0) != 17) {
        p = M2C_FIELD(arg0, void **, 44);
        if (p != NULL && (((M2C_FIELD(arg0, u16 *, 2) ^ 1) & 1) != 0)) {
            ret = memFree(p);
            M2C_FIELD(arg0, void **, 44) = NULL;
            return ret;
        }
    }
    return 1;
}

/* Database__LoadChunk144 @ 0x802145D8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void Database__FixupPointerArray(char *);
s32 Database__LoadChunk144(s8 *arg0, void *arg1, s8 **arg2, s32 *arg3) {
    Database__FixupPointerArray((char *)arg0);
    M2C_FIELD(arg1, u16 *, 2) &= (u16)~1;
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}

/* AIGetStreamVolLeft @ 0x8017C7E4 (size: 0x10, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned char u8;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

u8 AIGetStreamVolLeft(void) {
    return (u8)M2C_FIELD((volatile char *)0xCC000000, volatile u32 *, 0x6C04);
}

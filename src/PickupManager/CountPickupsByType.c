/* PickupManager__CountPickupsByType @ 0x800E501C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PickupManager__CountLivePickups(void *);
s32 PickupManager__CountPickupsByType(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 9:
        return PickupManager__CountLivePickups(M2C_FIELD(arg0, void **, 0));
    case 10:
        return PickupManager__CountLivePickups(M2C_FIELD(arg0, void **, 4));
    case 8:
        return PickupManager__CountLivePickups(M2C_FIELD(arg0, void **, 8));
    default:
        return -1;
    }
}

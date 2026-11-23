/* BinkIODVD__Idle @ 0x802EF830 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int DVDGetDriveStatus(void);
extern void BinkIODVD__StartBackgroundRead(void *);

int BinkIODVD__Idle(void *arg0) {
    int st;
    if (*(int *)((char *)arg0 + 0x1C) != 0) {
        return 0;
    }
    st = DVDGetDriveStatus();
    switch (st) {
    case 0:
        BinkIODVD__StartBackgroundRead(arg0);
        break;
    case 1:
    case 2:
    case 10:
        break;
    case -1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
        *(int *)((char *)arg0 + 0x1C) = 1;
        break;
    default:
        break;
    }
    return *(int *)((char *)arg0 + 0x20);
}

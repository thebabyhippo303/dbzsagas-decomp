/* BinkIODVD__Open @ 0x802EFCE8 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 DVDConvertPathToEntrynum(char *);
s32 DVDFastOpen(s32, void *);
void *memset(void *, int, u32);
void BinkIODVD__ReadHeader(void);
void BinkIODVD__ReadFrame(void);
void BinkIODVD__GetBufferSize(void);
void BinkIODVD__SetInfo(void);
void BinkIODVD__Idle(void);
void BinkIODVD__Close(void);
s32 BinkIODVD__Open(void *arg0, s8 *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r9;
    s8 *var_r3;
    void *var_r11;
    memset(arg0, 0, 0x13CU);
    if (arg2 & 0x800000) {
        var_r3 = arg1;
        var_r11 = arg0 + 0x4C;
        var_r9 = 0x30;
        do {
            temp_r0 = M2C_FIELD(var_r3, s32 *, 0);
            var_r9 -= 0x18;
            M2C_FIELD(var_r11, s32 *, 0) = temp_r0;
            temp_r0 = M2C_FIELD(var_r3, s32 *, 4);
            M2C_FIELD(var_r11, s32 *, 4) = temp_r0;
            temp_r0 = M2C_FIELD(var_r3, s32 *, 8);
            M2C_FIELD(var_r11, s32 *, 8) = temp_r0;
            temp_r0 = M2C_FIELD(var_r3, s32 *, 0xC);
            M2C_FIELD(var_r11, s32 *, 0xC) = temp_r0;
            temp_r0 = M2C_FIELD(var_r3, s32 *, 0x10);
            M2C_FIELD(var_r11, s32 *, 0x10) = temp_r0;
            temp_r0 = M2C_FIELD(var_r3, s32 *, 0x14);
            var_r3 += 0x18;
            M2C_FIELD(var_r11, s32 *, 0x14) = temp_r0;
            var_r11 += 0x18;
        } while (var_r9 != 0);
        temp_r0 = M2C_FIELD(var_r3, s32 *, 0);
        M2C_FIELD(var_r11, s32 *, 0) = temp_r0;
        temp_r0 = M2C_FIELD(var_r3, s32 *, 4);
        M2C_FIELD(var_r11, s32 *, 4) = temp_r0;
        temp_r0 = M2C_FIELD(var_r3, s32 *, 8);
        M2C_FIELD(var_r11, s32 *, 8) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        M2C_FIELD(arg0, s32 *, 0xAC) = M2C_FIELD(arg0, s32 *, 0x78);
    } else {
        temp_r3 = DVDConvertPathToEntrynum(arg1);
        if ((temp_r3 == -1) || (DVDFastOpen(temp_r3, arg0 + 0x4C) == 0)) {
            return 0;
        }
    }
    M2C_FIELD(arg0, void **, 0) = BinkIODVD__ReadHeader;
    M2C_FIELD(arg0, void **, 4) = BinkIODVD__ReadFrame;
    M2C_FIELD(arg0, void **, 8) = BinkIODVD__GetBufferSize;
    M2C_FIELD(arg0, void **, 0xC) = BinkIODVD__SetInfo;
    M2C_FIELD(arg0, void **, 0x10) = BinkIODVD__Idle;
    M2C_FIELD(arg0, void **, 0x14) = BinkIODVD__Close;
    return 1;
}

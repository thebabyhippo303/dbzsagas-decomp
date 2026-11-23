/* SoftBodyParams__AddUser @ 0x80211B5C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Mem__New(u32);
void *fn_802115A8();

void SoftBodyParams__AddUser(void *arg0, s32 arg1) {
    void *temp_r3;

    Mem__New(0xCU);
    temp_r3 = fn_802115A8();
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = temp_r3;
    M2C_FIELD(temp_r3, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}


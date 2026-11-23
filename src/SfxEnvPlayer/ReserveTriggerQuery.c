/* SfxEnvPlayer__ReserveTriggerQuery @ 0x8019B270 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
char * Mem__NewArray(s32);
void SfxEnvPlayer__ReserveTriggerQuery(void *arg0, s32 arg1) {
    s8 *temp_r3;
    s8 *temp_r3_2;

    if (arg1 > (s32) M2C_FIELD(arg0, s32 *, 0xBC)) {
        temp_r3 = M2C_FIELD(arg0, s8 **, 0xB8);
        if (temp_r3 != NULL) {
            Mem__DeleteArray(temp_r3);
        }
        temp_r3_2 = Mem__NewArray(arg1 * 4);
        M2C_FIELD(arg0, s32 *, 0xBC) = arg1;
        M2C_FIELD(arg0, s8 **, 0xB8) = temp_r3_2;
        if (temp_r3_2 == NULL) {
            M2C_FIELD(arg0, s32 *, 0xBC) = (s32) temp_r3_2;
        }
    }
}

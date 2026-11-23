/* BezierPath__Destroy @ 0x801FF74C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__DeleteArray(void *);
M2C_UNK SplinePath__Destroy(void *, s32);           /* extern */
extern M2C_UNK lbl_80345618 __attribute__((section(".data")));

void BezierPath__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_80345618;
    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x10) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x58);
        if (temp_r3 != NULL) {
            Mem__DeleteArray(temp_r3);
        }
    }
    SplinePath__Destroy(arg0, arg1);
}

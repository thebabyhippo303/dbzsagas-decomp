/* LeafSystem__InitLeafInstance @ 0x8028DEB8 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK LeafSystem__FillLeafMatrix(s32);
extern f32 lbl_8034F5CC __attribute__((section(".data")));

void LeafSystem__InitLeafInstance(void *arg0, s32 arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    s32 temp_r29;

    temp_r29 = arg0 + 0x20;
    LeafSystem__FillLeafMatrix(temp_r29);
    M2C_FIELD(arg0, s32 *, 0xB0) = arg1;
    {
        f32 c = lbl_8034F5CC;
        temp_r11 = arg0 + 8;
    temp_r10 = arg0 + 0x14;
    M2C_FIELD(arg0, f32 *, 8) = c;
    M2C_FIELD(temp_r11, f32 *, 4) = c;
    M2C_FIELD(temp_r11, f32 *, 8) = c;
    M2C_FIELD(arg0, f32 *, 0x14) = c;
    M2C_FIELD(temp_r10, f32 *, 4) = c;
    M2C_FIELD(temp_r10, f32 *, 8) = c;
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r11_2 != NULL) {
        temp_r9 = arg0 + 0x2C;
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0);
        M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(temp_r11_2, f32 *, 4);
        M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(temp_r11_2, f32 *, 8);
        M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x10);
        M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x14);
        M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x18);
        M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x20);
        M2C_FIELD(temp_r9, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x24);
        M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) M2C_FIELD(temp_r11_2, f32 *, 0x28);
        {
            f32 t0 = M2C_FIELD(temp_r11_2, f32 *, 0x30);
            f32 t1 = M2C_FIELD(temp_r11_2, f32 *, 0x34);
            f32 t2 = M2C_FIELD(temp_r11_2, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x20) = t0;
            M2C_FIELD(temp_r29, f32 *, 4) = t1;
            M2C_FIELD(temp_r29, f32 *, 8) = t2;
        }
    }
}

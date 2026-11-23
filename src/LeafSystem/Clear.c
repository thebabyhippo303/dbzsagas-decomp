/* LeafSystem__Clear @ 0x80287C04 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void LeafSystem__DestroyCluster(void *arg0, void *arg1);
void LeafSystem__DestroyGroup(void *arg0, void *arg1);
void Mem__Delete(void *arg0);

void LeafSystem__Clear(void *arg0) {
    void *temp_r11;
    void *temp_r4;

    while ((temp_r4 = M2C_FIELD(arg0, void **, 596)) != NULL) {
        LeafSystem__DestroyCluster(arg0, temp_r4);
    }
    while ((temp_r4 = M2C_FIELD(arg0, void **, 568)) != NULL) {
        LeafSystem__DestroyGroup(arg0, temp_r4);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 564) = 0;
    if (temp_r11 != NULL) {
        do {
            if (M2C_FIELD(arg0, void **, 0) == temp_r11) {
                M2C_FIELD(arg0, void **, 0) = M2C_FIELD(temp_r11, void **, 128);
            } else {
                void *temp_r9 = M2C_FIELD(temp_r11, void **, 124);
                M2C_FIELD(temp_r9, void **, 128) = M2C_FIELD(temp_r11, void **, 128);
            }
            if (M2C_FIELD(arg0, void **, 4) == temp_r11) {
                M2C_FIELD(arg0, void **, 4) = M2C_FIELD(temp_r11, void **, 124);
            } else {
                void *temp_r9_2 = M2C_FIELD(temp_r11, void **, 128);
                M2C_FIELD(temp_r9_2, void **, 124) = M2C_FIELD(temp_r11, void **, 124);
            }
            M2C_FIELD(temp_r11, s32 *, 124) = 0;
            M2C_FIELD(temp_r11, s32 *, 128) = 0;
            M2C_FIELD(arg0, s32 *, 12) = M2C_FIELD(arg0, s32 *, 12) - 1;
            Mem__Delete(temp_r11);
            temp_r11 = M2C_FIELD(arg0, void **, 0);
        } while (temp_r11 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 16) = 0;
}

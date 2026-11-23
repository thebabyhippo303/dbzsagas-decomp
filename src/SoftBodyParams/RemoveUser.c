/* SoftBodyParams__RemoveUser @ 0x80211BB8 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void SoftBodyParams__RemoveUser(void *arg0, s32 arg1) {
    void *temp_r9;
    void *temp_r9_2;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 8);
    if (var_r3 != NULL) {
loop_1:
        if ((s32) M2C_FIELD(var_r3, s32 *, 0) == arg1) {
            if (var_r3 == (void *) M2C_FIELD(arg0, void **, 8)) {
                M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(var_r3, void **, 8);
            }
            temp_r9 = M2C_FIELD(var_r3, void **, 4);
            if (temp_r9 != NULL) {
                M2C_FIELD(temp_r9, void **, 8) = (void *) M2C_FIELD(var_r3, void **, 8);
            }
            temp_r9_2 = M2C_FIELD(var_r3, void **, 8);
            if (temp_r9_2 != NULL) {
                M2C_FIELD(temp_r9_2, void **, 4) = (void *) M2C_FIELD(var_r3, void **, 4);
            }
            Mem__Delete(var_r3);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
            return;
        }
        var_r3 = M2C_FIELD(var_r3, void **, 8);
        if (var_r3 == NULL) {

        } else {
            goto loop_1;
        }
    }
}

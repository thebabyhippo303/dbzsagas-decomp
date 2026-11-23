/* ProtagonistGroup__FindSmallestSubgroup @ 0x801EA10C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ActorList__GetCount(void **);
void **ProtagonistGroup__FindSmallestSubgroup(void *arg0) {
    s32 var_r30;
    u32 temp_r3;
    void **var_r29;
    void **var_r31;
    void **var_r3;

    var_r29 = M2C_FIELD(arg0, void ***, 0x3C);
    var_r3 = NULL;
    if (var_r29 != NULL) {
        var_r30 = ActorList__GetCount(var_r29);
        var_r31 = M2C_FIELD(var_r29, void ***, 0x10);
        if (var_r31 != NULL) {
            do {
                temp_r3 = ActorList__GetCount(var_r31);
                if (temp_r3 < (u32) var_r30) {
                    var_r30 = (s32) temp_r3;
                    var_r29 = var_r31;
                }
                var_r31 = M2C_FIELD(var_r31, void ***, 0x10);
            } while (var_r31 != NULL);
        }
        var_r3 = var_r29;
    }
    return var_r3;
}

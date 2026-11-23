/* LeafSystem__DetachInstances @ 0x802882EC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SceneMgr__DetachInstance(void *, int);
void LeafSystem__DetachInstances(void *arg0, void *arg1, int arg2) {
    void *var_r30;
    int var_r31;
    if (arg2 > 0) {
        var_r30 = arg1;
        var_r31 = arg2;
        do {
            SceneMgr__DetachInstance(var_r30, 0);
            var_r30 = (char *)var_r30 + 448;
            var_r31--;
        } while (var_r31 != 0);
    }
}
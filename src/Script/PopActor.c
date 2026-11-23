/* Script__PopActor @ 0x802AC1E8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Script__GetOwnerActor(void *);
void * Script__PopInt(void *, void *);
void *Script__PopActor(void *arg0, void *arg1, s32 arg2) {
    void *var_r3;

    var_r3 = Script__PopInt(arg0, arg1);
    if ((arg2 != 0) && (var_r3 == NULL)) {
        return NULL;
    }
    if (var_r3 == (void *)-1) {
        var_r3 = Script__GetOwnerActor(arg0);
    }
    return var_r3;
}

/* Terrain__DebugDraw @ 0x801D452C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void fn_801B061C(void *);
void fn_801C1AE0(void *);
void fn_801CB0C4(void *);

void Terrain__DebugDraw(void *self_, void *arg1) {
    s32 temp_r0;
    void *obj;
    void *var_r31;

    var_r31 = M2C_FIELD(arg1, void **, 0x28);
    if (var_r31 != NULL) {
        do {
            obj = M2C_FIELD(var_r31, void **, 0x28);
            temp_r0 = M2C_FIELD(obj, s32 *, 0x20);
            switch (temp_r0) {                      /* irregular */
            case 0:
                fn_801C1AE0(obj);
                break;
            case 2:
                fn_801CB0C4(obj);
                break;
            case 5:
                fn_801B061C(obj);
                break;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
}

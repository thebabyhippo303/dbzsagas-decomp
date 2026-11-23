/* WorldLighting__SetLight @ 0x8028FFA4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    int a;
    int b;
    int c;
} Triple;
typedef struct {
    int unk0;
    int unk1;
    Triple t1;
    Triple t2;
    float f0;
    float f1;
} LightEntry;
typedef struct {
    char pad[0x48];
    LightEntry lights[5];
} WorldLighting;
void WorldLighting__SetLight(WorldLighting *self, unsigned int index, int a, int b, Triple *p1, Triple *p2, float f1, float f2) {
    if (index <= 4) {
        int off = index * 40;
        unsigned int base = (unsigned int)self;
        unsigned int e;
        self->lights[index].unk0 = a;
        self->lights[index].unk1 = b;
        e = off + base;
        *(Triple *)(e + 80) = *p1;
        *(Triple *)(e + 92) = *p2;
        self->lights[index].f0 = f1;
        self->lights[index].f1 = f2;
    }
}

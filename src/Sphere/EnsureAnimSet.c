/* Sphere__EnsureAnimSet @ 0x8026D5D0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void *Mem__New(u32);
void *SphereAnimSet__Construct(void *);
void SphereAnimSet__BindToNode(void *, void *);
void SphereAnimSet__SetLevel(void *, s32);
void SphereAnimSet__ClearAll(void *);

void Sphere__EnsureAnimSet(void *arg0, s32 arg1) {
    void *set;

    if (*(void **)((char *)arg0 + 0x164) == NULL) {
        set = SphereAnimSet__Construct(Mem__New(0xB48));
        *(void **)((char *)arg0 + 0x164) = set;
        if (set == NULL) {
            return;
        }
        SphereAnimSet__BindToNode(set, arg0);
        SphereAnimSet__SetLevel(*(void **)((char *)arg0 + 0x164), arg1);
    }
    if (*(void **)((char *)arg0 + 0x164) != NULL) {
        SphereAnimSet__ClearAll(*(void **)((char *)arg0 + 0x164));
    }
}

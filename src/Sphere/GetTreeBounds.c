/* Sphere__GetTreeBounds @ 0x8026E170 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct SphereVt {
    char pad[0x260];
    short adjustA; short padA;
    void (*fnA)(void *);
    short adjustB; short padB;
    void (*fnB)(void *, f32 *, f32 *, f32 *, f32 *);
} SphereVt;
typedef struct Sphere {
    struct Sphere *parent;
    struct Sphere *firstChild;
    struct Sphere *nextSibling;
    struct Sphere *prevSibling;
    char pad2[0x19C - 0x10];
    SphereVt *vtable;
} Sphere;
void Sphere__GetTreeBounds(Sphere *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    Sphere *child;

    arg0->vtable->fnA((char *)arg0 + arg0->vtable->adjustA);
    child = arg0->firstChild;
    if (child != NULL) {
        do {
            child->vtable->fnB((char *)child + child->vtable->adjustB, &sp8, &spC, &sp10, &sp14);
            if (!(*arg1 <= sp8)) {
                *arg1 = sp8;
            }
            if (!(*arg2 <= spC)) {
                *arg2 = spC;
            }
            if (!(*arg3 >= sp10)) {
                *arg3 = sp10;
            }
            if (!(*arg4 >= sp14)) {
                *arg4 = sp14;
            }
            child = child->nextSibling;
        } while (child != NULL);
    }
}

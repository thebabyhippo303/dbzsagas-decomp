/* CollideStack__ReleaseMarker @ 0x801D3B3C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: CollideStack__ReleaseMarker @ 0x801D3B3C (0x4C). ProDG -O2. */
typedef int s32;
typedef struct {
    char pad[0x18];
    s32 count;
} MarkerOwner;
typedef struct {
    MarkerOwner *owner;
    char pad[8];
    s32 marker;
} CollideStack;

void CollideStack__ReleaseMarker(CollideStack *self) {
    MarkerOwner *owner = self->owner;
    s32 next;

    if (owner != NULL) {
        if ((self->marker != 0) && (self->marker == owner->count)) {
            next = (self->marker & 0x7FFFFFFF) + 1;
            owner->count = next;
            if (next < 0) {
                owner->count = 0;
            }
        }
    }
    self->marker = 0;
}

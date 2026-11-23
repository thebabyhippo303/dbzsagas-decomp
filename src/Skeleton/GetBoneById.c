/* Skeleton__GetBoneById @ 0x8023C360 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Skeleton__GetBoneById @ 0x8023C360 (0x2C). ProDG -O2. */
typedef struct {
    char pad[0xE0];
} Bone;

typedef struct {
    unsigned short count;
    char pad02[0x0E];
    Bone *bones;
} Skeleton;

Bone *Skeleton__GetBoneById(Skeleton *skeleton, int id) {
    if (skeleton == 0)
        return 0;
    if ((unsigned int)id < skeleton->count)
        return skeleton->bones + id;
    return 0;
}

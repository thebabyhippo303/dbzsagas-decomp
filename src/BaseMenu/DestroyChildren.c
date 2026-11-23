/* BaseMenu__DestroyChildren @ 0x80262B98 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: BaseMenu__DestroyChildren @ 0x80262B98 (0x58). ProDG -O2. */
typedef int s32;
typedef short s16;
typedef struct {
    char pad[0x18];
    s16 adjust;
    char pad2[2];
    void (*destroy)(void *obj, s32 arg);
} ChildVT;
typedef struct {
    char pad[0x10];
    ChildVT *vt;
} ChildObj;
typedef struct {
    char pad[4];
    ChildObj *child;
} BaseMenu;

void BaseMenu__DestroyChildren(BaseMenu *self) {
    ChildObj *child;
    ChildVT *vt;

    while (self->child != NULL) {
        child = self->child;
        vt = child->vt;
        vt->destroy((char *)child + vt->adjust, 3);
    }
}

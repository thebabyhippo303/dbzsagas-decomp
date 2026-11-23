/* Keyboard__DestroyImpl @ 0x801D8FA0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x1F8];
    void *vtable;
} Keyboard_;
extern char lbl_80343310[];
void Mem__Delete(void *object);

void Keyboard__DestroyImpl(Keyboard_ *self, unsigned int flags) {
    self->vtable = lbl_80343310;
    if (flags & 1) {
        Mem__Delete(self);
    }
}

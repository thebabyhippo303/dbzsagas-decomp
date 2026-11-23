/* AvatarControls__SetActionBinding @ 0x80126080 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: AvatarControls__SetActionBinding @ 0x80126080 (0x28). ProDG -O2. */
typedef struct AvatarControlsBindings {
    char pad[0x60];
    int action_binding[17];
    int action_latch[17];
} AvatarControlsBindings;

void AvatarControls__SetActionBinding(AvatarControlsBindings *self, int action,
                                      int binding, int latch) {
    if (action == 9 && latch != 0)
        return;
    self->action_binding[action] = binding;
    self->action_latch[action] = latch;
}

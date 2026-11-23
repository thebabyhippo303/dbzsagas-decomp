/* UiAnimator__ClearKeys @ 0x8026055C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: UiAnimator__ClearKeys @ 0x8026055C (0xA8). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32;
#define NULL 0
void UiKeyframe__Destroy(void *, s32);
extern f32 lbl_80349B54 __attribute__((section(".data")));
typedef struct Vt { char pad[0xD8]; s16 adjust; char pad2[2]; void (*fn)(void *); } Vt;
typedef struct KeyNode { char pad[4]; struct KeyNode *next; } KeyNode;
typedef struct UiAnimator { f32 f0, f4, f8, f12; u8 b16; char p17; u8 b18, b19; u32 w20, w24; char g28[4]; KeyNode *keys; u32 w36, w40; Vt *vt44; } UiAnimator;
void UiAnimator__ClearKeys(UiAnimator *self) {
    Vt *vt = self->vt44;
    vt->fn((char *)self + vt->adjust);
    if (self->keys != 0) {
        while (self->keys->next != 0) { UiKeyframe__Destroy(self->keys->next, 3); }
        if (self->keys != 0) { UiKeyframe__Destroy(self->keys, 3); }
        self->keys = 0;
        self->w20 = 0;
        self->w24 = 0;
    }
    self->f4 = lbl_80349B54;
    self->f12 = lbl_80349B54;
    self->f8 = lbl_80349B54;
}

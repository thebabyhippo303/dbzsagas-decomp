/* Audio__FindSoundGroup @ 0x80191C80 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Vec { char *data; volatile s32 count; } Vec;
typedef struct Audio { char pad[0x188]; Vec * volatile groups; char pad2[4]; Vec * volatile groups2; } Audio;
s32 SoundGroup__GetName(s32);
int String__CompareIgnoreCase(const char *, const char *);
s32 fn_8019D398(s32);
s32 fn_8019D39C(s32);

#define AT(vv, i, p) do { Vec *v_ = (vv); s32 r_ = (i); s32 c_; if ((i) < 0) r_ = v_->count - 1; c_ = v_->count; if (r_ >= c_ || c_ == 0) p = 0; else p = (s32 *)(v_->data + r_ * 4); } while (0)

s32 Audio__FindSoundGroup(Audio *self, char *name) {
    s32 i;
    s32 *p;
    s32 *q;
    for (i = 0; i < self->groups->count; i++) {
        AT(self->groups, i, p);
        if (String__CompareIgnoreCase((char *)SoundGroup__GetName(*p), name) == 0) {
            AT(self->groups, i, q);
            return *q;
        }
    }
    for (i = 0; i < self->groups2->count; i++) {
        AT(self->groups2, i, p);
        if (String__CompareIgnoreCase((char *)fn_8019D398(*p), name) == 0) {
            AT(self->groups2, i, q);
            return fn_8019D39C(*q);
        }
    }
    return 0;
}

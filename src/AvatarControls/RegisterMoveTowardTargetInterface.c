/* AvatarControls__RegisterMoveTowardTargetInterface @ 0x80089C6C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[8]; short this_adjust; char pad2[2]; void (*fn)(void *self, void *arg); } V;
typedef struct { char pad[4]; V *vtable; void *owner; int a; int b; } I;
typedef struct { char pad[0x7D4]; I *iface; } In;
typedef struct { In *inner; } C;
typedef struct { int a; int b; } P;
extern const P lbl_8031F534 __attribute__((section(".rodata")));
typedef struct { char pad[12]; int flag; char tail[8]; } A;
void AvatarControls__RegisterMoveTowardTargetInterface(C *self) {
    I *iface = (I *)((char *)self + 0x88);
    P pair = lbl_8031F534;
    A arg;
    I *loaded;
    V *vt;
    iface->owner = self;
    iface->b = pair.b;
    iface->a = pair.a;
    self->inner->iface = iface;
    arg.flag = 0;
    loaded = self->inner->iface;
    vt = loaded->vtable;
    vt->fn((char *)loaded + vt->this_adjust, &arg);
}

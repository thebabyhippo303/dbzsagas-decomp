/* Cast__Clear @ 0x801F5BB4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK ProtagonistGroup__Clear(s32);
M2C_UNK ActorList__Clear(s32);
void Cast__Clear(s32 arg0) {
    ProtagonistGroup__Clear(arg0 + 0x80);
    ActorList__Clear(arg0 + 0x5C);
    ActorList__Clear(arg0 + 0x50);
    ActorList__Clear(arg0 + 0x44);
    ActorList__Clear(arg0 + 0x38);
    ActorList__Clear(arg0 + 0x2C);
    ActorList__Clear(arg0 + 0x20);
    ActorList__Clear(arg0 + 0x14);
}

/* TriggerBox__GetEnterEventId @ 0x800FCBF8 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct { char pad[0x508]; s32 index; } TriggerBox;
typedef struct { char pad[20]; s32 eventId; char rest[8]; } EnterEventRow;
extern EnterEventRow lbl_8036B5BC[];
s32 TriggerBox__GetEnterEventId(TriggerBox *self) { return lbl_8036B5BC[self->index].eventId; }

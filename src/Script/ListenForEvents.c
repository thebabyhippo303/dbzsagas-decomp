/* Script__ListenForEvents @ 0x8002B094 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Script__ListenForEvents @ 0x8002B094 (0x40). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *currentActor;
} ScriptContext;

extern char lbl_803B1DDC[];
extern void EventDispatcher__Subscribe(void *, void *, s32);

void Script__ListenForEvents(ScriptContext *self, void *context) {
    void *actor = self->currentActor;
    void *listener = 0;

    if (actor != 0)
        listener = (char *)actor + 0x19C;
    EventDispatcher__Subscribe(lbl_803B1DDC, listener, 0x20000);
}

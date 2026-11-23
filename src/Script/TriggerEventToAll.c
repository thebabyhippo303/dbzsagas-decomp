/* Script__TriggerEventToAll @ 0x8002B03C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Script__TriggerEventToAll @ 0x8002B03C (0x58). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern char lbl_803B1DDC[];
extern void EventDispatcher__Broadcast(void *registry, int event, int value, void *actor);

void Script__TriggerEventToAll(void *script, void *context) {
    int event = Script__PopInt(script, context);
    int value = Script__PopInt(script, context);
    void *actor = *(void **)((char *)script + 0xC8);

    EventDispatcher__Broadcast(lbl_803B1DDC, event, value, actor);
}

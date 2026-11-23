/* EngineGlobals__ConstructOrDestroyStatics @ 0x8025C064 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void EventNameRegistry__Deactivate(void *);
void EventDispatcher__Construct(void *);
void LoadContext__Construct(void *);
void Rand__Construct(void *, s32);
void LoadContext__Destroy(void *, s32);
void EventDispatcher__Destroy(void *, s32);
extern char lbl_803B1DC4[];
extern char lbl_803B1DDC[];
extern char lbl_803B1E84[];
extern char lbl_803DD634[] __attribute__((section(".sdata")));

void EngineGlobals__ConstructOrDestroyStatics(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            EventNameRegistry__Deactivate(lbl_803B1DC4);
            EventDispatcher__Construct(lbl_803B1DDC);
            LoadContext__Construct(lbl_803B1E84);
            Rand__Construct(lbl_803DD634, -1);
            return;
        }
        LoadContext__Destroy(lbl_803B1E84, 2);
        EventDispatcher__Destroy(lbl_803B1DDC, 2);
    }
}

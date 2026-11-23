/* Script__GetActorFromInstanceNameIfExists @ 0x802B17C8 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char *Script__PopString(void *, void *, int *);
void *Cast__FindActorByInstanceName(char *);
void Mem__DeleteArray(void *);
void Script__PushInt(void *, void *, int);

void Script__GetActorFromInstanceNameIfExists(void *script, void *context) {
    int owned;
    int exists = 0;
    char *name;
    void *actor;

    name = Script__PopString(script, context, &owned);
    actor = 0;
    if (name != 0) {
        actor = Cast__FindActorByInstanceName(name);
    }
    if (actor != 0) {
        exists = 1;
    }
    if (owned != 0) {
        if (name != 0) {
            Mem__DeleteArray(name);
        }
    }
    Script__PushInt(script, context, (int)actor);
    Script__PushInt(script, context, exists);
}

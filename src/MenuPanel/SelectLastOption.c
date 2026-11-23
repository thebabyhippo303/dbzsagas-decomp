/* MenuPanel__SelectLastOption @ 0x8026865C (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef int s32; typedef short s16;
s32 EzNode__GetFirstChild(void *);
void MenuPanel__SelectLastOption(void *arg0) {
    char *base = (char *)arg0 + 0x10000;
    s32 t;
    void *objN;
    void *vtN;
    void *objC;
    void *vtV;
    void *vtF;
    *(s32 *)(base - 20996) = *(s32 *)(base - 21000);
    if (*(s32 *)(base - 21000) != 0) {
        goto check;
    }
    t = EzNode__GetFirstChild(base - 21020);
    goto store;
loop:
    objN = *(void **)(base - 21000);
    vtN = *(void **)((char *)objN + 16);
    t = ((s32 (*)(void *))*(void **)((char *)vtN + 84))((char *)objN + *(s16 *)((char *)vtN + 80));
store:
    *(s32 *)(base - 21000) = t;
check:
    objC = *(void **)(base - 21000);
    if (objC == 0) {
        goto tail;
    }
    vtV = *(void **)((char *)objC + 16);
    if (((s32 (*)(void *))*(void **)((char *)vtV + 84))((char *)objC + *(s16 *)((char *)vtV + 80)) != 0) {
        goto loop;
    }
tail:
    vtF = *(void **)((char *)arg0 + 412);
    ((void (*)(void *))*(void **)((char *)vtF + 1332))((char *)arg0 + *(s16 *)((char *)vtF + 1328));
}

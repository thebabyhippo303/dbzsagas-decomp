/* Fmv__PlayFile @ 0x801D92FC (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Fmv__BuildPath(char *, char *);
void *MemHeap__Alloc(unsigned int, unsigned int);
void memFree(void *);
char *strcpy(char *, const char *);
s32 OSCreateThread(void *, void *, s32, void *, u32, s32, s32);
void OSResumeThread(void *);
s32 OSIsThreadTerminated(void *);
s32 OSJoinThread(void *, void *);
void fn_8024E77C(s32, s32);
void VIWaitForRetrace(void);
void Fmv__PlaybackThreadMain(void);
extern char lbl_803A3FA8[] __attribute__((section(".data")));
extern s32 lbl_803DD520;
extern s32 lbl_803DD524;
extern s32 lbl_803DD528;
extern u16 lbl_803DD534;

s32 Fmv__PlayFile(void *arg0, char *name, s32 *outErr, s32 cb1, s32 cb2) {
    register void *stack;
    u8 path[128];
    char thread[792];
    s32 joinResult;

    *outErr = 0;
    Fmv__BuildPath(name, path);
    strcpy(lbl_803A3FA8, path);
    lbl_803DD520 = cb1;
    lbl_803DD524 = cb2;
    lbl_803DD528 = 0;
    stack = MemHeap__Alloc(0x8000U, 8U);
    if (OSCreateThread(thread, (void *) Fmv__PlaybackThreadMain, 0, (char *) stack + 0x8000, 0x8000U, 20, 0) == 0) {
        memFree(stack);
        *outErr = 1;
        return 0;
    }
    OSResumeThread(thread);
loop_3:
    if (OSIsThreadTerminated(thread) == 0) goto wait;
    OSJoinThread(thread, &joinResult);
    memFree(stack);
    if (lbl_803DD534 != 0) {
        fn_8024E77C(lbl_803DD534, 0);
    }
    lbl_803DD534 = 0;
    return 1;
wait:
    VIWaitForRetrace();
    goto loop_3;
}

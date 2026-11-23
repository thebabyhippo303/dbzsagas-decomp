/* Platform__Initialize @ 0x801D6B40 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 ARGetBaseAddress(void);
u32 Mem__NewArray(u32);
void Assert_SetCallback(void *);
s32 OSCreateThread(void *, void *, s32, void *, u32, s32, s32);
void OSResumeThread(void *);
void OSInit(void);
void DVDInit(void);
void DVDSetAutoFatalMessaging(s32);
void VIInit(void);
void PADInit(void);
void CARDInit(void);
void ARInit(s32, s32);
s32 VMInit(s32, s32, s32);
void *OSGetCurrentThread(void);
void OSInitMessageQueue(void *, void *, s32);
extern u8 Platform__MonitorThreadMain[];
extern u8 Assert_Prompt[];
void Platform__Initialize(void *arg0) {
    s32 arBase;
    u32 stk;
    void *t28;
    u8 *a = (u8 *)arg0;
    OSInit();
    t28 = a + 0x10;
    DVDInit();
    DVDSetAutoFatalMessaging(1);
    VIInit();
    PADInit();
    CARDInit();
    ARInit(0, 0);
    arBase = ARGetBaseAddress();
    VMInit(0x180000, arBase, 0xC00000);
    *(s32 *)(a + 4) = arBase + 0xC00000;
    *(void **)(a + 0x328) = OSGetCurrentThread();
    stk = Mem__NewArray(0x1000);
    *(u32 *)(a + 0xC) = stk;
    OSCreateThread(t28, Platform__MonitorThreadMain, arg0, (void *)(stk + 0x1000), 0x1000, 1, 1);
    OSInitMessageQueue(a + 0x35C, a + 0x37C, 2);
    OSResumeThread(t28);
    Assert_SetCallback(Assert_Prompt);
}

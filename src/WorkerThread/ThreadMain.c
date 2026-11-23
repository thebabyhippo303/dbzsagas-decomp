/* WorkerThread__ThreadMain @ 0x80306BEC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void OSSetThreadSpecific(s32, void *);
void WorkerThread__SignalFinished(void *);
s32 WorkerThread__ThreadMain(void *arg0) {
    void *vt;
    OSSetThreadSpecific(0, arg0);
    vt = M2C_FIELD(arg0, void **, 33612);
    M2C_FIELD(vt, void (**)(void *), 12)(arg0 + M2C_FIELD(vt, s16 *, 8));
    WorkerThread__SignalFinished(arg0);
    return 0;
}

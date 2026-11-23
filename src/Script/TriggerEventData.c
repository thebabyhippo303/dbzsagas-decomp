/* Script__TriggerEventData @ 0x8002AD4C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Script__TriggerEventData @ 0x8002AD4C (0xA4). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Debug__FormatMessage(char *fmt, ...);
extern void EventDispatcher__Send(void *table, int event, int data, void *actor, int zero);
extern char lbl_8031159C[];
extern char lbl_803115CC[];
extern char lbl_803B1DDC[];

typedef struct {
    char pad[8488];
    int logEvents;
} GameLog;

extern GameLog *lbl_803DC3C0;

typedef struct {
    char pad[200];
    void *actor;
    char pad2[4];
    char name[1];
} ScriptHost;

void Script__TriggerEventData(void *script, void *context) {
    int event = Script__PopInt(script, context);
    int data = Script__PopInt(script, context);
    ScriptHost *host = (ScriptHost *)script;

    if (lbl_803DC3C0->logEvents != 0) {
        Debug__FormatMessage(lbl_8031159C, host->name, script, event, event & 0xFFFF);
        Debug__FormatMessage(lbl_803115CC, data);
    }
    EventDispatcher__Send(lbl_803B1DDC, event, data, host->actor, 0);
}

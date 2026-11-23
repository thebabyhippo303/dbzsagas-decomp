/* Avatar__IsVictimBlocking @ 0x80032A94 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Script__PopInt(void *script, void *context);
int Avatar__GetAnimScriptVarInt(void *actor, void *name, int flag);
void Script__PushInt(void *script, void *context, int value);
extern M2C_UNK lbl_8031180C __attribute__((section(".data")));
extern f32 lbl_80311818 __attribute__((section(".data")));

void Avatar__IsVictimBlocking(void *arg0, void *arg1) {
    s32 result;
    s32 holding;
    void *actor;

    actor = M2C_FIELD(Script__PopInt(arg0, arg1), void **, 0x2B8);
    result = 0;
    if (actor != NULL) {
        holding = 0;
        if (!(M2C_FIELD(actor, f32 *, 0x288) > lbl_80311818)) {
            if (M2C_FIELD(actor, s32 *, 0x90) != 0) {
                holding = 1;
            }
        }
        if (holding == 0) {
            result = Avatar__GetAnimScriptVarInt(actor, &lbl_8031180C, 1) != 0;
        }
    }
    Script__PushInt(arg0, arg1, result);
}

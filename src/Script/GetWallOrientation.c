/* Script__GetWallOrientation @ 0x800B13E0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef unsigned char u8;
typedef float f32;

typedef struct {
    u32 unused;
    f32 value;
    u32 pad[2];
} WallOrientationResult;

void fn_801DCE74(WallOrientationResult *, void *, u8);
void fn_801DCED0(WallOrientationResult *, void *, u8);
void Avatar__PushScriptInt(void *, int, void *);

void Script__GetWallOrientation(void **script, void *context) {
    WallOrientationResult first;
    WallOrientationResult second;
    f32 firstValue;
    void *actor;
    actor = *script;
    fn_801DCE74(&first, actor, *((u8 *)actor + 0x19DC));
    firstValue = first.value;
    actor = *script;
    fn_801DCED0(&second, actor, *((u8 *)actor + 0x19DC));
    if (firstValue <= second.value) goto push_zero;
    Avatar__PushScriptInt(*script, 1, context);
    return;
push_zero:
    Avatar__PushScriptInt(*script, 0, context);
}

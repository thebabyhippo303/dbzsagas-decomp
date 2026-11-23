/* MenuInput__TryAssignControllerToPlayer @ 0x8004D0C4 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16;
s32 MenuInput__IsEnabled(void);
void ControllerMap__AssignPort(void *, s32, s32);
char * MissionStats__GetPlayerRecord(s32);
void MissionStats__SetPlayerRecordAvatar(void *, void *);
s32 ControllerMap__IsPortAssigned(void *, u32);
void * ControllerMap__GetController(void *, u32);
extern void *lbl_803DCC74;
typedef struct VT { char pad[0x20]; s16 adj; s16 pad2; u32 (*fn)(void *); } VT;
typedef struct Obj { char pad[0x10]; VT *vt; } Obj;
typedef struct Pad { char pad[0x1F8]; VT *vt; } Pad;
#define F(e, t, o) (*(t)((char *)(e) + (o)))

s32 MenuInput__TryAssignControllerToPlayer(s32 arg0) {
    u32 i;
    Pad *c;
    Obj *m;
    s32 f;
    s32 f2;
    s32 f3;

    if (MenuInput__IsEnabled() != 0) {
        goto start;
    }
    goto fail;
found:
    ControllerMap__AssignPort(lbl_803DCC74, arg0, i);
    MissionStats__SetPlayerRecordAvatar(MissionStats__GetPlayerRecord(arg0), c);
    F(c, s32 *, 0xE0) = 1;
    return 1;
start:
    for (i = 0; ; i++) {
        m = (Obj *)lbl_803DCC74;
        if (i >= m->vt->fn((char *)m + m->vt->adj)) {
            break;
        }
        if (ControllerMap__IsPortAssigned(lbl_803DCC74, i) != 0) continue;
        c = ControllerMap__GetController(lbl_803DCC74, i);
        if (c == 0) continue;
        if (c->vt->fn((char *)c + c->vt->adj) == 0) continue;
        f = 0;
        if (F(c, s32 *, 0x68) == 0) {
            f = ((F(c, s32 *, 0x6C) ^ 1) == 0);
        }
        if (f == 0) continue;
        f2 = 0;
        if (F(c, s32 *, 0x30) == 0) {
            f2 = ((F(c, s32 *, 0x34) ^ 1) == 0);
        }
        if (f2 != 0) continue;
        f3 = 0;
        if (F(c, s32 *, 0x40) == 0) {
            f3 = ((F(c, s32 *, 0x44) ^ 1) == 0);
        }
        if (f3 == 0) goto found;
    }
fail:
    return 0;
}

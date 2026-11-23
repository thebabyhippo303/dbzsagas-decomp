/* AI__UpdateCellJuniorTimer @ 0x80070044 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

extern char lbl_8031EDC4[] __attribute__((section(".data")));
extern f32 lbl_8031EDD4 __attribute__((section(".data")));
extern f32 lbl_8031EDD8 __attribute__((section(".data")));
extern f32 lbl_8031EDDC __attribute__((section(".data")));
extern struct {
    char pad[0x20];
    f32 scale;
} lbl_803A35A0 __attribute__((section(".data")));
extern s32 lbl_803DD180;
extern s32 lbl_803DD1B0;

extern void AI__SetState(void *self, int state);
extern void Actor__ToNonProtagonistCastImpl(void *actor);
extern void Actor__ToProtagonistCastImpl(void *actor);
extern float Script__GetFloatVariable(void *script, int id, char *name);
extern s32 AI__HasPrimaryTimerElapsed(void *self, f32 seconds);

void AI__UpdateCellJuniorTimer(void *arg0) {
    s32 state;
    char *pool;

    state = *(s32 *)((char *)arg0 + 0x7C);
    switch (state) {
    case 0:
        AI__SetState(arg0, 1);
        *(volatile s32 *)((char *)arg0 + 0x51C) = 1;
        *(volatile s32 *)((char *)arg0 + 0x380) = 45;
        *(volatile s32 *)((char *)arg0 + 0x4BC) = state;
        *(volatile s32 *)((char *)arg0 + 0x530) = state;
        *(volatile s32 *)((char *)arg0 + 0x490) = 1;
        return;
    case 1:
        *(f32 *)((char *)*(void **)((char *)arg0 + 0x390) + 0x2B4) = lbl_8031EDD4;
        *(s32 *)((char *)*(void **)((char *)arg0 + 0x390) + 0x14) = lbl_803DD180;
        Actor__ToNonProtagonistCastImpl(*(void **)((char *)arg0 + 0x390));
        *(s32 *)((char *)arg0 + 0x380) = 44;
        pool = (char *)&lbl_803A35A0;
        *(f32 *)((char *)arg0 + 0xDC) = *(f32 *)(pool + 0x20);
        *(s32 *)((char *)arg0 + 0x41C) = 67;
        AI__SetState(arg0, 2);
        *(f32 *)((char *)arg0 + 0xDC) = *(f32 *)(pool + 0x20);
        *(f32 *)((char *)arg0 + 0x534) =
            Script__GetFloatVariable(
                *(void **)((char *)*(void **)((char *)arg0 + 0x390) + 0x84), 1, lbl_8031EDC4) -
            lbl_8031EDD8;
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, *(f32 *)((char *)arg0 + 0x534)) != 0) {
            state = *(s32 *)((char *)arg0 + 0x554);
            if (state == 0) {
                AI__SetState(arg0, 3);
                *(s32 *)((char *)arg0 + 0x380) = state;
                Actor__ToProtagonistCastImpl(*(void **)((char *)arg0 + 0x390));
                *(volatile s32 *)((char *)arg0 + 0x51C) = state;
                *(volatile s32 *)((char *)arg0 + 0x490) = state;
                {
                    void *actor = *(void **)((char *)arg0 + 0x390);
                    f32 scale = lbl_8031EDDC;
                    *(s32 *)((char *)actor + 0x14) = lbl_803DD1B0;
                    *(f32 *)((char *)*(void **)((char *)arg0 + 0x390) + 0x2B4) = scale;
                }
            }
        }
        return;
    }
}

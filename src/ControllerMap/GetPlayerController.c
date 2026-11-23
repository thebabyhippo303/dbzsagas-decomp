/* ControllerMap__GetPlayerController @ 0x801D6674 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 ControllerMap__FindFreeConnectedController(void *);
s32 ControllerMap__IsPortAssigned(void *, u32);
s32 ControllerMap__GetFallbackController(void *);   /* extern */

typedef struct {
    s32 *ctrls;
    s32 *slotMap;
    u32 count;
} ControllerMap;

s32 ControllerMap__GetPlayerController(ControllerMap *self, u32 idx) {
    s32 v;
    s32 r;
    u32 i;

    if (idx >= self->count) {
        return 0;
    }
    v = self->slotMap[idx];
    if (v == -1) {
        r = ControllerMap__FindFreeConnectedController(self);
        if (r != 0) {
            return r;
        }
        for (i = 0; i < self->count; i++) {
            if (ControllerMap__IsPortAssigned(self, i) == 0) {
                return self->ctrls[i];
            }
        }
        return ControllerMap__GetFallbackController(self);
    }
    return self->ctrls[v];
}

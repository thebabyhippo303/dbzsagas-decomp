/* MissionUI__UpdateSummaryProgressCounters @ 0x80123CB8 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef short s16;
typedef float f32;

typedef struct {
    char pad0[0x3A0];
    s16 adjust;
    char pad1[2];
    s32 (*isActive)(void *);
} MissionVtbl;

typedef struct {
    char pad0[0x19C];
    MissionVtbl *vtbl;
    char pad1[0xB7AC - 0x1A0];
    s32 count;
    char pad2[0xB7BC - 0xB7B0];
    f32 progress;
} MissionUI;

void MissionUI__BuildProgressCounters(void *);
void fn_8026BF14(void *);
extern f32 lbl_80327490 __attribute__((section(".data")));
extern f32 lbl_803274A0 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x7498] = {1};

void MissionUI__UpdateSummaryProgressCounters(MissionUI *self) {
    f32 progress;

    if (self->vtbl->isActive((char *)self + self->vtbl->adjust) != 0) {
        progress = self->progress;
        if (((s32)progress > self->count) && !(progress <= lbl_80327490)) {
            MissionUI__BuildProgressCounters(self);
        }
        self->progress = (f32)lbl_803A35AC * lbl_803274A0 + self->progress;
    }
    fn_8026BF14(self);
}

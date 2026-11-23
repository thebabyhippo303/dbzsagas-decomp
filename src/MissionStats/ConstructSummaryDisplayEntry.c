/* MissionStats__ConstructSummaryDisplayEntry @ 0x80122B94 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern void MissionProgress__ConstructListener(void *self, s32 arg3, s32 arg4, s32 arg5);
extern void MissionStats__BuildSummaryEntryWidgets(void *self, s32 arg4, s32 arg2);
extern f32 lbl_8032743C __attribute__((section(".data")));
extern s32 lbl_8032D350 __attribute__((section(".data")));

typedef struct SummaryDisplayEntry {
    char pad[0x64];
    s32 *listener;
    s32 field68;
    s32 field6C;
    s32 field70;
    s32 field74;
    f32 field78;
} SummaryDisplayEntry;

SummaryDisplayEntry *MissionStats__ConstructSummaryDisplayEntry(SummaryDisplayEntry *self, s32 arg1, s32 arg2,
                                                               s32 arg3, s32 arg4, s32 arg5) {
    MissionProgress__ConstructListener(self, arg3, arg4, arg5);
    self->field68 = arg1;
    self->field6C = arg2;
    self->listener = &lbl_8032D350;
    self->field70 = 0;
    self->field74 = 0;
    self->field78 = lbl_8032743C;
    MissionStats__BuildSummaryEntryWidgets(self, arg4, arg2);
    return self;
}

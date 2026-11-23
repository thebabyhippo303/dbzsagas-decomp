/* Avatar__GetAction @ 0x80024BC8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef struct { s32 value; s32 mask; } Mask;
typedef struct { char pad[10]; s16 action; } ActionInfo;
typedef struct { char pad[0xF0]; ActionInfo *info; } ActionOwner;
typedef struct {
    s32 flags;
    char pad[0x84 - 4];
    ActionOwner *owner;
} ActionActor;

extern ActionActor *Script__PopInt(void *self, void *context);
extern void Script__PushInt(void *self, void *context, s32 value);
extern Mask lbl_803945E4 __attribute__((section(".data")));

void Avatar__GetAction(void *self, void *context) {
    ActionActor *actor = Script__PopInt(self, context);
    if ((actor->flags & lbl_803945E4.mask) != lbl_803945E4.value) {
        Script__PushInt(self, context, 256);
    } else {
        Script__PushInt(self, context, actor->owner->info->action);
    }
}

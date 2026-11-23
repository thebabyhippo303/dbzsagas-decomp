/* AI__UpdatePurpleSpiralSequence @ 0x8006A130 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void AI__ResolveTargetPose(void *, void *);
void AI__SetState(void *, int);
void Avatar__ClearPurpleSpiralEffects(void *);

typedef struct {
    char pad0[0x7C];
    s32 phase;
    char pad1[0x380 - 0x80];
    s32 seq;
    char pad2[0x3DC - 0x384];
    s32 flag;
} PurpleAI;

void AI__UpdatePurpleSpiralSequence(PurpleAI *self) {
    char pose[32];
    s32 v;

    AI__ResolveTargetPose(pose, self);
    switch (self->phase) {
    case 0:
        AI__SetState(self, 1);
        v = 45;
        goto store;
    case 1:
        if (self->flag != 0) {
            self->seq = 27;
        } else {
            self->seq = 45;
        }
        AI__SetState(self, 2);
        Avatar__ClearPurpleSpiralEffects(self);
        return;
    case 2:
        self->seq = 0;
        AI__SetState(self, 3);
        return;
    case 3:
        v = 0;
store:
        self->seq = v;
        return;
    }
}

/* AnimMixer__Update @ 0x8023F648 (size: 0x208, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

#define NULL 0

typedef struct AnimMixerSlot {
    s32 field0;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
    void *anim;
    void **link;
} AnimMixerSlot;

typedef struct AnimMixer {
    u32 count;
    void *pose;
    s32 field8;
    AnimMixerSlot *slots;
} AnimMixer;

void Profiler__BeginSection(s32);
void Profiler__EndSection(s32);
void AnimPose__ClearBoneChannels(void *);
void AnimPose__Update(void *);
void *AnimPose__Create(void *);
void AnimPose__Destroy(void *);
void AnimPose__AssignAnimation(void *, s32, s32, s32, void *, s32, s32, s32);
void *AnimMixer__NextSlotForPass(void *, s32, s32);
s32 Animation__Advance(void *, s32);
s32 Animation__IsFinished(void *);
u16 Animation__GetLength(void *);
void AnimMixer__RemoveAnimation(void *, void **, u16);

extern s32 lbl_803DCD54;

s32 AnimMixer__Update(AnimMixer *mixer, s32 arg1, s32 arg2) {
    s32 changed;
    void *slot;
    void *tempPose;
    s32 offset;
    AnimMixerSlot *entry;
    s32 flags;
    s32 advanced;

    Profiler__BeginSection(13);
    changed = 0;
    AnimPose__ClearBoneChannels(mixer->pose);
    lbl_803DCD54 += 1;
    while ((slot = AnimMixer__NextSlotForPass(mixer, lbl_803DCD54, 0)) != NULL) {
        AnimPose__AssignAnimation(mixer->pose, ((AnimMixerSlot *)slot)->field10,
            ((AnimMixerSlot *)slot)->field8, ((AnimMixerSlot *)slot)->fieldC,
            ((AnimMixerSlot *)slot)->anim, ((AnimMixerSlot *)slot)->field0, arg1, arg2);
        changed = 1;
    }
    tempPose = NULL;
    AnimPose__Update(mixer->pose);
    lbl_803DCD54 += 1;
    AnimPose__ClearBoneChannels(mixer->pose);
    while ((slot = AnimMixer__NextSlotForPass(mixer, lbl_803DCD54, 1)) != NULL) {
        if (tempPose == NULL) {
            tempPose = AnimPose__Create(*(void **)((char *)mixer->pose + 4));
        }
        AnimPose__AssignAnimation(tempPose, ((AnimMixerSlot *)slot)->field10,
            ((AnimMixerSlot *)slot)->field8, ((AnimMixerSlot *)slot)->fieldC,
            ((AnimMixerSlot *)slot)->anim, ((AnimMixerSlot *)slot)->field0, arg1, arg2);
        changed = 1;
    }
    if (tempPose != NULL) {
        AnimPose__Update(tempPose);
        AnimPose__Destroy(tempPose);
    }
    arg2 = 0;
    if ((u32)arg2 < mixer->count) {
        offset = 0;
        do {
            entry = (AnimMixerSlot *)((char *)mixer->slots + offset);
            if (entry->field8 != 0) {
                if ((entry->anim != NULL) && (((((s32 *)entry->anim)[2] ^ 1) & 1) != 0)) {
                    advanced = Animation__Advance(entry->anim, arg1);
                    if (Animation__IsFinished(entry->anim) != 0) {
                        flags = ((s32 *)entry->anim)[2];
                        if (flags & 0x40) {
                            if (advanced < 0) {
                                *(u16 *)entry->anim = Animation__GetLength(((void **)entry->anim)[3]);
                            } else {
                                *(u16 *)entry->anim = (u16)(*(u16 *)entry->anim - Animation__GetLength(((void **)entry->anim)[3]));
                            }
                        } else if (flags & 4) {
                            AnimMixer__RemoveAnimation(mixer, entry->link, 20);
                        }
                    }
                }
            }
            arg2 += 1;
            offset += 0x1C;
        } while ((u32)arg2 < mixer->count);
    }
    Profiler__EndSection(13);
    return changed;
}

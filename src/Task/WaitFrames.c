/* Task__WaitFrames @ 0x80184B30 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed int s32;
typedef unsigned int u32;
typedef struct Task {
    char pad0[0x18];
    s32 frames;
    char pad1[8];
    u32 flags;
    char pad2[4];
    char context[8];
} Task;
void Task__SwitchContext(void *, void *);
extern Task *lbl_803DD4B0;
extern char lbl_803DD4C8[8];

void Task__WaitFrames(s32 frames) {
    Task *task = lbl_803DD4B0;
    task->frames = frames;
    task->flags = (task->flags & 0x3FFFFFFF) | 0x80000000;
    Task__SwitchContext(lbl_803DD4C8, task->context);
}

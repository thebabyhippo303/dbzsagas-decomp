/* Task__WaitSeconds @ 0x80184B70 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef unsigned int u32;

typedef struct Task {
    char pad0[0x24];
    u32 flags;
    f32 wait;
    char context[4];
} Task;

void Task__SwitchContext(void *, void *);
extern Task *lbl_803DD4B0;
extern char lbl_803DD4C8[8];

void Task__WaitSeconds(f32 seconds) {
    lbl_803DD4B0->wait = seconds;
    lbl_803DD4B0->flags = (lbl_803DD4B0->flags & 0x3FFFFFFF) | 0x40000000;
    Task__SwitchContext(lbl_803DD4C8, lbl_803DD4B0->context);
}

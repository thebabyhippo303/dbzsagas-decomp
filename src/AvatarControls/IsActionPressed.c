/* AvatarControls__IsActionPressed @ 0x80099F20 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__IsActionPressed @ 0x80099F20 (0x50). ProDG -O2. */
typedef struct {
    int action;
    int flag;
} ActionProbe;

typedef struct {
    char pad[4];
    void *controls;
    int active;
} AvatarControls;

extern ActionProbe lbl_8031FB60[] __attribute__((section(".data")));
extern int AvatarControls__IsActionPressedImpl(void *controls, int action, int flag);

int AvatarControls__IsActionPressed(AvatarControls *self, int index) {
    if (self->active != 0) {
        return AvatarControls__IsActionPressedImpl(
            self->controls, lbl_8031FB60[index].action, lbl_8031FB60[index].flag);
    }
    return 0;
}

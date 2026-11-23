/* AvatarControls__DispatchInputTransitionCallbacks @ 0x80099D18 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int action;
    int flag;
} ActionProbe;

typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*fn)(void *self);
} VoidVtbl;

typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*fn)(void *self, float a, float b);
} FloatVtbl;

typedef struct {
    char pad[4];
    float a;
    float b;
} InputState;

typedef struct {
    void *table;
    InputState *controls;
    int active;
} AvatarControls;

extern ActionProbe lbl_8031FB60[] __attribute__((section(".data")));
extern float lbl_8031FBD0 __attribute__((section(".data")));
extern int AvatarControls__IsActionPressedImpl(void *controls, int action, int flag);
extern int AvatarControls__IsActionReleasedImpl(void *controls, int action, int flag);

void AvatarControls__DispatchInputTransitionCallbacks(AvatarControls *self) {
    int offset;
    int count;
    ActionProbe *base;
    int *flag;
    void *obj;
    VoidVtbl *vt;

    if (self->table == 0) {
        return;
    }
    if (self->active != 0) {
        offset = 0;
        base = lbl_8031FB60;
        count = 14;
        flag = &base->flag;
        do {
            if (*(void **)((char *)self->table + offset) != 0 &&
                AvatarControls__IsActionPressedImpl(
                    self->controls, *(int *)((char *)base + offset), *flag) != 0) {
                obj = *(void **)((char *)self->table + offset);
                vt = *(VoidVtbl **)obj;
                vt->fn((char *)obj + vt->adjust);
            }
            if (*(void **)((char *)self->table + 4 + offset) != 0 &&
                AvatarControls__IsActionReleasedImpl(
                    self->controls, *(int *)((char *)base + offset), *flag) != 0) {
                obj = *(void **)((char *)self->table + 4 + offset);
                vt = *(VoidVtbl **)obj;
                vt->fn((char *)obj + vt->adjust);
            }
            flag += 2;
            offset += 8;
            count -= 1;
        } while (count != 0);
        obj = *(void **)((char *)self->table + 0x70);
        if (obj != 0) {
            FloatVtbl *vt = *(FloatVtbl **)obj;
            InputState *controls = self->controls;
            vt->fn((char *)obj + vt->adjust, controls->a, controls->b);
        }
    } else {
        obj = *(void **)((char *)self->table + 0x70);
        if (obj != 0) {
            FloatVtbl *vt = *(FloatVtbl **)obj;
            float value = lbl_8031FBD0;
            vt->fn((char *)obj + vt->adjust, value, value);
        }
    }
}

/* AvatarControls__ActivateCurrentMode @ 0x800A2570 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*AvatarModeFn)(void *obj);

void *AvatarControls__ActivateCurrentMode(char *self) {
    char *mode = *(char **)(self + 8);
    char *vtable = *(char **)(mode + 4);
    int adjustment = *(short *)(vtable + 48);
    AvatarModeFn activate = *(AvatarModeFn *)(vtable + 52);
    char *owner;

    activate(mode + adjustment);
    owner = *(char **)self;
    *(int *)(owner + 40) = *(int *)(self + 676);
    return *(void **)(self + 8);
}

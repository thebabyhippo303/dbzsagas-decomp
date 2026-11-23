/* Avatar__RequestStandardRoamImpl @ 0x800A6060 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x7E4];
    int mode;
} AvatarMode;

typedef struct {
    AvatarMode *mode;
    char pad[0x148 - sizeof(AvatarMode *)];
    void *roam;
} AvatarRoam;

void Avatar__RequestStandardRoamImpl(AvatarRoam *avatar) {
    if (avatar->mode->mode != 0)
        avatar->roam = (char *)avatar + 0x14C;
    else
        avatar->roam = (char *)avatar + 0x304;
}

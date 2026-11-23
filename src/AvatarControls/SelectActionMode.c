/* AvatarControls__SelectActionMode @ 0x800A2820 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void AvatarControls__SelectActionMode(char *arg0, s32 arg1) {
    char *p;

    switch (arg1) {
    case 0:
        p = arg0 + 0x10;
        *(char **)(arg0 + 12) = p;
        *(char **)(arg0 + 8) = p;
        return;
    case 1:
        p = arg0 + 0xB4;
        *(char **)(arg0 + 12) = p;
        *(char **)(arg0 + 8) = p;
        return;
    case 2:
        p = arg0 + 0x1E4;
        *(char **)(arg0 + 12) = p;
        *(char **)(arg0 + 8) = p;
        return;
    }
}

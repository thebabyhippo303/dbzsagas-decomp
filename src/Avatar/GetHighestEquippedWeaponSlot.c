/* Avatar__GetHighestEquippedWeaponSlot @ 0x80098FF4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
int Avatar__GetHighestEquippedWeaponSlot(void *self) {
    int i;
    int off;
    int r = 0;
    for (i = 5, off = 3708; i >= 0; off -= 36, i--) {
        int used = 0;
        char *p = *(char **)((char *)self + 5532) + 36;
        if (*(int *)(p + off) != 0) {
            used = 1;
        }
        if (used) {
            r = i + 1;
            break;
        }
    }
    return r;
}

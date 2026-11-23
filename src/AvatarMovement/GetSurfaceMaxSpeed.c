/* AvatarMovement__GetSurfaceMaxSpeed @ 0x800B69C8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DC5B0;
extern char lbl_80320000[];
extern void *AvaSurf__GetRow(void *surface, int id, int index);

float AvatarMovement__GetSurfaceMaxSpeed(void **movement, int index) {
    void *self = *movement;
    void *row = AvaSurf__GetRow(
        lbl_803DC5B0, *(int *)((char *)self + 0x14), index);

    if (row) {
        return *(float *)((char *)row + 0x14);
    }
    return *(float *)(lbl_80320000 + 0x1288);
}

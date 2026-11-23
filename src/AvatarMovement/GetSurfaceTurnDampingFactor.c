/* AvatarMovement__GetSurfaceTurnDampingFactor @ 0x800B6980 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* AvatarMovement__GetSurfaceTurnDampingFactor @ 0x800B6980 */

typedef struct {
    char pad[20];
    int surfaceId;
} MoveInner;

typedef struct {
    MoveInner *inner;
} AvatarMovement;

typedef struct {
    char pad[16];
    float turnDamping;
} SurfRow;

extern void *lbl_803D8250;
extern SurfRow *AvaSurf__GetRow(void *table, int surfaceId, int arg);

float AvatarMovement__GetSurfaceTurnDampingFactor(AvatarMovement *self, int arg) {
    SurfRow *row = AvaSurf__GetRow(lbl_803D8250, self->inner->surfaceId, arg);
    volatile float *pool = (volatile float *)0x80320000;

    if (row != 0)
        return row->turnDamping;
    return pool[1185];
}

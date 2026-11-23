/* AvatarMovement__GetSurfaceFrictionCoefficients @ 0x800B6A58 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[20];
    int surfaceId;
} MoveInner;

typedef struct {
    MoveInner *inner;
} AvatarMovement;

typedef struct {
    float first;
    float second;
} SurfaceRow;

extern void *lbl_803DC5B0;
extern char lbl_80320000[];
extern SurfaceRow *AvaSurf__GetRow(void *table, int surfaceId, int index);

void AvatarMovement__GetSurfaceFrictionCoefficients(AvatarMovement *self,
                                                     int index,
                                                     float *first,
                                                     float *second) {
    SurfaceRow *row = AvaSurf__GetRow(
        lbl_803DC5B0, self->inner->surfaceId, index);
    float fallback;

    if (row) {
        *first = row->first;
        *second = row->second;
    } else {
        fallback = *(float *)(lbl_80320000 + 0x1294);
        *first = fallback;
        *second = fallback;
    }
}

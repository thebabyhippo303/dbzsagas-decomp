/* CameraCollisionBlockers__SetNonProtagonistCast @ 0x800035B0 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraCollisionBlockers__SetNonProtagonistCast @ 0x800035B0 (0x50). */
extern void Actor__ToNonProtagonistCastImpl(void *actor);

void CameraCollisionBlockers__SetNonProtagonistCast(void *self) {
    Actor__ToNonProtagonistCastImpl(*(void **)self);
    Actor__ToNonProtagonistCastImpl(*(void **)((char *)self + 4));
    Actor__ToNonProtagonistCastImpl(*(void **)((char *)self + 8));
    Actor__ToNonProtagonistCastImpl(*(void **)((char *)self + 12));
    Actor__ToNonProtagonistCastImpl(*(void **)((char *)self + 16));
}

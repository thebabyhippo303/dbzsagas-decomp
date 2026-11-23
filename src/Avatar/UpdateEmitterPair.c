/* Avatar__UpdateEmitterPair @ 0x80095838 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarEmitter {
    char pad[0x2E8];
    char first[0x368 - 0x2E8];
    char second[4];
} AvatarEmitter;

void Avatar__UpdateEmitterPlacementAndAlpha(AvatarEmitter *self, void *first, void *second);

void Avatar__UpdateEmitterPair(AvatarEmitter *self) {
    Avatar__UpdateEmitterPlacementAndAlpha(self, &self->first, &self->second);
}

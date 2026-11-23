/* PathCam__SetCurve @ 0x800CBC14 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PathCam__SetPath @ 0x800CBC14 (0x1C). ProDG -O2. */
typedef struct {
    char pad[64];
    volatile void *path;
    volatile float value;
    volatile int clear;
} PathCam;

int PathCam__SetPath(PathCam *self, void *path, float value) {
    self->clear = 0;
    self->value = value;
    self->path = path;
    return 1;
}

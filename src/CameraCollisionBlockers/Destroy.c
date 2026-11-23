/* CameraCollisionBlockers__Destroy @ 0x80003520 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraCollisionBlockers__Destroy @ 0x80003520 (0x40). ProDG -O2. */
extern void fn_801843CC(void *self);

void CameraCollisionBlockers__Destroy(void *self, int flags) {
    char *base = self;

    *(volatile int *)(base + 16) = 0;
    *(volatile int *)(base + 0) = 0;
    *(volatile int *)(base + 4) = 0;
    *(volatile int *)(base + 8) = 0;
    *(volatile int *)(base + 12) = 0;
    if ((flags & 1) != 0)
        fn_801843CC(self);
}

/* SwooshStreak__DestroyResource @ 0x8025031C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SwooshStreak__DestroyResource @ 0x8025031C (0x50). ProDG -O2. */
typedef struct {
    void *child;
} SwooshResource;

extern void fn_802505F0(void *child, int flags);
extern void fn_801843CC(void *resource);

void SwooshStreak__DestroyResource(SwooshResource *resource, unsigned int flags) {
    if (resource->child != 0)
        fn_802505F0(resource->child, 3);
    if (flags & 1)
        fn_801843CC(resource);
}

/* FullScreenEffect__SetActive @ 0x800E2970 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FullScreenEffect__SetActive @ 0x800E2970 (0x58). ProDG -O2. */
extern void FullScreenEffect__DestroyResources(void *self);
extern void FullScreenEffect__BuildRenderResources(void *self);

void FullScreenEffect__SetActive(char *self, int active) {
    if (active == 0) {
        FullScreenEffect__DestroyResources(self);
        *(int *)(self + 156) = active;
    } else if (*(int *)(self + 156) == 0) {
        *(int *)(self + 156) = 1;
        FullScreenEffect__BuildRenderResources(self);
    }
}

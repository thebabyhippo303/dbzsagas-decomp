/* Archive__Close @ 0x8017F408 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Archive__Close @ 0x8017F408 */
#define NULL 0

extern void memFree(void *ptr);
extern int Archive__CloseBackingSource(void *archive);

void Archive__Close(void *self) {
    void *temp;

    if (self != NULL) {
        if (*(void **)((char *)self + 0x20) == NULL) {
            temp = *(void **)((char *)self + 0x1C);
            if (temp != NULL) {
                memFree(temp);
                *(void **)((char *)self + 0x1C) = NULL;
            }
        } else {
            temp = *(void **)((char *)self + 0x24);
            if (temp != NULL) {
                memFree(temp);
            }
            *(void **)((char *)self + 0x24) = NULL;
            *(void **)((char *)self + 0x20) = NULL;
            *(void **)((char *)self + 0x1C) = NULL;
        }
        Archive__CloseBackingSource(self);
    }
}

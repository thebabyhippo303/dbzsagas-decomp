/* NoiseTable__Destroy @ 0x80283298 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed int s32;
#define NULL 0
void memFree(void *p);
void Mem__Delete(void *p);
void NoiseTable__Destroy(void *self, s32 flags) {
    void *p = *(void **)self;
    if (p != NULL)
        memFree(p);
    if (flags & 1)
        Mem__Delete(self);
}

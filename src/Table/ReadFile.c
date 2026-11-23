/* Table__ReadFile @ 0x801A91F0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 File__Read(void *, s32, s32);

s32 Table__ReadFile(void *self, void *file, s32 buf, s32 size) {
    return File__Read(file, buf, size);
}

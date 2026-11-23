/* LineToSphere__Destroy @ 0x801D3FCC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32; typedef float f32;
void Mem__Delete(void *);
extern char lbl_80342148[] __attribute__((section(".data")));
extern char lbl_80342350[] __attribute__((section(".data")));
extern s32 lbl_803DE570 __attribute__((section(".sdata")));

void LineToSphere__Destroy(char *self, s32 flags) {
    char *owner;
    s32 val;
    f32 f;
    u32 mode;

    *(char **)(self + 0x1C) = lbl_80342148;
    if (*(s32 *)(self + 0x74) != 0) {
        owner = *(char **)(self + 0x24);
        val = *(s32 *)(self + 0x78);
        f = *(f32 *)(self + 0x7C);
        if (*(s32 *)(owner + 0x30) != 0 && self == *(char **)(owner + 0x2C)) {
            mode = *(s32 *)(owner + 0x1C);
            mode &= lbl_803DE570;
            *(s32 *)(owner + 0x2C) = val;
            switch (mode) {
            case 0x10:
                *(f32 *)(owner + 0x24) = f;
                break;
            case 0x20:
                *(f32 *)(owner + 0x20) = f;
                break;
            case 0x30:
                *(f32 *)(owner + 0x28) = f;
                break;
            }
        }
    }
    *(char **)(self + 0x1C) = lbl_80342350;
    if (flags & 1) {
        Mem__Delete(self);
    }
}

/* LineToAabb__Destroy @ 0x801D3F10 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32; typedef float f32;
void Mem__Delete(void *);
extern char lbl_80342170[] __attribute__((section(".data")));
extern char lbl_80342350[] __attribute__((section(".data")));
extern s32 lbl_803DE570 __attribute__((section(".sdata")));

void LineToAabb__Destroy(char *self, s32 flags) {
    char *owner;
    s32 val;
    f32 f;
    u32 mode;

    *(char **)(self + 0x1C) = lbl_80342170;
    if (*(s32 *)(self + 0x64) != 0) {
        owner = *(char **)(self + 0x24);
        val = *(s32 *)(self + 0x68);
        f = *(f32 *)(self + 0x6C);
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

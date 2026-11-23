/* UIListInput__MoveDown @ 0x8010222C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef float f32;
typedef struct { char pad0[0xA2C]; s8 sel; char pad1[3]; s32 changed; } UIList;
typedef struct { char pad[3]; u8 enabled; } Entry;

Entry *ComboData__GetCurrentValuePointer(void *, void *, s32);
void Sound__Play2DWithVolumePitch(char *, void *, f32, f32);
extern char lbl_803251DC[] __attribute__((section(".data")));
extern f32 lbl_803251E8 __attribute__((section(".data")));
extern f32 lbl_803251EC __attribute__((section(".data")));
extern s32 *lbl_803DC59C;
extern void *lbl_803DC71C;

void UIListInput__MoveDown(UIList *self) {
    s32 sel = self->sel;
    void *unused;
    if (sel < *lbl_803DC59C - 1 && ComboData__GetCurrentValuePointer(lbl_803DC71C, unused, sel + 1)->enabled != 0) {
        self->changed = 1;
        self->sel = (s8)(self->sel + 1);
        Sound__Play2DWithVolumePitch(lbl_803251DC, 0, lbl_803251E8, lbl_803251EC);
    }
}

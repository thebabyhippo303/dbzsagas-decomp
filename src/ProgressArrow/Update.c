/* ProgressArrow__Update @ 0x8011F468 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct VEnt { short off; short pad; void (*fn)(void *, s32); } VEnt;
typedef struct VTab { char pad[0x60]; VEnt e; } VTab;
typedef struct Arrow { char pad[0x34]; VTab *vt; } Arrow;
typedef struct ArrowList { Arrow **items; s32 count; } ArrowList;

void ProgressArrow__DisplayImpl(f32);
void ProgressArrow__ResetDisplayAfterExpiry(void *);
extern f32 lbl_80327304 __attribute__((section(".data")));
extern f32 lbl_80327308 __attribute__((section(".data")));
extern f32 lbl_8032730C __attribute__((section(".data")));
extern ArrowList lbl_803941AC __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));
extern f32 lbl_803DD980;
extern s32 lbl_803DD984;
extern f32 lbl_803DD988;

void ProgressArrow__Update(void) {
    f32 t;
    s32 i;
    s32 off;
    Arrow *a;
    if (lbl_803DD984 == 0) {
        t = lbl_803DD988 - lbl_803A35BC;
        lbl_803DD988 = t;
        if (!(t >= lbl_80327304)) {
            ProgressArrow__DisplayImpl(lbl_80327308);
        }
    } else if (!(lbl_803A35C4 <= lbl_803DD980)) {
        lbl_803DD984 = 0;
        i = 0;
        lbl_803DD988 = lbl_8032730C;
        if (i < lbl_803941AC.count) {
            off = 0;
            do {
                a = *(Arrow **)((char *)lbl_803941AC.items + off);
                i++;
                off += 4;
                a->vt->e.fn((char *)a + a->vt->e.off, 1);
                ProgressArrow__ResetDisplayAfterExpiry(a);
            } while (i < lbl_803941AC.count);
        }
    }
}

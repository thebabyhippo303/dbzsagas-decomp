/* SpiritBomb__GetSkyDome @ 0x800454AC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned short u16;
typedef float f32;
typedef struct NameHolder { char pad[0x20]; char name[1]; } NameHolder;
typedef struct Elem { char pad[0x8C]; f32 f8c; char pad2[0x94 - 0x90]; NameHolder *nh; } Elem;
typedef struct Arr { u16 count; } Arr;

void *Database__GetArrayElement(void *, unsigned int);
Arr *Database__GetTypedObject(s32, const char *, void *, s32);
void Script__PushInt(void *, void *, s32);
s32 String__CompareIgnoreCase(const char *, const char *);
extern f32 lbl_80311FBC __attribute__((section(".data")));
extern void *lbl_803B1E94 __attribute__((section(".data")));

void SpiritBomb__GetSkyDome(void *script, void *ctx) {
    Arr *a = Database__GetTypedObject(0x60, 0, lbl_803B1E94, 0);
    Elem *found = 0;
    Elem *e;
    s32 i;
    f32 k;
    if (a != 0) {
        k = lbl_80311FBC;
        for (i = 0; i < a->count; i++) {
            e = Database__GetArrayElement(a, i);
            if (e != 0 && String__CompareIgnoreCase(e->nh->name, "skydome2") == 0) {
                found = e;
                found->f8c = k;
                break;
            }
        }
    }
    Script__PushInt(script, ctx, (s32)found);
}

/* MissionUI__CreateStatsSummaryModeHeader @ 0x801247C0 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__AddChild(void *, void *);
void *Mem__New(u32);
void SphereText__SetText(void *, void *);
void * UI__ConstructAnimatedTextEffect(void *, void *);        /* extern */
f32 UI__GetScreenWidth(void);                       /* extern */
void Sphere__SetPosition(void *, f32, f32);         /* extern */
void Sphere__SetAnchor(void *, f32, f32);           /* extern */
void Sphere__SetLayer(void *, s32);                 /* extern */
void Sphere__EnableDropShadow(void *);              /* extern */
void UI__SetSelectedEntry(void *, void *);          /* extern */
void SphereText__SetSize(void *, f32);              /* extern */
void SphereText__SetWrapWidth(void *, f32);         /* extern */
void SphereText__SetAlignment(void *, f32);         /* extern */
extern f32 lbl_8032750C __attribute__((section(".data")));
extern f32 lbl_80327510 __attribute__((section(".data")));
extern f32 lbl_80327514 __attribute__((section(".data")));
extern f32 lbl_80327518 __attribute__((section(".data")));
extern M2C_UNK lbl_8035E640 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void MissionUI__CreateStatsSummaryModeHeader(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1;
    char *table;
    void *temp_r30;
    void *temp_r31;

    temp_r30 = arg0 + 0xB0D0;
    SphereText__SetWrapWidth(temp_r30, lbl_8032750C);
    Sphere__SetAnchor(temp_r30, lbl_80327510, lbl_80327510);
    temp_f1 = UI__GetScreenWidth();
    temp_f31 = lbl_80327510;
    Sphere__SetPosition(temp_r30, temp_f1 * temp_f31, lbl_80327514);
    SphereText__SetSize(temp_r30, lbl_80327518);
    SphereText__SetAlignment(temp_r30, temp_f31);
    Sphere__SetLayer(temp_r30, 0x6000);
    Sphere__EnableDropShadow(temp_r30);
    table = (char *)&lbl_8035E640;
    temp_r31 = M2C_FIELD(lbl_803DC3C0, void **, 0x238);
    table += 4;
    SphereText__SetText(temp_r30, *(s8 **)(table + (M2C_FIELD(temp_r31, s32 *, 4) << 5)));
    Sphere__AddChild(arg0 + 0x344, temp_r30);
    UI__SetSelectedEntry(temp_r30, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8U), temp_r30));
}


/* SurfaceType__FormatRow @ 0x801F945C (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;
typedef struct SurfaceTypeRow { const char *name; s32 database; s32 dynamic; s32 explicit_type; } SurfaceTypeRow;
typedef struct SurfaceType { s32 count; s32 pad4; s32 pad8; SurfaceTypeRow *rows; s32 width; } SurfaceType;
extern int sprintf(char *, const char *, ...);
extern char *strcat(char *, const char *);
extern char lbl_8034472C[] __attribute__((section(".data")));
extern char lbl_80344760[] __attribute__((section(".data")));
extern char lbl_8034476C[] __attribute__((section(".data")));
extern char lbl_80344778[] __attribute__((section(".data")));
extern char lbl_80344784[] __attribute__((section(".data")));
extern char lbl_80344790[] __attribute__((section(".data")));
extern char lbl_8034479C[] __attribute__((section(".data")));
char *SurfaceType__FormatRow(SurfaceType *self, s32 index, char *out, s32 width) {
    s32 remaining;
    *out = 0;
    if (self->rows == 0 || index < 0 || index >= self->count) return out;
    remaining = width - self->width;
    if (remaining - 1 < 0) return out;
    sprintf(out, lbl_8034472C, self->width, self->rows[index].name);
    remaining -= 11;
    if (remaining < 0) return out;
    if (self->rows[index].database == 0) strcat(out, lbl_80344760);
    else strcat(out, lbl_8034476C);
    remaining -= 10;
    if (remaining < 0) return out;
    if (self->rows[index].dynamic != 0) strcat(out, lbl_80344778);
    else strcat(out, lbl_80344784);
    if (remaining - 10 < 0) return out;
    if (self->rows[index].explicit_type != 0) strcat(out, lbl_80344790);
    else strcat(out, lbl_8034479C);
    return out;
}

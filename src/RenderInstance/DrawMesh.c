/* RenderInstance__DrawMesh @ 0x80244C6C (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

void MatrixStack__SetMode(s32);
void MatrixStack__Load(void *);
void GXSetArray(s32, s32, s32);
void GXFlush(void);
void RenderState__Change(s32, s32);
void GXCallDisplayList(s32, s32);

typedef struct Stats {
    char pad[888];
    s32 f888;
    s32 f892;
    s32 f896;
    s32 f900;
    s32 f904;
} Stats;

typedef struct {
    char pad[60];
    Stats *stats;
} SceneG;

extern SceneG lbl_803AD7B0 __attribute__((section(".data")));
extern u8 *lbl_803DCCFC;

typedef struct Mesh {
    struct Mesh *next;
    char pad[12];
    s32 size;
    char pad2[2];
    u16 count;
    char pad3[1];
    u8 flags;
    char pad4[6];
    char dl;
} Mesh;

typedef struct {
    char pad[84];
    s32 f84;
    char pad2[28];
    s32 f116;
    Mesh *mesh;
    char pad3[20];
    s32 f144;
} RenderInstance;

void RenderInstance__DrawMesh(RenderInstance *arg0, void *arg1) {
    s32 var_r4;
    u8 temp_r0;
    Mesh *var_r30;

    MatrixStack__SetMode(1);
    MatrixStack__Load(arg1);
    GXSetArray(9, arg0->f84, 0xC);
    GXSetArray(0xD, arg0->f144, 8);
    GXFlush();
    var_r30 = arg0->mesh;
    if (var_r30 != NULL) {
        do {
            temp_r0 = var_r30->flags;
            if (temp_r0 & 0x20) {
                var_r4 = (temp_r0 & 2) ? 2 : 1;
                RenderState__Change(2, var_r4);
                GXCallDisplayList((s32)&var_r30->dl, var_r30->size);
                if (lbl_803AD7B0.stats != NULL) {
                    lbl_803AD7B0.stats->f888 += var_r30->count;
                    if (lbl_803DCCFC[1] & 4) {
                        lbl_803AD7B0.stats->f892 += var_r30->count;
                    } else {
                        lbl_803AD7B0.stats->f896 += var_r30->count;
                    }
                    if (lbl_803AD7B0.stats != NULL) {
                        lbl_803AD7B0.stats->f904 += var_r30->count;
                    }
                }
            }
            var_r30 = var_r30->next;
        } while (var_r30 != NULL);
    }
    if (lbl_803AD7B0.stats != NULL) {
        lbl_803AD7B0.stats->f900 += arg0->f116;
    }
}

/* TextureMgr__FreeRenderTargetPool @ 0x80247FDC (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { char pad0[4]; u16 b1; char pad1[6]; u16 b2; char pad2[10]; } RTE;
typedef struct { void *pool[3]; s32 count[3]; } RTP;

extern RTP lbl_803B1D0C;
void TexBind__Release(u32 id, s32 unk);
void memFree(void *block);

void TextureMgr__FreeRenderTargetPool(void) {
    s32 i;
    s32 j;
    RTE *e;

    for (i = 0; i <= 2; i++) {
        if (lbl_803B1D0C.pool[i] != NULL) {
            for (j = 0; j < lbl_803B1D0C.count[i]; j++) {
                e = &((RTE *)lbl_803B1D0C.pool[i])[j];
                if (e->b1 != 0) {
                    TexBind__Release(e->b1, 0);
                }
                e = &((RTE *)lbl_803B1D0C.pool[i])[j];
                if (e->b2 != 0) {
                    TexBind__Release(e->b2, 0);
                }
            }
            memFree(lbl_803B1D0C.pool[i]);
            lbl_803B1D0C.pool[i] = NULL;
            lbl_803B1D0C.count[i] = 0;
        }
    }
}

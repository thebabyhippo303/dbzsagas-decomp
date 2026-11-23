/* SoundGroup2D__Destroy @ 0x8019DE18 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { void **items; s32 count; } PtrList;
void SoundGroup__ReleaseAllVoices(void *);
void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void SoundGroup__Destroy(void *, s32);
extern M2C_UNK lbl_8033FE68 __attribute__((section(".data")));

void SoundGroup2D__Destroy(void *arg0, s32 arg1) {
    char *base;
    PtrList *list;
    s32 i;
    s32 n;
    s32 count;

    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_8033FE68;
    SoundGroup__ReleaseAllVoices(arg0);
    base = (char *)arg0 + 0x68;
    if (*(PtrList **)(base + 8) != NULL) {
        count = (*(PtrList **)(base + 8))->count;
        if (count > 0) {
            n = count;
            i = 0;
            do {
                void *item = *(void **)((char *)(*(PtrList **)(base + 8))->items + (i << 2));
                if (item != NULL) {
                    Mem__DeleteArray(item);
                }
                i++;
            } while (--n != 0);
        }
        list = *(PtrList **)(base + 8);
        if (list != NULL) {
            if (list->items != NULL) {
                Mem__Delete(list->items);
            }
            Mem__Delete(list);
        }
        *(PtrList **)(base + 8) = NULL;
    }
    SoundGroup__Destroy(arg0, arg1);
}

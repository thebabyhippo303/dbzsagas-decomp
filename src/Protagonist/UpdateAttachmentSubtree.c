/* Protagonist__UpdateAttachmentSubtree @ 0x801F1A1C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Protagonist__UpdateAttachmentSubtree(void *);
void Protagonist__UpdateAttachmentSubtree(void *arg0) {
    ((void (*)(void *))*(void **)(*(char **)((char *)arg0 + 52) + 364))((char *)arg0 + *(s16 *)(*(char **)((char *)arg0 + 52) + 360));
    if (*(void **)((char *)arg0 + 392) == NULL) return;
    if (*(void **)((char *)*(void **)((char *)arg0 + 392) + 36) != NULL) {
        Protagonist__UpdateAttachmentSubtree(*(void **)((char *)*(void **)((char *)arg0 + 392) + 36));
    }
    if (*(void **)((char *)*(void **)((char *)arg0 + 392) + 40) == NULL) return;
    Protagonist__UpdateAttachmentSubtree(*(void **)((char *)*(void **)((char *)arg0 + 392) + 40));
}

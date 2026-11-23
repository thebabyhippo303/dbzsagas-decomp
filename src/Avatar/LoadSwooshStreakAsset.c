/* Avatar__LoadSwooshStreakAsset @ 0x8009CD3C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Avatar__LoadSwooshStreakAsset @ 0x8009CD3C */
extern void Avatar__BuildEffectAssetPath(void *avatar, char *path);
extern int fn_80230300(void *a, void *b, unsigned char c, float d, float e, float f);
extern float lbl_8031FE3C __attribute__((section(".data")));
extern float lbl_8031FE40 __attribute__((section(".data")));

int Avatar__LoadSwooshStreakAsset(void *avatar, char *path, void *streak) {
    int result;

    Avatar__BuildEffectAssetPath(avatar, path);
    result = fn_80230300(*(void **)((char *)avatar + 8), *(void **)avatar,
                         *(unsigned char *)((char *)streak + 0xDE), lbl_8031FE3C, lbl_8031FE40, lbl_8031FE40);
    if (result == 0) {
        result = fn_80230300(path, *(void **)avatar, *(unsigned char *)((char *)streak + 0xDE),
                             lbl_8031FE3C, lbl_8031FE40, lbl_8031FE40);
    }
    return result;
}

/* CollisionMaterial__Read @ 0x801A8920 (size: 0x174, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int String__CompareIgnoreCase(const char *a, const char *b);
extern int fn_8025533C(void *self, char *buf, int size);
extern int sscanf(const char *str, const char *fmt, ...);
extern char lbl_80340D54[] __attribute__((section(".data")));
extern char lbl_80340D64[] __attribute__((section(".data")));
extern char lbl_80340D68[] __attribute__((section(".data")));
extern char lbl_80340D6C[] __attribute__((section(".data")));
extern char lbl_80340D70[] __attribute__((section(".data")));

int CollisionMaterial__Read(void *self, char *key, int index) {
    char buf[80];
    int i;
    float f;
    float g;

    if (String__CompareIgnoreCase(key, lbl_80340D54) == 0) {
        if (fn_8025533C(*(void **)self, buf, 80) > 0 && sscanf(buf, lbl_80340D64, &i) == 1) {
            *(int *)(*(char **)((char *)self + 44) + index * 12) = i;
            return 1;
        }
        return 0;
    }
    if (String__CompareIgnoreCase(key, lbl_80340D68) == 0) {
        if (fn_8025533C(*(void **)self, buf, 80) > 0 && sscanf(buf, lbl_80340D6C, &f) == 1) {
            *(float *)(*(char **)((char *)self + 44) + index * 12 + 4) = f;
            return 1;
        }
        return 0;
    }
    if (String__CompareIgnoreCase(key, lbl_80340D70) == 0 && fn_8025533C(*(void **)self, buf, 80) > 0 && sscanf(buf, lbl_80340D6C, &g) == 1) {
        *(float *)(*(char **)((char *)self + 44) + index * 12 + 8) = g;
        return 1;
    }
    return 0;
}

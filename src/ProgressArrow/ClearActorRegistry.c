/* ProgressArrow__ClearActorRegistry @ 0x8011F41C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ProgressArrowRegistry {
    void *actors;
    int field4;
    int field8;
} ProgressArrowRegistry;

extern void fn_801843CC(void *ptr);
extern ProgressArrowRegistry lbl_803941AC __attribute__((section(".data")));

void ProgressArrow__ClearActorRegistry(void) {
    void *actors = lbl_803941AC.actors;
    if (actors != 0) {
        fn_801843CC(actors);
    }
    lbl_803941AC.field4 = 0;
    lbl_803941AC.field8 = 0;
    lbl_803941AC.actors = 0;
}

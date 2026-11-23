/* ProgressArrow__ResetDisplayState @ 0x8011F600 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_80246B54(void *child);
typedef struct {
    char pad[0x28];
    float state;
} ProgressArrowChild;
typedef struct {
    char pad[0x90];
    ProgressArrowChild *child;
} ProgressArrowInner;
typedef struct {
    char pad[0x84];
    ProgressArrowInner *inner;
} ProgressArrow;
extern float lbl_80327310 __attribute__((section(".data")));

void ProgressArrow__ResetDisplayState(ProgressArrow *arrow) {
    ProgressArrowInner *inner = arrow->inner;
    float state = lbl_80327310;
    ProgressArrowChild *child = inner->child;
    child->state = state;
    fn_80246B54(child);
}

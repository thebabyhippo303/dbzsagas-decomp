/* EffectHandle__ReleaseAll @ 0x8022F6D4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__ReleaseAll @ 0x8022F6D4 (0x54). ProDG -O2. */
typedef struct EffectNode {
    char pad[24];
    unsigned int handle;
} EffectNode;

typedef struct {
    char pad[24];
    EffectNode *head;
} EffectActive;

extern EffectActive lbl_803ADD88;
extern void EffectHandle__Release(unsigned int handle);

void EffectHandle__ReleaseAll(void) {
    if (lbl_803ADD88.head != 0) {
        do {
            EffectHandle__Release(lbl_803ADD88.head->handle);
        } while (lbl_803ADD88.head != 0);
    }
}

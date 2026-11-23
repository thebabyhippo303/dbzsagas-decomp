/* LetterBox__GetCurrentOffsets @ 0x8011A3C8 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int a; int b; } Pair;
extern Pair lbl_803DD168 __attribute__((section(".sbss")));
Pair *LetterBox__GetCurrentOffsets(Pair *out) {
    *out = lbl_803DD168;
    return out;
}

/* PathManager__CreateInstance @ 0x801FCD8C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 Mem__New(s32);
s32 PathManager__Construct(s32);
extern s32 lbl_803DD564;

void PathManager__CreateInstance(void) {
    lbl_803DD564 = PathManager__Construct(Mem__New(0x9C));
}

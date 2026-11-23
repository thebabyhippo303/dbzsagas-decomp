/* FuzzyRange__GetLowerPairScore @ 0x80072CB0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
f32 FuzzyRange__Evaluate(s32, f32);
f32 FuzzyRange__GetLowerPairScore(s32 firstIndex, f32 firstValue, s32 secondIndex, f32 secondValue) {
    f32 savedSecond = secondValue;
    s32 savedIndex = secondIndex;
    f32 first = FuzzyRange__Evaluate(firstIndex, firstValue);
    f32 second = FuzzyRange__Evaluate(savedIndex, savedSecond);
    return !(first < second) ? second : first;
}

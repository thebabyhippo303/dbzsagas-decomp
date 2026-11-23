/* CFilterGround__ApplyFocus @ 0x800CF120 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;

typedef struct {
    u32 first;
    u32 second;
    u32 third;
} FocusData;

FocusData *CFilterGround__ApplyFocus(FocusData *dst, void *a1, void *a2, void *a3, void *a4, const FocusData *src) {
    *dst = *src;
    return dst;
}

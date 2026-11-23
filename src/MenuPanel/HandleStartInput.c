/* MenuPanel__HandleStartInput @ 0x80268230 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuPanel__HandleStartInput @ 0x80268230 (0x3C). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void MenuPanel__HandleStartInput(void *obj) {
    void (*fn)(void *, void *) = *(void (**)(void *, void *))((char *)obj + 44668);
    if (fn != NULL) {
        fn(*(void **)((char *)obj + 44608), *(void **)((char *)obj + 44672));
    }
}

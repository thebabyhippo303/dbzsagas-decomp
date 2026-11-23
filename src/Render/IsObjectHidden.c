/* Render__IsObjectHidden @ 0x802818DC (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    char pad_0[0xF4];
    int hidden;
} RenderObject;

int Render__IsObjectHidden(void *context, RenderObject *object) {
    if (object == 0)
        return 1;
    return object->hidden;
}

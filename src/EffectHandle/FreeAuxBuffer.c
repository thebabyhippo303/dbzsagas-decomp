/* EffectHandle__FreeAuxBuffer @ 0x8022FAD0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__FreeAuxBuffer @ 0x8022FAD0 (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x48];
    void *aux_buffer;
    int aux_count;
} EffectManager;

extern EffectManager lbl_803ADD88;
extern void fn_80182DBC(void *buffer);

void EffectHandle__FreeAuxBuffer(void) {
    if (lbl_803ADD88.aux_buffer != 0) {
        fn_80182DBC(lbl_803ADD88.aux_buffer);
        lbl_803ADD88.aux_buffer = 0;
    }
    lbl_803ADD88.aux_count = 0;
}

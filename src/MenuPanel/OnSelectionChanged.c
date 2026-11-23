/* MenuPanel__OnSelectionChanged @ 0x802699EC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MenuPanel__OnSelectionChanged(void *self) {
    void *vt;
    if (M2C_FIELD(self, void **, 0xADFC) == M2C_FIELD(self, void **, 0xADF8)) {
        return;
    }
    if (M2C_FIELD(self, void **, 0xADFC) != NULL) {
        vt = M2C_FIELD(self, void **, 0x19C);
        M2C_FIELD(vt, void (**)(void *), 0x544)((char *)self + M2C_FIELD(vt, s16 *, 0x540));
        vt = M2C_FIELD(self, void **, 0x19C);
        M2C_FIELD(vt, void (**)(void *), 0x54C)((char *)self + M2C_FIELD(vt, s16 *, 0x548));
    }
    if (M2C_FIELD(self, void **, 0xADF8) == NULL) {
        return;
    }
    vt = M2C_FIELD(self, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *), 0x53C)((char *)self + M2C_FIELD(vt, s16 *, 0x538));
}

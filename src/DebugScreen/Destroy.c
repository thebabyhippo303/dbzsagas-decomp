/* DebugScreen__Destroy @ 0x80262928 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[412];
    void *vtable;
} DebugScreen;

extern char lbl_8034BDB0[];
extern void Sphere__DestroyCore(void *self, int flags);

void DebugScreen__Destroy(DebugScreen *self, int flags) {
    self->vtable = lbl_8034BDB0;
    Sphere__DestroyCore(self, flags);
}

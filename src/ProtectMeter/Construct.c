/* ProtectMeter__Construct @ 0x8011F9C0 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x10];
    int slot;
    void *owner;
} ProtectMeter;

void ProtectMeter__CreateWidgets(void);

ProtectMeter *ProtectMeter__Construct(ProtectMeter *self, void *owner) {
    self->owner = owner;
    self->slot = 0;
    ProtectMeter__CreateWidgets();
    return self;
}

/* Instance__SetHolographic @ 0x80207DF8 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad;
    unsigned char flags;
    unsigned short flags2;
} InstanceFlags;

void Instance__SetHolographic(InstanceFlags *instance, int enabled) {
    if (enabled) {
        instance->flags |= 0x12;
        instance->flags2 |= 0x1400;
    } else {
        instance->flags &= (unsigned char)~0x12;
        instance->flags2 &= (unsigned short)~0x1400;
    }
}

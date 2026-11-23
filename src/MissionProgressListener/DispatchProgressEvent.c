/* MissionProgressListener__DispatchProgressEvent @ 0x8011E688 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgressListener__DispatchProgressEvent @ 0x8011E688 (0x54). ProDG -O2. */
typedef struct ProgressOps {
    char pad[8];
    signed short offset;
    char padA[2];
    void (*fn)(void *self);
} ProgressOps;

typedef struct ProgressListener {
    char pad[0x54];
    float base;
    float stored;
    float extra;
    volatile int flag;
    ProgressOps *ops;
} ProgressListener;

extern volatile float lbl_803A35C4 __attribute__((section(".data")));

void MissionProgressListener__DispatchProgressEvent(ProgressListener *self) {
    volatile ProgressListener *v = self;
    float extra;
    float constant;
    float sum;
    ProgressOps *ops;

    v->flag = 1;
    extra = v->extra;
    constant = lbl_803A35C4;
    ops = v->ops;
    sum = constant + extra;
    self->stored = constant;
    self->base = sum;
    ops->fn((char *)self + ops->offset);
}

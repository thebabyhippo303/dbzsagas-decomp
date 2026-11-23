/* MissionProgress__HandleListenerEvent @ 0x8011D00C (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CounterOps {
    char pad[0x28];
    short offset;
    short pad2;
    int (*fn)(struct MissionProgress *self, void *listener);
} CounterOps;

typedef struct WidgetOps {
    char pad[0x70];
    short offset;
    short pad2;
    void (*fn)(void *self, int arg, int a, int b, int c);
} WidgetOps;

typedef struct Widget {
    char pad[0x19C];
    WidgetOps *ops;
} Widget;

typedef struct MissionProgress {
    int id;
    int unused;
    int index;
    char pad[0x44 - 12];
    Widget *widgets;
    char pad2[0x64 - 0x48];
    CounterOps *ops;
    int mode;
} MissionProgress;

typedef struct Listener {
    char pad[0x618];
    int slot;
} Listener;

extern void UI__UpdateIndexedCounterWidgetOffset(void *self, int index, int value);
extern void MissionProgressListener__DispatchProgressEvent(void *self, int event, void *listener);

void MissionProgress__HandleListenerEvent(MissionProgress *self, int event, Listener *listener) {
    CounterOps *ops;
    Widget *widget;
    WidgetOps *wops;
    int mode;
    int value;

    if (event != self->id) {
        return;
    }
    ops = self->ops;
    value = ops->fn((MissionProgress *)((char *)self + ops->offset), listener);
    UI__UpdateIndexedCounterWidgetOffset(self, self->index, value);
    mode = self->mode;
    if (mode == 0) {
        wops = self->widgets[listener->slot].ops;
        wops->fn((char *)&self->widgets[listener->slot] + wops->offset, listener->slot, 0, 1, 1);
    } else {
        widget = (Widget *)(self->index * 416 + (int)self->widgets);
        wops = widget->ops;
        wops->fn((char *)widget + wops->offset, mode, 0, 1, 1);
    }
    self->index += 1;
    MissionProgressListener__DispatchProgressEvent(self, event, listener);
}

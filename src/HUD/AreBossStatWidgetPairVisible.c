/* HUD__AreBossStatWidgetPairVisible @ 0x80122630 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Widget Widget;
typedef struct WidgetVTable WidgetVTable;
struct WidgetVTable { char pad[0x280]; short adjustment; short pad2; int (*isVisible)(void *); };
struct Widget { char pad[0x19C]; WidgetVTable *vtable; };
typedef struct { Widget *first; Widget *second; } WidgetPair;

int HUD__AreBossStatWidgetPairVisible(WidgetPair *pair) {
    int result = 0;
    if (pair->first->vtable->isVisible((char *)pair->first + pair->first->vtable->adjustment) != 0 &&
        pair->second->vtable->isVisible((char *)pair->second + pair->second->vtable->adjustment) != 0) {
        result = 1;
    }
    return result;
}

/* TriggerBox__TriggerInstances @ 0x80032CDC (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Arr { int count; int *data; } Arr;
extern int Script__PopInt(void *script, int context);
extern void fn_80251650(void *, int, Arr *, int, int);
extern char lbl_803B1DDC[] __attribute__((section(".bss")));

void TriggerBox__TriggerInstances(void *script, int context) {
    int a = Script__PopInt(script, context);
    Arr *arr = (Arr *)Script__PopInt(script, context);
    int i;
    for (i = 0; i < arr->count; i++) {
        int e = arr->data[i];
        if (e != 0) {
            fn_80251650(lbl_803B1DDC, a, arr, 0, e);
        }
    }
}

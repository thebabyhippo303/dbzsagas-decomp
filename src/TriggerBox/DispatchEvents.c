/* TriggerBox__DispatchEvents @ 0x800FD7DC (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__DispatchEvents @ 0x800FD7DC (0x104). ProDG -O2. */
typedef signed char s8;
typedef int s32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *TriggerBox__GetEventDispatchData(char *);
s32 TriggerBox__GetExitEventId(void *);
void fn_80251510(void *, int, void *, void *, int);
void fn_80251650(void *, int, int, void *, void *);
s32 TriggerBox__GetEnterEventId(s8 *);
extern int lbl_803B1DDC __attribute__((section(".data")));

void TriggerBox__DispatchEvents(s8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r30;

    if (M2C_FIELD(arg0, s32 *, 0x554) & 0x38) {
        switch (arg1) {
        case 0:
            var_r30 = TriggerBox__GetEnterEventId(arg0);
            break;
        case 1:
            var_r30 = TriggerBox__GetExitEventId(arg0);
            break;
        default:
            var_r30 = 0;
            break;
        }
        if (var_r30 != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x554);
            if (temp_r0 & 0x10) {
                fn_80251510(&lbl_803B1DDC, var_r30, TriggerBox__GetEventDispatchData(arg0), M2C_FIELD(arg0, void **, 0x510), (s32)(arg0 + 0x19C));
            } else if (temp_r0 & 0x20) {
                fn_80251650(&lbl_803B1DDC, var_r30, TriggerBox__GetEventDispatchData(arg0), arg0, M2C_FIELD(arg0, void **, 0x510));
            }
            if (M2C_FIELD(arg0, s32 *, 0x554) & 8) {
                fn_80251510(&lbl_803B1DDC, var_r30, TriggerBox__GetEventDispatchData(arg0), arg0, 0);
            }
        }
    }
}

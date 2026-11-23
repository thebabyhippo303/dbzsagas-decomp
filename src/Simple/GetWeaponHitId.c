/* Simple__GetWeaponHitId @ 0x8002AA34 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void fn_802C809C(void *record, void **value, void *unused_1, void *unused_2,
                        void *unused_3, void *unused_4, void *unused_5, void *unused_6);
extern void Script__PushInt(void *script, void *context, int value);

void Simple__GetWeaponHitId(void *script, void *context) {
    void *record = Script__PopInt(script, context);
    void *value;
    fn_802C809C(record, &value, 0, 0, 0, 0, 0, 0);
    Script__PushInt(script, context, *(int *)*(void **)value);
}

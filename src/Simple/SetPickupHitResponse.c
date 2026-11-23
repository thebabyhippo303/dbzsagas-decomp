/* Simple__SetPickupHitResponse @ 0x8002AC54 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetPickupHitResponse @ 0x8002AC54 (0x78). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Pickup__GetHitResponseData(void *pickup, int *a, void *b, void *c, int **out);

void Simple__SetPickupHitResponse(void *script, void *context) {
    void *pickup = Script__PopInt(script, context);
    int response = 1;
    int a;
    char b[16];
    char c[16];
    int *out;
    if (Script__PopInt(script, context) == 0)
        response = 0;
    a = 0;
    Pickup__GetHitResponseData(pickup, &a, b, c, &out);
    *out = response;
}

/* Pickup__SetStationary @ 0x8002BF74 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__SetStationary @ 0x8002BF74 (0x84). ProDG -O2. */
typedef struct Pickup {
    char pad[0x550];
    float speed;
} Pickup;

extern float Script__PopFloat(void *script, void *context);
extern void *Script__PopInt(void *script, void *context);
extern void Pickup__SetStationaryImpl(Pickup *self, int stationary);

void Pickup__SetStationary(void *script, void *context) {
    float speed = Script__PopFloat(script, context);
    int stationary = (int)Script__PopInt(script, context) != 0;
    Pickup *pickup = Script__PopInt(script, context);

    if (pickup != 0) {
        Pickup__SetStationaryImpl(pickup, stationary);
        if (!stationary)
            pickup->speed = speed;
    }
}

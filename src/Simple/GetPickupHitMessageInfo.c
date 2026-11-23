/* Simple__GetPickupHitMessageInfo @ 0x8002AB94 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct HitVec {
    float x;
    float y;
    float z;
} HitVec;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern void Script__PushFloat(void *script, void *context, float value);
extern void Pickup__GetHitResponseData(void *pickup, int *word, HitVec *a, HitVec *b, int **enabled);

void Simple__GetPickupHitMessageInfo(void *script, void *context) {
    void *pickup;
    int word;
    int *enabled;
    HitVec a;
    HitVec *ap;
    HitVec b;

    pickup = Script__PopInt(script, context);
    ap = &a;
    word = 0;
    Pickup__GetHitResponseData(pickup, &word, ap, &b, &enabled);
    Script__PushInt(script, context, word);
    Script__PushFloat(script, context, a.x);
    Script__PushFloat(script, context, ap->y);
    Script__PushFloat(script, context, ap->z);
    Script__PushFloat(script, context, b.x);
    Script__PushFloat(script, context, b.y);
    Script__PushFloat(script, context, b.z);
}

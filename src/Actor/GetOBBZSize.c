/* Actor__GetOBBZSize @ 0x802AE3F8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetOBBZSize @ 0x802AE3F8 (0x50). ProDG -O2. */
extern void *Script__PopActor(void *script, void *context, int index);
extern void Script__PushFloat(void *script, void *context, float value);

void Actor__GetOBBZSize(void *script, void *context) {
    void *actor = Script__PopActor(script, context, 0);
    float *obb = *(float **)((char *)actor + 132);
    Script__PushFloat(script, context, obb[29] - obb[26]);
}

/* Simple__DisplayMissionProgress @ 0x80041B68 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__DisplayMissionProgress @ 0x80041B68 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void MissionProgress__DisplayAll(void *progress, void *mission);

void Simple__DisplayMissionProgress(void *script, void *context) {
    void *mission = Script__PopInt(script, context);
    void *progress = Script__PopInt(script, context);
    MissionProgress__DisplayAll(progress, mission);
}

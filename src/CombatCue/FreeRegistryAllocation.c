/* CombatCue__FreeRegistryAllocation @ 0x8013365C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CombatCue__FreeRegistryAllocation @ 0x8013365C (0x28). ProDG -O2. */
void Mem__Delete(void *);

void CombatCue__FreeRegistryAllocation(void *allocation, int mode) {
    if (mode & 1) {
        Mem__Delete(allocation);
    }
}

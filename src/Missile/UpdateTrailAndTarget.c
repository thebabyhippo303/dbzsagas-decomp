/* Missile__UpdateTrailAndTarget @ 0x800DA3FC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__UpdateTrailAndTarget @ 0x800DA3FC (0x3C). ProDG -O2. */
extern void Missile__UpdateTrailEffects(void *self, void *trail);
extern void Missile__UpdateTarget(void *self);

void Missile__UpdateTrailAndTarget(char *self) {
    Missile__UpdateTrailEffects(self, *(char **)(self + 868) + 92);
    Missile__UpdateTarget(self);
}

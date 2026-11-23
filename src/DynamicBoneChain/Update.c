/* DynamicBoneChain__Update @ 0x801EBD7C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_801EBDD0();
void fn_801ECBA4(void *, float, void *);
void DynamicBoneChain__ApplyResults(void *);

void DynamicBoneChain__Update(void *self, float dt, void *b) {
    fn_801EBDD0();
    fn_801ECBA4(self, dt, b);
    DynamicBoneChain__ApplyResults(self);
}

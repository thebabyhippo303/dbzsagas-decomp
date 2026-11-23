/* Cast__AddNonProtagonist @ 0x801F5C74 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
void * ActorList__Add(s32, s32);
void Cast__AddNonProtagonist(s32 arg0, s32 arg1) {
    ActorList__Add(arg0 + 0x14, arg1);
    ActorList__Add(arg0 + 0x20, arg1);
    ActorList__Add(arg0 + 0x38, arg1);
}

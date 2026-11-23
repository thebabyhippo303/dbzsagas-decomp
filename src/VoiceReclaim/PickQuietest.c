/* VoiceReclaim__PickQuietest @ 0x8019BA4C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 VoiceReclaim__IsQuieter(void *, void *, void *);
void *SoundGroup__NextReclaimCandidateAfter(void *, void *);
void *SoundGroup__NextReclaimCandidate(void *, void *);

void *VoiceReclaim__PickQuietest(void *group, void *unused, void *a, void *threshold) {
    void *best;
    void *cand;
    void *cursor;

    best = SoundGroup__NextReclaimCandidate(group, a);
    cursor = best;
    if ((cand = SoundGroup__NextReclaimCandidateAfter(group, cursor)) != 0) {
        do {
            if (VoiceReclaim__IsQuieter(group, cand, best) != 0) {
                best = cand;
            }
            cursor = cand;
        } while ((cand = SoundGroup__NextReclaimCandidateAfter(group, cursor)) != 0);
    }
    if (threshold == 0 || VoiceReclaim__IsQuieter(group, best, threshold) != 0) {
        return best;
    }
    return 0;
}

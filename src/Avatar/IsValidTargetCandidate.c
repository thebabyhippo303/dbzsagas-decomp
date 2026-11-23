/* Avatar__IsValidTargetCandidate @ 0x800E38F8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsValidTargetCandidate @ 0x800E38F8 (0xA4). ProDG -O2. */
typedef int s32;

extern s32 Avatar__IsTargetActorTypeAllowed(void *avatar, s32 *a, s32 *b);
extern s32 Avatar__IsValidTargetCandidateImpl(void *avatar, s32 *a, s32 *b);
extern s32 IsCloseEnough(void *avatar, s32 *a, s32 *b);
extern s32 IsLinedUp(void *avatar, s32 *a, s32 *b);
extern s32 IsPathClear(void *avatar, s32 *a, s32 *b);

s32 Avatar__IsValidTargetCandidate(void *avatar, s32 *a, s32 *b) {
    s32 result;
    s32 t;

    if (Avatar__IsTargetActorTypeAllowed(avatar, a, b) == 0 ||
        Avatar__IsValidTargetCandidateImpl(avatar, a, b) == 0 ||
        IsCloseEnough(avatar, a, b) == 0 ||
        IsLinedUp(avatar, a, b) == 0 ||
        (t = IsPathClear(avatar, a, b), result = 1, t == 0)) {
        result = 0;
    }
    return result;
}

/* Actor__ShowBone @ 0x802AE218 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned char u8;
s32 Script__PopInt(void *);
char *Script__PopString(void *, void *, s32 *);
void Actor__FindBoneIdByName(void *, char *, u8 *);
void Actor__SetBoneHidden(void *, s32, s32);
void Mem__DeleteArray(void *);
typedef struct Script { char pad[200]; void *actor; } Script;

void Actor__ShowBone(Script *self, void *ctx) {
    s32 flag = Script__PopInt(self);
    s32 owned;
    u8 id;
    char *name = Script__PopString(self, ctx, &owned);
    void *actor = self->actor;
    Actor__FindBoneIdByName(actor, name, &id);
    Actor__SetBoneHidden(actor, id, flag == 1);
    if (owned != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
}

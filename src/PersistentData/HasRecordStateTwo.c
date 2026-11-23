/* PersistentData__HasRecordStateTwo @ 0x80127520 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Rec { s32 id; s32 b; s32 state; char pad[24]; } Rec;
typedef struct RecList { Rec *recs; s32 count; } RecList;
s32 PersistentData__HasRecordStateTwo(RecList *list, s32 id) {
    s32 result = 0;
    s32 i;
    if (id == 0) {
        return 1;
    }
    for (i = 0; i < list->count; i++) {
        Rec *r = &list->recs[i];
        if (id == r->id) {
            result = (r->state == 2);
        }
    }
    return result;
}

/* Minimap__IsActorCategoryEnabled @ 0x80117E78 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct {
    char pad[0x7E4];
    s32 flag;
} MinimapActor;

s32 Actor__GetCategoryCode(void *);
extern u32 lbl_803DC65C __attribute__((section(".sdata")));

s32 Minimap__IsActorCategoryEnabled(MinimapActor *actor) {
    s32 result = 0;
    s32 code = Actor__GetCategoryCode(actor);
    if (code == 1) {
        if (actor->flag == 0) {
            if (lbl_803DC65C & 2) {
                result = 1;
            }
        } else {
            result = 1;
        }
    } else if (code == 2) {
        result = lbl_803DC65C & 1;
    } else if (code == 3) {
        result = (lbl_803DC65C >> 2) & 1;
    } else if (code == 4) {
        result = 1;
    } else if (code == 5) {
        result = 1;
    }
    return result;
}

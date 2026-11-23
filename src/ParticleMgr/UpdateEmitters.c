/* ParticleMgr__UpdateEmitters @ 0x8021D598 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct Emitter {
    char pad[4];
    volatile u32 flags;
    char pad2[180 - 8];
    struct Emitter *next;
} Emitter;
extern char lbl_803AD05C[];
void Emitter__Update(Emitter *);
void ParticleMgr__UpdateEmitters(void) {
    char *m = lbl_803AD05C;
    char *m2;
    Emitter *e;
    Emitter *cur;
    e = M2C_FIELD(m, Emitter **, 1088);
    if (M2C_FIELD(m, Emitter **, 1088) == NULL) {
        return;
    }
    do {
        m2 = lbl_803AD05C;
        cur = e;
        e = e->next;
        if (M2C_FIELD(m2, s32 *, 1328) == 0 || (cur->flags & 0x20000) != 0) {
            if ((cur->flags & 64) != 0) {
                Emitter__Update(cur);
            }
        }
    } while (e != NULL);
}

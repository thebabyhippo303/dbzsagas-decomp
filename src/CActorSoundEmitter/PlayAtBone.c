/* CActorSoundEmitter__PlayAtBone @ 0x801DEC80 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float lbl_80343C88 __attribute__((section(".data")));
extern char lbl_80343C50[] __attribute__((section(".data")));

int Actor__FindBoneIdByName(void *actor, const char *name, unsigned char *bone_id);
void fn_801DCED0(Vec3 *out, void *actor, unsigned char bone);
void Debug__FormatMessage(const char *fmt, ...);

void CActorSoundEmitter__PlayAtBone(void *self, int mode, const char *name) {
    struct {
        Vec3 pos;
        char pad[4];
        unsigned char bone;
        char pad2[7];
        Vec3 tmp;
    } L;
    Vec3 *posp;
    float fill;
    void *vt;
    void (*fn)(void *, int, Vec3 *);
    short adj;

    fill = lbl_80343C88;
    posp = &L.pos;
    posp->x = fill;
    posp->y = fill;
    posp->z = fill;
    if (Actor__FindBoneIdByName(*(void **)self, name, &L.bone) != 0) {
        fn_801DCED0(&L.tmp, *(void **)self, L.bone);
        *posp = L.tmp;
    } else {
        Debug__FormatMessage(lbl_80343C50, name);
    }
    vt = *((void **)self + 3);
    adj = *(short *)((char *)vt + 0x20);
    fn = *(void (**)(void *, int, Vec3 *))((char *)vt + 0x24);
    fn((char *)self + adj, mode, &L.pos);
}

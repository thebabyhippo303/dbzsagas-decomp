/* LensFlare__LoadModel @ 0x8028B9AC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *dblLoad(char *, s32, s32);

s32 LensFlare__LoadModel(void *arg0, char *arg1) {
    void *handle;

    if (arg1 == NULL) {
        return 0;
    }
    handle = dblLoad(arg1, 0, 0);
    M2C_FIELD(arg0, void **, 0xC) = handle;
    if (handle == NULL) {
        return 0;
    }
    return 1;
}

/* PropertyStream__Open @ 0x802B2E30 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    void *start;
    void *end;
} WorldEnv;
int World__LoadEnv(WorldEnv *self, const char *name);
int PropertyStream__Open(WorldEnv *self, const char *name) {
    return World__LoadEnv(self, name);
}

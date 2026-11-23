/* ActorList__Add @ 0x801DF08C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void ActorList__Add(void *arg0) {
    void **array = M2C_FIELD(arg0, void ***, 4);
    void *vtable = *array;
    void *unused;
    ((void (*)(void *, void *, void *))M2C_FIELD(vtable, void **, 0xC))(
        (char *)array + M2C_FIELD(vtable, s16 *, 8), unused, arg0);
}

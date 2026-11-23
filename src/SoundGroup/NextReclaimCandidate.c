/* SoundGroup__NextReclaimCandidate @ 0x8019B81C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Voice { char pad[0x50]; struct Voice *next; } Voice;
int Voice__HasChannel(Voice *);
int fn_8019D0B0(Voice *);

Voice *SoundGroup__NextReclaimCandidate(void *unused, Voice *v) {
    for (; v != 0; v = v->next) {
        if (Voice__HasChannel(v) != 0 && fn_8019D0B0(v) == 0) {
            break;
        }
    }
    return v;
}

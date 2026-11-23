/* Protagonist__GetBoneVolumeBone @ 0x801F346C (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { char pad[0x168]; int *bones; } Protagonist;

int Protagonist__GetBoneVolumeBone(Protagonist *self, int idx) {
    return self->bones[idx];
}

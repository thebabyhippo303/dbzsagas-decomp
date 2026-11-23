/* Emitter__FreeParticles @ 0x80224D94 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Particle__FreeEntry(void *);
extern f32 lbl_80346848 __attribute__((section(".data")));

typedef struct ParticleEntry {
    char pad[0x70];
    void *owner;
    char pad2[0xC4 - 0x74];
    struct ParticleEntry *next;
} ParticleEntry;

typedef struct {
    ParticleEntry *head;
    char pad[12];
} Bucket;

typedef struct {
    char pad[32];
    Bucket buckets[64];
} EmitterPoolT;

extern EmitterPoolT lbl_803AD05C;

void Emitter__FreeParticles(void *arg0, f32 farg0) {
    ParticleEntry *e;
    ParticleEntry *t;
    f32 k;

    if (farg0 != M2C_FIELD(arg0, f32 *, 0xA8)) {
        e = lbl_803AD05C.buckets[M2C_FIELD(arg0, s32 *, 8)].head;
        while (e != NULL) {
            t = e;
            e = e->next;
            if (t->owner == arg0) {
                Particle__FreeEntry(t);
            }
        }
        k = lbl_80346848;
        M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
        M2C_FIELD(arg0, s32 *, 4) |= 0x800;
        M2C_FIELD(arg0, f32 *, 0x20) = k;
    }
}

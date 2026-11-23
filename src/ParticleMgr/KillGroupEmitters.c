/* ParticleMgr__KillGroupEmitters @ 0x8021CC80 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct Emitter {
    u32 handle;
    char pad[4];
    s32 w8;
    char pad2[180 - 12];
    struct Emitter *next;
    u16 group;
} Emitter;

extern Emitter *lbl_803AD49C __attribute__((section(".data")));
s32 ParticleMgr__FindLibraryIndex(s32 arg);
int Emitter__Kill(u32 handle);

void ParticleMgr__KillGroupEmitters(s32 arg0, s32 arg1) {
    s32 idx = -1;
    Emitter *head;
    Emitter *cur;
    u16 g;

    if (arg1 != 0) {
        idx = ParticleMgr__FindLibraryIndex(arg1);
        if (idx == 0x14) {
            return;
        }
    }
    head = lbl_803AD49C;
    while (head != NULL) {
        cur = head;
        head = cur->next;
        g = cur->group;
        if ((s32)g == arg0 && ((arg1 == 0) || (cur->w8 == idx))) {
            Emitter__Kill(cur->handle);
        }
    }
}

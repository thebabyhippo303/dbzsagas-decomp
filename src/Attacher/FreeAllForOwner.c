/* Attacher__FreeAllForOwner @ 0x80214C44 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Attacher__FreeAllForOwner @ 0x80214C44 (0x54). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct AttacherSys {
    char pad[0xC];
    void *head;
} AttacherSys;
extern AttacherSys lbl_803ACF90 __attribute__((section(".data")));
void Attacher__FreeEntry(void *);
void Attacher__FreeAllForOwner(void *owner) {
    AttacherSys *sys = &lbl_803ACF90;
    void *n = sys->head;
    while (n != NULL) {
        void *nd = n;
        n = M2C_FIELD(n, void **, 4);
        if (M2C_FIELD(nd, void **, 8) == owner) {
            Attacher__FreeEntry(nd);
        }
    }
}

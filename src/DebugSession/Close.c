/* DebugSession__Close @ 0x802CC8B0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void DebugSession__Printf(void *, const char *, ...);
s32 fclose(void *);
void DebugWindowGroup__Release(void *);
void DebugSession__Close(void *s) {
    void *f;
    void *g;
    DebugSession__Printf(s, "Debug session closed.\n");
    f = M2C_FIELD(s, void **, 0);
    if (f != NULL) {
        fclose(f);
        M2C_FIELD(s, void **, 0) = NULL;
    }
    g = M2C_FIELD(s, void **, 8);
    if (g != NULL) {
        DebugWindowGroup__Release(g);
        M2C_FIELD(s, void **, 8) = NULL;
    }
}

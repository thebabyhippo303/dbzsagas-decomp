/* Profiler__InitTimingBars @ 0x801852A8 (size: 0x18C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Profiler__RegisterTimingBar(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK lbl_8033DD20 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD2C __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD3C __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD44 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD58 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD68 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD78 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD88 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DD98 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDA8 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDB8 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDC8 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDD4 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDE0 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DDF4 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DE08 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DE20 __attribute__((section(".data")));
extern M2C_UNK lbl_8033DE2C __attribute__((section(".data")));
extern s32 lbl_803DCBD4;

void Profiler__InitTimingBars(void) {
    lbl_803DCBD4 = 0;
    Profiler__RegisterTimingBar(0, &lbl_8033DD20, 1);
    Profiler__RegisterTimingBar(1, &lbl_8033DD2C, 0);
    Profiler__RegisterTimingBar(2, &lbl_8033DD3C, 0);
    Profiler__RegisterTimingBar(3, &lbl_8033DD44, 0);
    Profiler__RegisterTimingBar(4, &lbl_8033DD58, 0);
    Profiler__RegisterTimingBar(5, &lbl_8033DD68, 0);
    Profiler__RegisterTimingBar(6, &lbl_8033DD78, 0);
    Profiler__RegisterTimingBar(7, &lbl_8033DD88, 0);
    Profiler__RegisterTimingBar(8, &lbl_8033DD98, 0);
    Profiler__RegisterTimingBar(9, &lbl_8033DDA8, 0);
    Profiler__RegisterTimingBar(0xA, &lbl_8033DDB8, 0);
    Profiler__RegisterTimingBar(0xB, &lbl_8033DDC8, 0);
    Profiler__RegisterTimingBar(0xC, &lbl_8033DDD4, 0);
    Profiler__RegisterTimingBar(0xD, &lbl_8033DDE0, 0);
    Profiler__RegisterTimingBar(0xE, &lbl_8033DDF4, 0);
    Profiler__RegisterTimingBar(0xF, &lbl_8033DE08, 0);
    Profiler__RegisterTimingBar(0x10, &lbl_8033DE20, 0);
    Profiler__RegisterTimingBar(0x11, &lbl_8033DE2C, 0);
}


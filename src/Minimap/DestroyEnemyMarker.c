/* Minimap__DestroyEnemyMarker @ 0x8004C1D8 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Minimap__DestroyActorMarkerWidget(void *, unsigned int);
extern M2C_UNK lbl_803184F8 __attribute__((section(".data")));

void Minimap__DestroyCategory3Marker(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803184F8;
    Minimap__DestroyActorMarkerWidget(arg0, arg1);
}

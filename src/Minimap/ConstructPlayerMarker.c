/* Minimap__ConstructPlayerMarker @ 0x8004C208 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK Minimap__CreateActorMarkerWidget();
extern M2C_UNK lbl_80318978 __attribute__((section(".data")));

void *Minimap__ConstructPlayerMarker(void *arg0) {
    void *temp_r10;
    void *temp_r11;

    Minimap__CreateActorMarkerWidget();
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80318978;
    temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x1B0), 6);
    return arg0;
}

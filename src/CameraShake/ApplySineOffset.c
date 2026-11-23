/* CameraShake__ApplySineOffset @ 0x800CFFF8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CameraShake__ApplySineOffset @ 0x800CFFF8 (0x74). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} CamVec;

typedef struct {
    char pad[8];
    float amplitude;
    char padc[4];
    float angle;
} CameraShake;

float sinf(float);
extern float lbl_803DE520;

CamVec *CameraShake__ApplySineOffset(CamVec *out, CameraShake *shake, int unused0, int unused1, int unused2, CamVec *in) {
    float y;

    (void)unused0;
    (void)unused1;
    (void)unused2;
    y = in->y;
    in->y = (shake->amplitude * sinf(shake->angle * lbl_803DE520)) + y;
    *out = *in;
    return out;
}

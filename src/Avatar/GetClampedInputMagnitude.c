/* Avatar__GetClampedInputMagnitude @ 0x8009A018 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetClampedInputMagnitude @ 0x8009A018 (0x40). ProDG -O2.
   1.0f lives at lbl_8031FBE8. An absolute load keeps lis/lfs; a <= test
   emits cror/bso instead of ble. */
extern float sqrtf(float value);

float Avatar__GetClampedInputMagnitude(float x, float y) {
    float mag = sqrtf(x * x + y * y);
    volatile float *pool = (volatile float *)0x80320000;
    float limit = pool[-262];

    if (!(mag <= limit))
        mag = limit;
    return mag;
}

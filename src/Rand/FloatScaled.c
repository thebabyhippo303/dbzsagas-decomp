/* Rand__FloatScaled @ 0x802547AC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
float Rand__FloatClosed(void);

float Rand__FloatScaled(float scale) {
    return Rand__FloatClosed() * scale;
}

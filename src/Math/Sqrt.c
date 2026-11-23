/* Math__Sqrt @ 0x802B2514 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Sqrt @ 0x802B2514 (0x40). ProDG -O2. */
extern float Script__PopFloat(void);
extern void Script__PushFloat(void *self, void *context, float value);
extern float sqrtf(float value);

void Math__Sqrt(void *self, void *context) {
    float value = Script__PopFloat();
    value = sqrtf(value);
    Script__PushFloat(self, context, value);
}

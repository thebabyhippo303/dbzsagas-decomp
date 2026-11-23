/* ParticleMgr__DrawIndexedQuads @ 0x80227818 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void GXBegin(s32, s32, u16);
void GXFlush(void);

void ParticleMgr__DrawIndexedQuads(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 var_r29;
    u32 t1;
    u32 t2;
    u32 t3;
    u16 *fifo;

    GXBegin(0x80, 0, (u16)arg1);
    var_r29 = arg0;
    temp_r30 = arg1 + var_r29;
    if (var_r29 < temp_r30) {
        fifo = (u16 *)0xCC010000;
        do {
            t1 = var_r29 & 0xFFFF;
            t2 = ((u32)var_r29 >> 2) & 0xFFFF;
            ((volatile u16 *)fifo)[-0x4000] = (u16)t1;
            t3 = var_r29 & 3;
            ((volatile u16 *)fifo)[-0x4000] = (u16)t2;
            var_r29++;
            ((volatile u8 *)fifo)[-0x8000] = (u8)t3;
        } while (var_r29 < temp_r30);
    }
    GXFlush();
}

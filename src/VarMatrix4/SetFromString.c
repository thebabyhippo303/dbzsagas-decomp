/* VarMatrix4__SetFromString @ 0x8018D8F4 (size: 0x1F8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
extern char lbl_8033E9FC[] __attribute__((section(".data")));
extern char lbl_8033EA40[] __attribute__((section(".data")));
s32 sscanf(const char *,const char *,...);
s32 VarMatrix4__SetFromString(void *arg0,const char *arg1) {
 f32 values[16]; s32 count;
 if(M2C_FIELD(arg0,s32 *,0)&1) return 0;
 count=sscanf(arg1,lbl_8033E9FC,&values[0],&values[1],&values[2],&values[3],&values[4],&values[5],&values[6],&values[7],&values[8],&values[9],&values[10],&values[11],&values[12],&values[13],&values[14],&values[15]);
 if(count!=16) count=sscanf(arg1,lbl_8033EA40,&values[0],&values[1],&values[2],&values[3],&values[4],&values[5],&values[6],&values[7],&values[8],&values[9],&values[10],&values[11],&values[12],&values[13],&values[14],&values[15]);
 if(count!=16) return 0;
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,0)=values[0];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,4)=values[1];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,8)=values[2];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,12)=values[3];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,16)=values[4];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,20)=values[5];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,24)=values[6];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,28)=values[7];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,32)=values[8];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,36)=values[9];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,40)=values[10];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,44)=values[11];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,48)=values[12];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,52)=values[13];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,56)=values[14];
 M2C_FIELD(M2C_FIELD(arg0,void **,0x40),f32 *,60)=values[15];
 return 1;
}
/* BinkFFT__bitrv216neg @ 0x803004B0 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
#define M2C_FIELD(e,t,o) (*(t)((char*)(e)+(o)))
void BinkFFT__bitrv216neg(void *arg0){ f32 a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31;
a2=M2C_FIELD(arg0,f32*,8);
a3=M2C_FIELD(arg0,f32*,12);
a4=M2C_FIELD(arg0,f32*,16);
a5=M2C_FIELD(arg0,f32*,20);
a6=M2C_FIELD(arg0,f32*,24);
a7=M2C_FIELD(arg0,f32*,28);
a8=M2C_FIELD(arg0,f32*,32);
a9=M2C_FIELD(arg0,f32*,36);
a10=M2C_FIELD(arg0,f32*,40);
a11=M2C_FIELD(arg0,f32*,44);
a12=M2C_FIELD(arg0,f32*,48);
a13=M2C_FIELD(arg0,f32*,52);
a14=M2C_FIELD(arg0,f32*,56);
a15=M2C_FIELD(arg0,f32*,60);
a16=M2C_FIELD(arg0,f32*,64);
a17=M2C_FIELD(arg0,f32*,68);
a18=M2C_FIELD(arg0,f32*,72);
a19=M2C_FIELD(arg0,f32*,76);
a20=M2C_FIELD(arg0,f32*,80);
a21=M2C_FIELD(arg0,f32*,84);
a22=M2C_FIELD(arg0,f32*,88);
a23=M2C_FIELD(arg0,f32*,92);
a24=M2C_FIELD(arg0,f32*,96);
a25=M2C_FIELD(arg0,f32*,100);
a26=M2C_FIELD(arg0,f32*,104);
a27=M2C_FIELD(arg0,f32*,108);
a28=M2C_FIELD(arg0,f32*,112);
a29=M2C_FIELD(arg0,f32*,116);
a30=M2C_FIELD(arg0,f32*,120);
a31=M2C_FIELD(arg0,f32*,124);
M2C_FIELD(arg0,f32*,8)=a30;
M2C_FIELD(arg0,f32*,12)=a31;
M2C_FIELD(arg0,f32*,16)=a14;
M2C_FIELD(arg0,f32*,20)=a15;
M2C_FIELD(arg0,f32*,24)=a22;
M2C_FIELD(arg0,f32*,28)=a23;
M2C_FIELD(arg0,f32*,32)=a6;
M2C_FIELD(arg0,f32*,36)=a7;
M2C_FIELD(arg0,f32*,40)=a26;
M2C_FIELD(arg0,f32*,44)=a27;
M2C_FIELD(arg0,f32*,48)=a10;
M2C_FIELD(arg0,f32*,52)=a11;
M2C_FIELD(arg0,f32*,56)=a18;
M2C_FIELD(arg0,f32*,60)=a19;
M2C_FIELD(arg0,f32*,64)=a2;
M2C_FIELD(arg0,f32*,68)=a3;
M2C_FIELD(arg0,f32*,72)=a28;
M2C_FIELD(arg0,f32*,76)=a29;
M2C_FIELD(arg0,f32*,80)=a12;
M2C_FIELD(arg0,f32*,84)=a13;
M2C_FIELD(arg0,f32*,88)=a20;
M2C_FIELD(arg0,f32*,92)=a21;
M2C_FIELD(arg0,f32*,96)=a4;
M2C_FIELD(arg0,f32*,100)=a5;
M2C_FIELD(arg0,f32*,104)=a24;
M2C_FIELD(arg0,f32*,108)=a25;
M2C_FIELD(arg0,f32*,112)=a8;
M2C_FIELD(arg0,f32*,116)=a9;
M2C_FIELD(arg0,f32*,120)=a16;
M2C_FIELD(arg0,f32*,124)=a17;
}
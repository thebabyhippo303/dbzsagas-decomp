/* AI__AdvanceRangeGatedAimAction2Or25Sequence @ 0x8006B3C4 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
#define NULL 0

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type,expr) ({ typedef char mt_same_width[(sizeof(type)==sizeof(expr))?1:-1]; union { __typeof__(expr) from; type to; } mt_bits={(expr)}; mt_bits.to; })
void AI__SetState(void*,s32); s32 AI__HasPrimaryTimerElapsed(void*,f32); void Avatar__ClearPurpleSpiralEffects(void*); void AI__ComputeTargetingInfo(void*,void*); void AI__UpdateAimingIndicator(void*,void*,s32);
extern f32 lbl_8031EC8C __attribute__((section(".data"))); extern f32 lbl_8031EC90 __attribute__((section(".data"))); extern f32 lbl_803A35C0 __attribute__((section(".data")));
typedef struct {f32 x,y,z;} V3;
void AI__AdvanceRangeGatedAimAction2Or25Sequence(char *self){char info[32];V3 pos;f32 d;char *t;s32 state;AI__ComputeTargetingInfo(info,self);state=M2C_FIELD(self,s32*,0x7C);d=M2C_FIELD(self,f32*,0xE8);switch(state){
case 0:AI__SetState(self,1);if(M2C_FIELD(self,s32*,0x78)!=2)M2C_FIELD(self,s32*,0x380)=45;return;
case 1:t=M2C_FIELD(self,char**,0x390);pos=*(V3*)(t+0x38);AI__UpdateAimingIndicator(self,&pos,1);if(!(d>=M2C_FIELD(info,f32*,0x18))){if(M2C_FIELD(self,s32*,0xC8)==1)M2C_FIELD(self,s32*,0x380)=25;else M2C_FIELD(self,s32*,0x380)=2; M2C_FIELD(self,f32*,0xDC)=lbl_803A35C0;AI__SetState(self,2);return;}M2C_FIELD(self,s32*,0x380)=0;AI__SetState(self,2);return;
case 2:if(AI__HasPrimaryTimerElapsed(self,lbl_8031EC8C)!=0||!(M2C_FIELD(info,f32*,0x18)>=lbl_8031EC90)){Avatar__ClearPurpleSpiralEffects(self);AI__SetState(self,3);M2C_FIELD(self,s32*,0x380)=27;}return;}}
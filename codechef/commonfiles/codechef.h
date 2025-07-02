#ifndef __codechef_h_
#define __codechef_h_

typedef char u1;										// typedef bool u1 (for Borland, needs c++), hence used char here
typedef float f32;
typedef int u32;
typedef long long int l1;

// typedef signed char s8;
// typedef unsigned char u8;
// typedef unsigned short int u16;
// typedef short int s16;
// typedef long signed int s32;
// typedef long unsigned int u32;
// typedef long signed int s64;			// long long not supported in Borland, hence used long
// typedef long unsigned int u64;		// long long not supported in Borland, hence used long
// typedef double f64;

u32 testcases();
u32 printingarray(u32 *array,u32 n);
u32 reversingarray(u32 *array, u32 n);
u32 intconverttoarray(u32 *array, u32 count, u32 n);
u32 countdigits(u32 a, u32 count);
u32 inputarray(u32 *array,u32 n);
u32 inputmatrix(u32 *matrix,u32 n,u32 m);
u32 sumofnnumbers(u32 a);

#endif

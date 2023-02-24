#ifndef __codechef_h_
#define __codechef_h_

typedef char u1;										// typedef bool u1 (for Borland, needs c++), hence used char here
typedef float f32;
typedef int u5;
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

u5 testcases();
u6 printingarray(u5 *array,u5 n);
u5 reversingarray(u5 *array, u5 n);
u5 intconverttoarray(u5 *array, u5 count, u5 n);
u5 countdigits(u5 a, u5 count);
u5 inputarray(u5 *array,u5 n);
u5 inputmatrix(u5 *matrix,u5 n,u5 m);
u5 sumofnnumbers(u5 a);

#endif

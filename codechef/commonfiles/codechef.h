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
u32 arraysum(u32 *array, u32 n);
bool checkrepeat(u32 *array,u32 n);
void swapCharPairs(u1 *string, u32 n); // swapping pairs of an string
void atbashCipher(u1 *string,u32 n,u32 upperlower); // If upper case letter ten upperlower=1 & if lowercase letter keep it as 0
void hasSameChars(u1 *string1,u1 *string2); // Checks if the string has same set of characters or not


#endif

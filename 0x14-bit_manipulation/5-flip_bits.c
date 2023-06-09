#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int x, i;

	x = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			x++;
		result <<= 1;
	}

	return (x);
}

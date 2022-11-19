#include "main.h"
/**
 * countBits - Function that count set bits
 * @n: bits to set
 * Return: count
 */

unsigned long int countBits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first
 * @m: second
 * Return: number of bits you would need to flip to get from one
 * number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	return (countBits(n ^ m));
}

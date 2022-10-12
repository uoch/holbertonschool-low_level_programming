#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*(accept + i))
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (*(s + j) == *(accept + j) )
			break;
		i += i;
	}
	return (j);
}
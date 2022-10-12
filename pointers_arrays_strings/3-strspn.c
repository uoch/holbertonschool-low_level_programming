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
	unsigned int m;

	while (*(accept + i))
	{
		i++;
	}
	m = i ;
	for (j = 0; j <= m; j++)
	{
		if (*(s + j) == *(accept + j) )
			break;
		m += m;
	}
	return (i);
}

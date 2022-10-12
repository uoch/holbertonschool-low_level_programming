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
	unsigned int i = 0, j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (s[i] == accept[j])
				break;

			if (!accept[j])
				break;
			j++;
		}
		i++;
	}
	return (i);
}

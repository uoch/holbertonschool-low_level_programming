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
	unsigned int j = 0;

	while (*(s + i))
	{
		while (accept[j] && (s[i] == accept[j]))
		{
			return (i);
			j++;
		}
		i++;
	}
}

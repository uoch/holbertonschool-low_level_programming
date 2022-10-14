#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j])
			return (s + i);
		i++;
	}
	return (0);
}

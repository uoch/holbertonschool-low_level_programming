#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: outputs the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;
	i = 0;
	while (*(s1 + i) || *(s2 + i))
	{
		n = (*(s1 + i)) - (*(s2 + i));
		i++;
	}
	return (n);
}

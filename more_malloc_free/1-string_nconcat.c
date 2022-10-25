#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i = 0;
	unsigned int j = 0;
	int k;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (*(s1 + i))
		{
			i++;
		}
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (*(s2 + j))
		{
			j++;
		}
	}
	if (j > n)
		j = n;
	s = malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}

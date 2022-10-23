#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		i++;
	}
	a = malloc(i * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(a + j) = *(str + j);
	}
	return (a);
}

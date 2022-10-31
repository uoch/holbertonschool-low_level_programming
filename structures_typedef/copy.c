#include "dog.h"

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

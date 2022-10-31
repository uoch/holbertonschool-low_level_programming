#include "dog.h"

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

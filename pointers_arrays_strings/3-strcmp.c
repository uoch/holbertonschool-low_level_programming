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
    int i, j, n;

    i = j = 0;
    while (*(s1 + i) || *(s2 + j))
    {
        n = (*(s1 + i)) - (*(s2 + j));
        j++;
        i++;
    }

#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char a[] = " \t\n,;.!?\"(){}";
	int n = 0;
	while (*a + j)
	{
		j++;
	}
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{

				for (n = 0; n <= j; n++)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
				i++;
			}
			return (s);
		}
	}
}

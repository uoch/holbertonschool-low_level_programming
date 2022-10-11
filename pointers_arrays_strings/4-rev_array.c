#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;
	n = n-1;
	while (*(a + i))
		i++;
	while (i >= 0)
	{
		n = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = n;
		i--;
		j++;
	}
}

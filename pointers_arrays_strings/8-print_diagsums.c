
#include <stdio.h>
#include "main.h"
void print_diagsums(int *a, int size)
{
	int i, j, n, k, g;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				k += *(a + i) + i;
			n = size - j;
			g += *(a + j) + n;
		}
	}
	printf("%d ,%d\n", k, g);
}


#include <stdio.h>
#include "main.h"
void print_diagsums(int *a, int size)
{
	int i, j, k, g, n;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				k = k + (*(*(a + i) + j));
			n = size - j;
			g = g + *(*(a + i) + n);
		}
		printf("%d\n", k);
		printf("%d\n", g);
	}
}
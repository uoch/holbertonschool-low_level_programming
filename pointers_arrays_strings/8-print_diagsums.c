
#include <stdio.h>
#include "main.h"
void print_diagsums(int (*a)[size], int size)
{
	int i, j, k, g;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				k += a[i][j];
				g += a[i][size - j];
			}
		}
	}
	printf("%d ,%d\n", k, g);
}

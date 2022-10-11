#include "main.h"


void reverse_array(int *a, int n)
{
	int i, j;

	i, j = 0;
	while (*(a + i))
		i++;
	n = *a;
	while (i >= 0)
	{
		*(a + i) = *(a + j);
		i--;
		j++;
	}
	*(a + j) = n;
}
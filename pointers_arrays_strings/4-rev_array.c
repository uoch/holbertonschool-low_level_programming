#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0; 
	j = j - 1;
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
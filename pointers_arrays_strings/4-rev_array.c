#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0; 
	j = 0;
	while (*(a + i))
		i++;
	while (i >= 0)
	{
		n = *(a + i);
		*(a + i) = ;
		*(a + j) = n
		i--;
		j++;
	}
	*(a + j) = n;
}
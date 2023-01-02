#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: value or -1
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid, j;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	while (l < r)
	{
		printf("Searching in array: %d", array[l]);
		for (j = l + 1; j < r + 1; j++)
		{
			printf(", %d", array[j]);
		}
		printf("\n");
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

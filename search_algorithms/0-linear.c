#include "search_algos.h"
/**
 * linear_search - binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: value or -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump Search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if it is not present
 */
int jump_search(int *array, size_t size, int value)
{
	// Finding block size to be jumped
	int step = sqrt(size);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value found between indexes [%d] and [%d]\n", prev, step - 1);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return -1;
	}
	if (array[prev] == value)
		return prev;

	return -1;
}

/**
 * min - returns the minimum of two integers
 * @a: first integer to compare
 * @b: second integer to compare
 *
 * Return: the minimum of a and b
 */
int min(int a, int b)
{
	return (a < b) ? a : b;
}
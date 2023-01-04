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
	int step = sqrt(size);
	int prev = 0;

	while (array[min(step, size) - 1] < value && step < size)
	{
		printf("Value checked array[%d] and [%d]\n", prev, prev);
		prev = step;
		step += sqrt(size);
	}
	while (array[prev] < value && prev < size)
	{
		printf("Value found between indexes [%d] = [%d]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
		return prev;
	return (-1);
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
#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation Search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if it is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (array[high] != array[low] && value >= array[low] && value <= array[high])
    {
        mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

        if (array[mid] < value)
            low = mid + 1;
        else if (value < array[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (value == array[low])
        return low;
    else
        return -1;
}

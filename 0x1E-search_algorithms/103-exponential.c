#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int idx;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", 
			bound / 2, bound >= size ? size - 1 : bound);

	idx = binary_search(array, bound / 2, bound >= size ? size - 1: bound, value);

	if (idx == -1)
		return(-1);

	return (idx);
}
